#.org    0x00
.global generic_ipus3x3_start
# set shift_in/x to 1 pixels
# set shift_out to 1 pixels
# input to line 0,1,2
# in to LSB
# out from LSB
# out0 : copied input value

generic_ipus3x3_start:
        mov confalu,(0 /*unsigned*/ | (1<<1) /*saturate*/ | (14<<4) /*shr*/)
        mov confaddt,(0 /*w*/ | (0<<2) /*apply mask*/) | (0<<3) /*unsigned*/ | (0<<5) /*shift*/| (0x40 << 9) /* scale*/)
        mov confsort,(1 /*ina*/ | (1<<2) /*no mask*/)    | (0<<3) /*unsigned*/)
        mov loopcnt,640    // copy first 320 pixels from input
        done in1,i    // load first pixel
in1:    done in2,i    // load first pixel
in2:	done generic3x3_copyloop,i    // load first pixel

.local generic3x3_copyloop
generic3x3_copyloop:

        ldot ina4,generic3x3_copyloop,ixo
//        dout zero,generic_select,ixo

generic_select:
//        mov gpr14,gpr14
//        sub gpr14,1  //cmp gpr15,1
//        beq generic3x3_loop_gauss
//        sub gpr14,1  // cmp gpr15,2
//        beq generic3x3_loop_mgrad
	
//generic3x3_loop_copy:
//        dout ina4,generic3x3_loop_copy,ixo

/*
        mov gpr0,0xffff
generic3x3_loop_neg:
        sub out0,gpr0,ina4
        done generic3x3_loop_neg,ixo
*/

/*
        mov maskv,0b101000101	// select corner pixel in matrix [8...0]
        mov w,4			// apply shift down by 4 
        mov maskv,0b010101010	// horiz/vert neighbours
        mov w,3			// apply shift down by 3
        mov w4,2		// center pixel shift only by 2
        swp           		// move shift matrix to ww
        mov maskv,0b111111111	// re-enable all pixels for lsr (scaling)
generic3x3_loop_gauss:
//        lsr w,ina,ww
        dout clipped,generic3x3_loop_gauss,ixo
*/


generic3x3_loop_mgrad:
        sub out0,max,min
	asl out0,out0,1
        done generic3x3_loop_mgrad,ixo

	halt
.global generic_ipus3x3_end
generic_ipus3x3_end: