# for IPUV
#.org    0x00
.global yuvplanar2bgrinterleaved_start
# set shift_in/x to 4 pixels
# set shift_out to 1 pixels
# in to LSB
# line0: y values
# line1: u values  / horizontally upscaled by stream DMA in case of yuv422
# line3: v values  / horizontally upscaled by stream DMA in case of yuv422
# out0 cycle 0 : G
# out0 cycle 1 : R
# out0 cycle 2 : B
# gpr0-gpr6 :    factors and offsets
# vgpr2 :        G results
# vgpr3 :        R results
# vgpr3 :        B results
# vacc0 :        scaled U and V for G
# second half is black and white

yuvplanar2bgrinterleaved_start:
        // scaled to 16384 = 14 bits to allow to deal with overflows
        // B = Y + 2.0284  * U - 2.0284  * 128
        // R = Y + 1.14025 * V - 1.14025 * 128
        // G = Y - 0.39393 * U - 0.58081 * V + (128 * ( 0.39393 + 0.58081)) 
        //mov gpr0,33233 //U->B :  16384 * 2.0284
        //mov gpr1,18682 //V->R :  16384 * 1.14025
        //mov gpr2,6454  //U->G :  16384 * 0.39393
        //mov gpr3,9516  //V->G :  16384 * 0.58081
        //mov gpr4,260   //B offset :  128 * 2.0284
        //mov gpr5,146   //R offset :  128 * 1.14025
        //mov gpr6,125   //G offset :  128 * (0.39393 + 0.58081)

        mov gpr0,29032 //U->B :  16384 * 1.772
        mov gpr1,22970 //V->R :  16384 * 1.402
        mov gpr2,5472  //U->G :  16384 * 0.334
        mov gpr3,11698 //V->G :  16384 * 0.714
        mov gpr4,227   //B offset :  128 * 1.772
        mov gpr5,179   //R offset :  128 * 1.402
        mov gpr6,134   //G offset :  128 * (0.334 + 0.714)
	mov gpr7,8     // for asl and saturation

        //mov loopcnt,(1280/2)/2
        mov confalu,(0 /*unsigned*/ | (1<<1) /*saturate*/ | (14<<4) /*shr*/)

        //mov gpr7,1

        done g,i  // load first 4 pixles yuyv

g:
	// G
        mulh vsacc0,vh5,gpr2    // scale U for G
        mulh vacc0,vh10,gpr3    // scale V for G
        add  vgpr2,vh0,gpr6     // add Y0 and offset
        sub  vgpr2,vgpr2,vacc0  // subtract scaled U and V
        asl  vgpr2,vgpr2,gpr7   // saturate positive G
 
r:
        // R
        mulh vgpr3,vh10,gpr1    // scale V for R
        add  vgpr3,vh0,vgpr3    // add Y0
        sub  vgpr3,vgpr3,gpr5   // sub offset
        asl  vgpr3,vgpr3,gpr7   // saturate positive R
b:
        // B
        mulh vgpr4,vh5,gpr0     // scale U for B
        add  vgpr4,vh0,vgpr4    // add Y
        sub  vgpr4,vgpr4,gpr4   // sub offset
        asl  vgpr4,vgpr4,gpr7   // saturate positive B

bout0:	dout gpr19,gout0,io
gout0:	dout gpr11,rout0,o
rout0:	dout gpr15,bout1,xo

bout1:	dout gpr18,gout1,o
gout1:	dout gpr10,rout1,o
rout1:	dout gpr14,bout2,xo

bout2:	dout gpr17,gout2,o
gout2:	dout gpr9,rout2,o
rout2:	dout gpr13,bout3,xo

bout3:	dout gpr16,gout3,o
gout3:	dout gpr8,rout3,o
rout3:	dout gpr12,g,xo

/*
rout0:	dout gpr15,gout0,io
gout0:	dout gpr11,bout0,o
bout0:	dout gpr19,gout1,xo

bout1:	dout gpr18,gout1,o
gout1:	dout gpr10,bout1,o
bout1:	dout gpr18,rout2,xo

rout2:	dout gpr13,gout2,o
gout2:	dout gpr9,bout2,o
bout2:	dout gpr17,rout3,xo

rout3:	dout gpr12,gout3,o
gout3:	dout gpr8,bout3,o
bout3:	dout gpr16,g,xo
*/

//y00:	dout in3,y01,o
//y01:	dout in3,y02,o
//y02:	dout in3,y10,xo
//y10:	dout in2,y11,o
//y11:	dout in2,y12,o
//y12:	dout in2,y20,xo
//y20:	dout in1,y21,o
//y21:	dout in1,y22,o
//y22:	dout in1,y30,xo
//y30:	dout in0,y31,o
//y31:	dout in0,y32,o
//y32:	dout in0,y00,ixo

        halt
.global yuvplanar2bgrinterleaved_end
yuvplanar2bgrinterleaved_end: