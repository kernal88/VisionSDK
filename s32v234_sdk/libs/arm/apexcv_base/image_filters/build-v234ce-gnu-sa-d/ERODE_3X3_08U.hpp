#ifndef _ACF_PROCESS_APU_ERODE_3X3_08U
#define _ACF_PROCESS_APU_ERODE_3X3_08U

#include <acf_process_apu.h>
#include <ERODE_3X3_08U_APU_LOAD.h> //APU load associated with this process
#include <stdint.h>


//SCENARIO LIST*************************************************
static acf_scenario_buffer_data gScenarioBufferData0_ERODE_3X3_08U[] = {{2, 1, 4, 0, 0x2211}, {2, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData1_ERODE_3X3_08U[] = {{4, 1, 4, 0, 0x2211}, {4, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData2_ERODE_3X3_08U[] = {{6, 1, 4, 0, 0x2211}, {6, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData3_ERODE_3X3_08U[] = {{8, 1, 4, 0, 0x2211}, {8, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData4_ERODE_3X3_08U[] = {{10, 1, 4, 0, 0x2211}, {10, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData5_ERODE_3X3_08U[] = {{12, 1, 4, 0, 0x2211}, {12, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData6_ERODE_3X3_08U[] = {{14, 1, 4, 0, 0x2211}, {14, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData7_ERODE_3X3_08U[] = {{16, 1, 4, 0, 0x2211}, {16, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData8_ERODE_3X3_08U[] = {{18, 1, 4, 0, 0x2211}, {18, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData9_ERODE_3X3_08U[] = {{20, 1, 4, 0, 0x2211}, {20, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData10_ERODE_3X3_08U[] = {{22, 1, 4, 0, 0x2211}, {22, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData11_ERODE_3X3_08U[] = {{24, 1, 4, 0, 0x2211}, {24, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData12_ERODE_3X3_08U[] = {{26, 1, 4, 0, 0x2211}, {26, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData13_ERODE_3X3_08U[] = {{28, 1, 4, 0, 0x2211}, {28, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData14_ERODE_3X3_08U[] = {{30, 1, 4, 0, 0x2211}, {30, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData15_ERODE_3X3_08U[] = {{32, 1, 4, 0, 0x2211}, {32, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData16_ERODE_3X3_08U[] = {{48, 1, 4, 0, 0x2211}, {48, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData17_ERODE_3X3_08U[] = {{64, 1, 4, 0, 0x2211}, {64, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData18_ERODE_3X3_08U[] = {{96, 1, 4, 0, 0x2211}, {96, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData19_ERODE_3X3_08U[] = {{112, 1, 4, 0, 0x2211}, {112, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData20_ERODE_3X3_08U[] = {{128, 1, 4, 0, 0x2211}, {128, 1, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData21_ERODE_3X3_08U[] = {{2, 2, 4, 0, 0x2211}, {2, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData22_ERODE_3X3_08U[] = {{4, 2, 4, 0, 0x2211}, {4, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData23_ERODE_3X3_08U[] = {{6, 2, 4, 0, 0x2211}, {6, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData24_ERODE_3X3_08U[] = {{8, 2, 4, 0, 0x2211}, {8, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData25_ERODE_3X3_08U[] = {{10, 2, 4, 0, 0x2211}, {10, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData26_ERODE_3X3_08U[] = {{12, 2, 4, 0, 0x2211}, {12, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData27_ERODE_3X3_08U[] = {{14, 2, 4, 0, 0x2211}, {14, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData28_ERODE_3X3_08U[] = {{16, 2, 4, 0, 0x2211}, {16, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData29_ERODE_3X3_08U[] = {{18, 2, 4, 0, 0x2211}, {18, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData30_ERODE_3X3_08U[] = {{20, 2, 4, 0, 0x2211}, {20, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData31_ERODE_3X3_08U[] = {{22, 2, 4, 0, 0x2211}, {22, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData32_ERODE_3X3_08U[] = {{24, 2, 4, 0, 0x2211}, {24, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData33_ERODE_3X3_08U[] = {{26, 2, 4, 0, 0x2211}, {26, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData34_ERODE_3X3_08U[] = {{28, 2, 4, 0, 0x2211}, {28, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData35_ERODE_3X3_08U[] = {{30, 2, 4, 0, 0x2211}, {30, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData36_ERODE_3X3_08U[] = {{32, 2, 4, 0, 0x2211}, {32, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData37_ERODE_3X3_08U[] = {{48, 2, 4, 0, 0x2211}, {48, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData38_ERODE_3X3_08U[] = {{64, 2, 4, 0, 0x2211}, {64, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData39_ERODE_3X3_08U[] = {{96, 2, 4, 0, 0x2211}, {96, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData40_ERODE_3X3_08U[] = {{112, 2, 4, 0, 0x2211}, {112, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData41_ERODE_3X3_08U[] = {{128, 2, 4, 0, 0x2211}, {128, 2, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData42_ERODE_3X3_08U[] = {{2, 4, 4, 0, 0x2211}, {2, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData43_ERODE_3X3_08U[] = {{4, 4, 4, 0, 0x2211}, {4, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData44_ERODE_3X3_08U[] = {{6, 4, 4, 0, 0x2211}, {6, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData45_ERODE_3X3_08U[] = {{8, 4, 4, 0, 0x2211}, {8, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData46_ERODE_3X3_08U[] = {{10, 4, 4, 0, 0x2211}, {10, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData47_ERODE_3X3_08U[] = {{12, 4, 4, 0, 0x2211}, {12, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData48_ERODE_3X3_08U[] = {{14, 4, 4, 0, 0x2211}, {14, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData49_ERODE_3X3_08U[] = {{16, 4, 4, 0, 0x2211}, {16, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData50_ERODE_3X3_08U[] = {{18, 4, 4, 0, 0x2211}, {18, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData51_ERODE_3X3_08U[] = {{20, 4, 4, 0, 0x2211}, {20, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData52_ERODE_3X3_08U[] = {{22, 4, 4, 0, 0x2211}, {22, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData53_ERODE_3X3_08U[] = {{24, 4, 4, 0, 0x2211}, {24, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData54_ERODE_3X3_08U[] = {{26, 4, 4, 0, 0x2211}, {26, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData55_ERODE_3X3_08U[] = {{28, 4, 4, 0, 0x2211}, {28, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData56_ERODE_3X3_08U[] = {{30, 4, 4, 0, 0x2211}, {30, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData57_ERODE_3X3_08U[] = {{32, 4, 4, 0, 0x2211}, {32, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData58_ERODE_3X3_08U[] = {{48, 4, 4, 0, 0x2211}, {48, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData59_ERODE_3X3_08U[] = {{64, 4, 4, 0, 0x2211}, {64, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData60_ERODE_3X3_08U[] = {{96, 4, 4, 0, 0x2211}, {96, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData61_ERODE_3X3_08U[] = {{112, 4, 4, 0, 0x2211}, {112, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData62_ERODE_3X3_08U[] = {{128, 4, 4, 0, 0x2211}, {128, 4, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData63_ERODE_3X3_08U[] = {{2, 6, 4, 0, 0x2211}, {2, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData64_ERODE_3X3_08U[] = {{4, 6, 4, 0, 0x2211}, {4, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData65_ERODE_3X3_08U[] = {{6, 6, 4, 0, 0x2211}, {6, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData66_ERODE_3X3_08U[] = {{8, 6, 4, 0, 0x2211}, {8, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData67_ERODE_3X3_08U[] = {{10, 6, 4, 0, 0x2211}, {10, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData68_ERODE_3X3_08U[] = {{12, 6, 4, 0, 0x2211}, {12, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData69_ERODE_3X3_08U[] = {{14, 6, 4, 0, 0x2211}, {14, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData70_ERODE_3X3_08U[] = {{16, 6, 4, 0, 0x2211}, {16, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData71_ERODE_3X3_08U[] = {{18, 6, 4, 0, 0x2211}, {18, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData72_ERODE_3X3_08U[] = {{20, 6, 4, 0, 0x2211}, {20, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData73_ERODE_3X3_08U[] = {{22, 6, 4, 0, 0x2211}, {22, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData74_ERODE_3X3_08U[] = {{24, 6, 4, 0, 0x2211}, {24, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData75_ERODE_3X3_08U[] = {{26, 6, 4, 0, 0x2211}, {26, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData76_ERODE_3X3_08U[] = {{28, 6, 4, 0, 0x2211}, {28, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData77_ERODE_3X3_08U[] = {{30, 6, 4, 0, 0x2211}, {30, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData78_ERODE_3X3_08U[] = {{32, 6, 4, 0, 0x2211}, {32, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData79_ERODE_3X3_08U[] = {{48, 6, 4, 0, 0x2211}, {48, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData80_ERODE_3X3_08U[] = {{64, 6, 4, 0, 0x2211}, {64, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData81_ERODE_3X3_08U[] = {{96, 6, 4, 0, 0x2211}, {96, 6, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData82_ERODE_3X3_08U[] = {{2, 8, 4, 0, 0x2211}, {2, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData83_ERODE_3X3_08U[] = {{4, 8, 4, 0, 0x2211}, {4, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData84_ERODE_3X3_08U[] = {{6, 8, 4, 0, 0x2211}, {6, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData85_ERODE_3X3_08U[] = {{8, 8, 4, 0, 0x2211}, {8, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData86_ERODE_3X3_08U[] = {{10, 8, 4, 0, 0x2211}, {10, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData87_ERODE_3X3_08U[] = {{12, 8, 4, 0, 0x2211}, {12, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData88_ERODE_3X3_08U[] = {{14, 8, 4, 0, 0x2211}, {14, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData89_ERODE_3X3_08U[] = {{16, 8, 4, 0, 0x2211}, {16, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData90_ERODE_3X3_08U[] = {{18, 8, 4, 0, 0x2211}, {18, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData91_ERODE_3X3_08U[] = {{20, 8, 4, 0, 0x2211}, {20, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData92_ERODE_3X3_08U[] = {{22, 8, 4, 0, 0x2211}, {22, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData93_ERODE_3X3_08U[] = {{24, 8, 4, 0, 0x2211}, {24, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData94_ERODE_3X3_08U[] = {{26, 8, 4, 0, 0x2211}, {26, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData95_ERODE_3X3_08U[] = {{28, 8, 4, 0, 0x2211}, {28, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData96_ERODE_3X3_08U[] = {{30, 8, 4, 0, 0x2211}, {30, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData97_ERODE_3X3_08U[] = {{32, 8, 4, 0, 0x2211}, {32, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData98_ERODE_3X3_08U[] = {{48, 8, 4, 0, 0x2211}, {48, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData99_ERODE_3X3_08U[] = {{64, 8, 4, 0, 0x2211}, {64, 8, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData100_ERODE_3X3_08U[] = {{2, 10, 4, 0, 0x2211}, {2, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData101_ERODE_3X3_08U[] = {{4, 10, 4, 0, 0x2211}, {4, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData102_ERODE_3X3_08U[] = {{6, 10, 4, 0, 0x2211}, {6, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData103_ERODE_3X3_08U[] = {{8, 10, 4, 0, 0x2211}, {8, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData104_ERODE_3X3_08U[] = {{10, 10, 4, 0, 0x2211}, {10, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData105_ERODE_3X3_08U[] = {{12, 10, 4, 0, 0x2211}, {12, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData106_ERODE_3X3_08U[] = {{14, 10, 4, 0, 0x2211}, {14, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData107_ERODE_3X3_08U[] = {{16, 10, 4, 0, 0x2211}, {16, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData108_ERODE_3X3_08U[] = {{18, 10, 4, 0, 0x2211}, {18, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData109_ERODE_3X3_08U[] = {{20, 10, 4, 0, 0x2211}, {20, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData110_ERODE_3X3_08U[] = {{22, 10, 4, 0, 0x2211}, {22, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData111_ERODE_3X3_08U[] = {{24, 10, 4, 0, 0x2211}, {24, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData112_ERODE_3X3_08U[] = {{26, 10, 4, 0, 0x2211}, {26, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData113_ERODE_3X3_08U[] = {{28, 10, 4, 0, 0x2211}, {28, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData114_ERODE_3X3_08U[] = {{30, 10, 4, 0, 0x2211}, {30, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData115_ERODE_3X3_08U[] = {{32, 10, 4, 0, 0x2211}, {32, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData116_ERODE_3X3_08U[] = {{48, 10, 4, 0, 0x2211}, {48, 10, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData117_ERODE_3X3_08U[] = {{2, 12, 4, 0, 0x2211}, {2, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData118_ERODE_3X3_08U[] = {{4, 12, 4, 0, 0x2211}, {4, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData119_ERODE_3X3_08U[] = {{6, 12, 4, 0, 0x2211}, {6, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData120_ERODE_3X3_08U[] = {{8, 12, 4, 0, 0x2211}, {8, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData121_ERODE_3X3_08U[] = {{10, 12, 4, 0, 0x2211}, {10, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData122_ERODE_3X3_08U[] = {{12, 12, 4, 0, 0x2211}, {12, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData123_ERODE_3X3_08U[] = {{14, 12, 4, 0, 0x2211}, {14, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData124_ERODE_3X3_08U[] = {{16, 12, 4, 0, 0x2211}, {16, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData125_ERODE_3X3_08U[] = {{18, 12, 4, 0, 0x2211}, {18, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData126_ERODE_3X3_08U[] = {{20, 12, 4, 0, 0x2211}, {20, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData127_ERODE_3X3_08U[] = {{22, 12, 4, 0, 0x2211}, {22, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData128_ERODE_3X3_08U[] = {{24, 12, 4, 0, 0x2211}, {24, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData129_ERODE_3X3_08U[] = {{26, 12, 4, 0, 0x2211}, {26, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData130_ERODE_3X3_08U[] = {{28, 12, 4, 0, 0x2211}, {28, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData131_ERODE_3X3_08U[] = {{30, 12, 4, 0, 0x2211}, {30, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData132_ERODE_3X3_08U[] = {{32, 12, 4, 0, 0x2211}, {32, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData133_ERODE_3X3_08U[] = {{48, 12, 4, 0, 0x2211}, {48, 12, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData134_ERODE_3X3_08U[] = {{2, 14, 4, 0, 0x2211}, {2, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData135_ERODE_3X3_08U[] = {{4, 14, 4, 0, 0x2211}, {4, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData136_ERODE_3X3_08U[] = {{6, 14, 4, 0, 0x2211}, {6, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData137_ERODE_3X3_08U[] = {{8, 14, 4, 0, 0x2211}, {8, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData138_ERODE_3X3_08U[] = {{10, 14, 4, 0, 0x2211}, {10, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData139_ERODE_3X3_08U[] = {{12, 14, 4, 0, 0x2211}, {12, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData140_ERODE_3X3_08U[] = {{14, 14, 4, 0, 0x2211}, {14, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData141_ERODE_3X3_08U[] = {{16, 14, 4, 0, 0x2211}, {16, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData142_ERODE_3X3_08U[] = {{18, 14, 4, 0, 0x2211}, {18, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData143_ERODE_3X3_08U[] = {{20, 14, 4, 0, 0x2211}, {20, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData144_ERODE_3X3_08U[] = {{22, 14, 4, 0, 0x2211}, {22, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData145_ERODE_3X3_08U[] = {{24, 14, 4, 0, 0x2211}, {24, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData146_ERODE_3X3_08U[] = {{26, 14, 4, 0, 0x2211}, {26, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData147_ERODE_3X3_08U[] = {{28, 14, 4, 0, 0x2211}, {28, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData148_ERODE_3X3_08U[] = {{30, 14, 4, 0, 0x2211}, {30, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData149_ERODE_3X3_08U[] = {{32, 14, 4, 0, 0x2211}, {32, 14, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData150_ERODE_3X3_08U[] = {{2, 16, 4, 0, 0x2211}, {2, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData151_ERODE_3X3_08U[] = {{4, 16, 4, 0, 0x2211}, {4, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData152_ERODE_3X3_08U[] = {{6, 16, 4, 0, 0x2211}, {6, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData153_ERODE_3X3_08U[] = {{8, 16, 4, 0, 0x2211}, {8, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData154_ERODE_3X3_08U[] = {{10, 16, 4, 0, 0x2211}, {10, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData155_ERODE_3X3_08U[] = {{12, 16, 4, 0, 0x2211}, {12, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData156_ERODE_3X3_08U[] = {{14, 16, 4, 0, 0x2211}, {14, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData157_ERODE_3X3_08U[] = {{16, 16, 4, 0, 0x2211}, {16, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData158_ERODE_3X3_08U[] = {{18, 16, 4, 0, 0x2211}, {18, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData159_ERODE_3X3_08U[] = {{20, 16, 4, 0, 0x2211}, {20, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData160_ERODE_3X3_08U[] = {{22, 16, 4, 0, 0x2211}, {22, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData161_ERODE_3X3_08U[] = {{24, 16, 4, 0, 0x2211}, {24, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData162_ERODE_3X3_08U[] = {{26, 16, 4, 0, 0x2211}, {26, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData163_ERODE_3X3_08U[] = {{28, 16, 4, 0, 0x2211}, {28, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData164_ERODE_3X3_08U[] = {{30, 16, 4, 0, 0x2211}, {30, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData165_ERODE_3X3_08U[] = {{32, 16, 4, 0, 0x2211}, {32, 16, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData166_ERODE_3X3_08U[] = {{2, 18, 4, 0, 0x2211}, {2, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData167_ERODE_3X3_08U[] = {{4, 18, 4, 0, 0x2211}, {4, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData168_ERODE_3X3_08U[] = {{6, 18, 4, 0, 0x2211}, {6, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData169_ERODE_3X3_08U[] = {{8, 18, 4, 0, 0x2211}, {8, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData170_ERODE_3X3_08U[] = {{10, 18, 4, 0, 0x2211}, {10, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData171_ERODE_3X3_08U[] = {{12, 18, 4, 0, 0x2211}, {12, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData172_ERODE_3X3_08U[] = {{14, 18, 4, 0, 0x2211}, {14, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData173_ERODE_3X3_08U[] = {{16, 18, 4, 0, 0x2211}, {16, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData174_ERODE_3X3_08U[] = {{18, 18, 4, 0, 0x2211}, {18, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData175_ERODE_3X3_08U[] = {{20, 18, 4, 0, 0x2211}, {20, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData176_ERODE_3X3_08U[] = {{22, 18, 4, 0, 0x2211}, {22, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData177_ERODE_3X3_08U[] = {{24, 18, 4, 0, 0x2211}, {24, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData178_ERODE_3X3_08U[] = {{26, 18, 4, 0, 0x2211}, {26, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData179_ERODE_3X3_08U[] = {{28, 18, 4, 0, 0x2211}, {28, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData180_ERODE_3X3_08U[] = {{30, 18, 4, 0, 0x2211}, {30, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData181_ERODE_3X3_08U[] = {{32, 18, 4, 0, 0x2211}, {32, 18, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData182_ERODE_3X3_08U[] = {{2, 20, 4, 0, 0x2211}, {2, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData183_ERODE_3X3_08U[] = {{4, 20, 4, 0, 0x2211}, {4, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData184_ERODE_3X3_08U[] = {{6, 20, 4, 0, 0x2211}, {6, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData185_ERODE_3X3_08U[] = {{8, 20, 4, 0, 0x2211}, {8, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData186_ERODE_3X3_08U[] = {{10, 20, 4, 0, 0x2211}, {10, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData187_ERODE_3X3_08U[] = {{12, 20, 4, 0, 0x2211}, {12, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData188_ERODE_3X3_08U[] = {{14, 20, 4, 0, 0x2211}, {14, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData189_ERODE_3X3_08U[] = {{16, 20, 4, 0, 0x2211}, {16, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData190_ERODE_3X3_08U[] = {{18, 20, 4, 0, 0x2211}, {18, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData191_ERODE_3X3_08U[] = {{20, 20, 4, 0, 0x2211}, {20, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData192_ERODE_3X3_08U[] = {{22, 20, 4, 0, 0x2211}, {22, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData193_ERODE_3X3_08U[] = {{24, 20, 4, 0, 0x2211}, {24, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData194_ERODE_3X3_08U[] = {{26, 20, 4, 0, 0x2211}, {26, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData195_ERODE_3X3_08U[] = {{28, 20, 4, 0, 0x2211}, {28, 20, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData196_ERODE_3X3_08U[] = {{2, 22, 4, 0, 0x2211}, {2, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData197_ERODE_3X3_08U[] = {{4, 22, 4, 0, 0x2211}, {4, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData198_ERODE_3X3_08U[] = {{6, 22, 4, 0, 0x2211}, {6, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData199_ERODE_3X3_08U[] = {{8, 22, 4, 0, 0x2211}, {8, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData200_ERODE_3X3_08U[] = {{10, 22, 4, 0, 0x2211}, {10, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData201_ERODE_3X3_08U[] = {{12, 22, 4, 0, 0x2211}, {12, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData202_ERODE_3X3_08U[] = {{14, 22, 4, 0, 0x2211}, {14, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData203_ERODE_3X3_08U[] = {{16, 22, 4, 0, 0x2211}, {16, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData204_ERODE_3X3_08U[] = {{18, 22, 4, 0, 0x2211}, {18, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData205_ERODE_3X3_08U[] = {{20, 22, 4, 0, 0x2211}, {20, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData206_ERODE_3X3_08U[] = {{22, 22, 4, 0, 0x2211}, {22, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData207_ERODE_3X3_08U[] = {{24, 22, 4, 0, 0x2211}, {24, 22, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData208_ERODE_3X3_08U[] = {{2, 24, 4, 0, 0x2211}, {2, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData209_ERODE_3X3_08U[] = {{4, 24, 4, 0, 0x2211}, {4, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData210_ERODE_3X3_08U[] = {{6, 24, 4, 0, 0x2211}, {6, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData211_ERODE_3X3_08U[] = {{8, 24, 4, 0, 0x2211}, {8, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData212_ERODE_3X3_08U[] = {{10, 24, 4, 0, 0x2211}, {10, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData213_ERODE_3X3_08U[] = {{12, 24, 4, 0, 0x2211}, {12, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData214_ERODE_3X3_08U[] = {{14, 24, 4, 0, 0x2211}, {14, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData215_ERODE_3X3_08U[] = {{16, 24, 4, 0, 0x2211}, {16, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData216_ERODE_3X3_08U[] = {{18, 24, 4, 0, 0x2211}, {18, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData217_ERODE_3X3_08U[] = {{20, 24, 4, 0, 0x2211}, {20, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData218_ERODE_3X3_08U[] = {{22, 24, 4, 0, 0x2211}, {22, 24, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData219_ERODE_3X3_08U[] = {{2, 26, 4, 0, 0x2211}, {2, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData220_ERODE_3X3_08U[] = {{4, 26, 4, 0, 0x2211}, {4, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData221_ERODE_3X3_08U[] = {{6, 26, 4, 0, 0x2211}, {6, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData222_ERODE_3X3_08U[] = {{8, 26, 4, 0, 0x2211}, {8, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData223_ERODE_3X3_08U[] = {{10, 26, 4, 0, 0x2211}, {10, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData224_ERODE_3X3_08U[] = {{12, 26, 4, 0, 0x2211}, {12, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData225_ERODE_3X3_08U[] = {{14, 26, 4, 0, 0x2211}, {14, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData226_ERODE_3X3_08U[] = {{16, 26, 4, 0, 0x2211}, {16, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData227_ERODE_3X3_08U[] = {{18, 26, 4, 0, 0x2211}, {18, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData228_ERODE_3X3_08U[] = {{20, 26, 4, 0, 0x2211}, {20, 26, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData229_ERODE_3X3_08U[] = {{2, 28, 4, 0, 0x2211}, {2, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData230_ERODE_3X3_08U[] = {{4, 28, 4, 0, 0x2211}, {4, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData231_ERODE_3X3_08U[] = {{6, 28, 4, 0, 0x2211}, {6, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData232_ERODE_3X3_08U[] = {{8, 28, 4, 0, 0x2211}, {8, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData233_ERODE_3X3_08U[] = {{10, 28, 4, 0, 0x2211}, {10, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData234_ERODE_3X3_08U[] = {{12, 28, 4, 0, 0x2211}, {12, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData235_ERODE_3X3_08U[] = {{14, 28, 4, 0, 0x2211}, {14, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData236_ERODE_3X3_08U[] = {{16, 28, 4, 0, 0x2211}, {16, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData237_ERODE_3X3_08U[] = {{18, 28, 4, 0, 0x2211}, {18, 28, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData238_ERODE_3X3_08U[] = {{2, 30, 4, 0, 0x2211}, {2, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData239_ERODE_3X3_08U[] = {{4, 30, 4, 0, 0x2211}, {4, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData240_ERODE_3X3_08U[] = {{6, 30, 4, 0, 0x2211}, {6, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData241_ERODE_3X3_08U[] = {{8, 30, 4, 0, 0x2211}, {8, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData242_ERODE_3X3_08U[] = {{10, 30, 4, 0, 0x2211}, {10, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData243_ERODE_3X3_08U[] = {{12, 30, 4, 0, 0x2211}, {12, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData244_ERODE_3X3_08U[] = {{14, 30, 4, 0, 0x2211}, {14, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData245_ERODE_3X3_08U[] = {{16, 30, 4, 0, 0x2211}, {16, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData246_ERODE_3X3_08U[] = {{18, 30, 4, 0, 0x2211}, {18, 30, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData247_ERODE_3X3_08U[] = {{2, 32, 4, 0, 0x2211}, {2, 32, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData248_ERODE_3X3_08U[] = {{4, 32, 4, 0, 0x2211}, {4, 32, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData249_ERODE_3X3_08U[] = {{6, 32, 4, 0, 0x2211}, {6, 32, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData250_ERODE_3X3_08U[] = {{8, 32, 4, 0, 0x2211}, {8, 32, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData251_ERODE_3X3_08U[] = {{10, 32, 4, 0, 0x2211}, {10, 32, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData252_ERODE_3X3_08U[] = {{12, 32, 4, 0, 0x2211}, {12, 32, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData253_ERODE_3X3_08U[] = {{14, 32, 4, 0, 0x2211}, {14, 32, 2, 1, 0x0}};
static acf_scenario_buffer_data gScenarioBufferData254_ERODE_3X3_08U[] = {{16, 32, 4, 0, 0x2211}, {16, 32, 2, 1, 0x0}};

static acf_scenario_kernel_data gScenarioKernelData0_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData1_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData2_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData3_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData4_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData5_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData6_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData7_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData8_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData9_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData10_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData11_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData12_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData13_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData14_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData15_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData16_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData17_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData18_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData19_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData20_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData21_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData22_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData23_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData24_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData25_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData26_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData27_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData28_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData29_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData30_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData31_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData32_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData33_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData34_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData35_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData36_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData37_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData38_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData39_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData40_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData41_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData42_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData43_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData44_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData45_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData46_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData47_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData48_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData49_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData50_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData51_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData52_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData53_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData54_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData55_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData56_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData57_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData58_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData59_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData60_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData61_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData62_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData63_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData64_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData65_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData66_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData67_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData68_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData69_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData70_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData71_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData72_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData73_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData74_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData75_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData76_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData77_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData78_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData79_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData80_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData81_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData82_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData83_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData84_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData85_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData86_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData87_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData88_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData89_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData90_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData91_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData92_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData93_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData94_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData95_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData96_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData97_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData98_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData99_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData100_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData101_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData102_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData103_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData104_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData105_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData106_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData107_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData108_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData109_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData110_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData111_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData112_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData113_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData114_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData115_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData116_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData117_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData118_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData119_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData120_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData121_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData122_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData123_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData124_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData125_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData126_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData127_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData128_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData129_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData130_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData131_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData132_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData133_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData134_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData135_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData136_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData137_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData138_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData139_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData140_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData141_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData142_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData143_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData144_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData145_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData146_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData147_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData148_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData149_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData150_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData151_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData152_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData153_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData154_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData155_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData156_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData157_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData158_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData159_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData160_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData161_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData162_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData163_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData164_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData165_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData166_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData167_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData168_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData169_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData170_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData171_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData172_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData173_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData174_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData175_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData176_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData177_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData178_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData179_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData180_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData181_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData182_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData183_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData184_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData185_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData186_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData187_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData188_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData189_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData190_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData191_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData192_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData193_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData194_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData195_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData196_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData197_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData198_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData199_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData200_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData201_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData202_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData203_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData204_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData205_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData206_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData207_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData208_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData209_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData210_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData211_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData212_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData213_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData214_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData215_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData216_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData217_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData218_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData219_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData220_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData221_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData222_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData223_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData224_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData225_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData226_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData227_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData228_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData229_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData230_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData231_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData232_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData233_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData234_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData235_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData236_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData237_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData238_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData239_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData240_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData241_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData242_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData243_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData244_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData245_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData246_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData247_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData248_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData249_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData250_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData251_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData252_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData253_ERODE_3X3_08U[] = {{1}};
static acf_scenario_kernel_data gScenarioKernelData254_ERODE_3X3_08U[] = {{1}};

static acf_scenario gScenarioArray_ERODE_3X3_08U[] = {
{2, 1, 40, 0, 1, gScenarioBufferData0_ERODE_3X3_08U, 20, gScenarioKernelData0_ERODE_3X3_08U, 2},
{4, 1, 56, 0, 1, gScenarioBufferData1_ERODE_3X3_08U, 20, gScenarioKernelData1_ERODE_3X3_08U, 2},
{6, 1, 72, 0, 1, gScenarioBufferData2_ERODE_3X3_08U, 20, gScenarioKernelData2_ERODE_3X3_08U, 2},
{8, 1, 88, 0, 1, gScenarioBufferData3_ERODE_3X3_08U, 20, gScenarioKernelData3_ERODE_3X3_08U, 2},
{10, 1, 104, 0, 1, gScenarioBufferData4_ERODE_3X3_08U, 20, gScenarioKernelData4_ERODE_3X3_08U, 2},
{12, 1, 120, 0, 1, gScenarioBufferData5_ERODE_3X3_08U, 20, gScenarioKernelData5_ERODE_3X3_08U, 2},
{14, 1, 136, 0, 1, gScenarioBufferData6_ERODE_3X3_08U, 20, gScenarioKernelData6_ERODE_3X3_08U, 2},
{16, 1, 152, 0, 1, gScenarioBufferData7_ERODE_3X3_08U, 20, gScenarioKernelData7_ERODE_3X3_08U, 2},
{18, 1, 168, 0, 1, gScenarioBufferData8_ERODE_3X3_08U, 20, gScenarioKernelData8_ERODE_3X3_08U, 2},
{20, 1, 184, 0, 1, gScenarioBufferData9_ERODE_3X3_08U, 20, gScenarioKernelData9_ERODE_3X3_08U, 2},
{22, 1, 200, 0, 1, gScenarioBufferData10_ERODE_3X3_08U, 20, gScenarioKernelData10_ERODE_3X3_08U, 2},
{24, 1, 216, 0, 1, gScenarioBufferData11_ERODE_3X3_08U, 20, gScenarioKernelData11_ERODE_3X3_08U, 2},
{26, 1, 232, 0, 1, gScenarioBufferData12_ERODE_3X3_08U, 20, gScenarioKernelData12_ERODE_3X3_08U, 2},
{28, 1, 248, 0, 1, gScenarioBufferData13_ERODE_3X3_08U, 20, gScenarioKernelData13_ERODE_3X3_08U, 2},
{30, 1, 264, 0, 1, gScenarioBufferData14_ERODE_3X3_08U, 20, gScenarioKernelData14_ERODE_3X3_08U, 2},
{32, 1, 280, 0, 1, gScenarioBufferData15_ERODE_3X3_08U, 20, gScenarioKernelData15_ERODE_3X3_08U, 2},
{48, 1, 408, 0, 1, gScenarioBufferData16_ERODE_3X3_08U, 20, gScenarioKernelData16_ERODE_3X3_08U, 2},
{64, 1, 536, 0, 1, gScenarioBufferData17_ERODE_3X3_08U, 20, gScenarioKernelData17_ERODE_3X3_08U, 2},
{96, 1, 792, 0, 1, gScenarioBufferData18_ERODE_3X3_08U, 20, gScenarioKernelData18_ERODE_3X3_08U, 2},
{112, 1, 920, 0, 1, gScenarioBufferData19_ERODE_3X3_08U, 20, gScenarioKernelData19_ERODE_3X3_08U, 2},
{128, 1, 1048, 0, 1, gScenarioBufferData20_ERODE_3X3_08U, 20, gScenarioKernelData20_ERODE_3X3_08U, 2},
{2, 2, 68, 0, 1, gScenarioBufferData21_ERODE_3X3_08U, 20, gScenarioKernelData21_ERODE_3X3_08U, 2},
{4, 2, 96, 0, 1, gScenarioBufferData22_ERODE_3X3_08U, 20, gScenarioKernelData22_ERODE_3X3_08U, 2},
{6, 2, 124, 0, 1, gScenarioBufferData23_ERODE_3X3_08U, 20, gScenarioKernelData23_ERODE_3X3_08U, 2},
{8, 2, 152, 0, 1, gScenarioBufferData24_ERODE_3X3_08U, 20, gScenarioKernelData24_ERODE_3X3_08U, 2},
{10, 2, 180, 0, 1, gScenarioBufferData25_ERODE_3X3_08U, 20, gScenarioKernelData25_ERODE_3X3_08U, 2},
{12, 2, 208, 0, 1, gScenarioBufferData26_ERODE_3X3_08U, 20, gScenarioKernelData26_ERODE_3X3_08U, 2},
{14, 2, 236, 0, 1, gScenarioBufferData27_ERODE_3X3_08U, 20, gScenarioKernelData27_ERODE_3X3_08U, 2},
{16, 2, 264, 0, 1, gScenarioBufferData28_ERODE_3X3_08U, 20, gScenarioKernelData28_ERODE_3X3_08U, 2},
{18, 2, 292, 0, 1, gScenarioBufferData29_ERODE_3X3_08U, 20, gScenarioKernelData29_ERODE_3X3_08U, 2},
{20, 2, 320, 0, 1, gScenarioBufferData30_ERODE_3X3_08U, 20, gScenarioKernelData30_ERODE_3X3_08U, 2},
{22, 2, 348, 0, 1, gScenarioBufferData31_ERODE_3X3_08U, 20, gScenarioKernelData31_ERODE_3X3_08U, 2},
{24, 2, 376, 0, 1, gScenarioBufferData32_ERODE_3X3_08U, 20, gScenarioKernelData32_ERODE_3X3_08U, 2},
{26, 2, 404, 0, 1, gScenarioBufferData33_ERODE_3X3_08U, 20, gScenarioKernelData33_ERODE_3X3_08U, 2},
{28, 2, 432, 0, 1, gScenarioBufferData34_ERODE_3X3_08U, 20, gScenarioKernelData34_ERODE_3X3_08U, 2},
{30, 2, 460, 0, 1, gScenarioBufferData35_ERODE_3X3_08U, 20, gScenarioKernelData35_ERODE_3X3_08U, 2},
{32, 2, 488, 0, 1, gScenarioBufferData36_ERODE_3X3_08U, 20, gScenarioKernelData36_ERODE_3X3_08U, 2},
{48, 2, 712, 0, 1, gScenarioBufferData37_ERODE_3X3_08U, 20, gScenarioKernelData37_ERODE_3X3_08U, 2},
{64, 2, 936, 0, 1, gScenarioBufferData38_ERODE_3X3_08U, 20, gScenarioKernelData38_ERODE_3X3_08U, 2},
{96, 2, 1384, 0, 1, gScenarioBufferData39_ERODE_3X3_08U, 20, gScenarioKernelData39_ERODE_3X3_08U, 2},
{112, 2, 1608, 0, 1, gScenarioBufferData40_ERODE_3X3_08U, 20, gScenarioKernelData40_ERODE_3X3_08U, 2},
{128, 2, 1832, 0, 1, gScenarioBufferData41_ERODE_3X3_08U, 20, gScenarioKernelData41_ERODE_3X3_08U, 2},
{2, 4, 124, 0, 1, gScenarioBufferData42_ERODE_3X3_08U, 20, gScenarioKernelData42_ERODE_3X3_08U, 2},
{4, 4, 176, 0, 1, gScenarioBufferData43_ERODE_3X3_08U, 20, gScenarioKernelData43_ERODE_3X3_08U, 2},
{6, 4, 228, 0, 1, gScenarioBufferData44_ERODE_3X3_08U, 20, gScenarioKernelData44_ERODE_3X3_08U, 2},
{8, 4, 280, 0, 1, gScenarioBufferData45_ERODE_3X3_08U, 20, gScenarioKernelData45_ERODE_3X3_08U, 2},
{10, 4, 332, 0, 1, gScenarioBufferData46_ERODE_3X3_08U, 20, gScenarioKernelData46_ERODE_3X3_08U, 2},
{12, 4, 384, 0, 1, gScenarioBufferData47_ERODE_3X3_08U, 20, gScenarioKernelData47_ERODE_3X3_08U, 2},
{14, 4, 436, 0, 1, gScenarioBufferData48_ERODE_3X3_08U, 20, gScenarioKernelData48_ERODE_3X3_08U, 2},
{16, 4, 488, 0, 1, gScenarioBufferData49_ERODE_3X3_08U, 20, gScenarioKernelData49_ERODE_3X3_08U, 2},
{18, 4, 540, 0, 1, gScenarioBufferData50_ERODE_3X3_08U, 20, gScenarioKernelData50_ERODE_3X3_08U, 2},
{20, 4, 592, 0, 1, gScenarioBufferData51_ERODE_3X3_08U, 20, gScenarioKernelData51_ERODE_3X3_08U, 2},
{22, 4, 644, 0, 1, gScenarioBufferData52_ERODE_3X3_08U, 20, gScenarioKernelData52_ERODE_3X3_08U, 2},
{24, 4, 696, 0, 1, gScenarioBufferData53_ERODE_3X3_08U, 20, gScenarioKernelData53_ERODE_3X3_08U, 2},
{26, 4, 748, 0, 1, gScenarioBufferData54_ERODE_3X3_08U, 20, gScenarioKernelData54_ERODE_3X3_08U, 2},
{28, 4, 800, 0, 1, gScenarioBufferData55_ERODE_3X3_08U, 20, gScenarioKernelData55_ERODE_3X3_08U, 2},
{30, 4, 852, 0, 1, gScenarioBufferData56_ERODE_3X3_08U, 20, gScenarioKernelData56_ERODE_3X3_08U, 2},
{32, 4, 904, 0, 1, gScenarioBufferData57_ERODE_3X3_08U, 20, gScenarioKernelData57_ERODE_3X3_08U, 2},
{48, 4, 1320, 0, 1, gScenarioBufferData58_ERODE_3X3_08U, 20, gScenarioKernelData58_ERODE_3X3_08U, 2},
{64, 4, 1736, 0, 1, gScenarioBufferData59_ERODE_3X3_08U, 20, gScenarioKernelData59_ERODE_3X3_08U, 2},
{96, 4, 2568, 0, 1, gScenarioBufferData60_ERODE_3X3_08U, 20, gScenarioKernelData60_ERODE_3X3_08U, 2},
{112, 4, 2984, 0, 1, gScenarioBufferData61_ERODE_3X3_08U, 20, gScenarioKernelData61_ERODE_3X3_08U, 2},
{128, 4, 3400, 0, 1, gScenarioBufferData62_ERODE_3X3_08U, 20, gScenarioKernelData62_ERODE_3X3_08U, 2},
{2, 6, 180, 0, 1, gScenarioBufferData63_ERODE_3X3_08U, 20, gScenarioKernelData63_ERODE_3X3_08U, 2},
{4, 6, 256, 0, 1, gScenarioBufferData64_ERODE_3X3_08U, 20, gScenarioKernelData64_ERODE_3X3_08U, 2},
{6, 6, 332, 0, 1, gScenarioBufferData65_ERODE_3X3_08U, 20, gScenarioKernelData65_ERODE_3X3_08U, 2},
{8, 6, 408, 0, 1, gScenarioBufferData66_ERODE_3X3_08U, 20, gScenarioKernelData66_ERODE_3X3_08U, 2},
{10, 6, 484, 0, 1, gScenarioBufferData67_ERODE_3X3_08U, 20, gScenarioKernelData67_ERODE_3X3_08U, 2},
{12, 6, 560, 0, 1, gScenarioBufferData68_ERODE_3X3_08U, 20, gScenarioKernelData68_ERODE_3X3_08U, 2},
{14, 6, 636, 0, 1, gScenarioBufferData69_ERODE_3X3_08U, 20, gScenarioKernelData69_ERODE_3X3_08U, 2},
{16, 6, 712, 0, 1, gScenarioBufferData70_ERODE_3X3_08U, 20, gScenarioKernelData70_ERODE_3X3_08U, 2},
{18, 6, 788, 0, 1, gScenarioBufferData71_ERODE_3X3_08U, 20, gScenarioKernelData71_ERODE_3X3_08U, 2},
{20, 6, 864, 0, 1, gScenarioBufferData72_ERODE_3X3_08U, 20, gScenarioKernelData72_ERODE_3X3_08U, 2},
{22, 6, 940, 0, 1, gScenarioBufferData73_ERODE_3X3_08U, 20, gScenarioKernelData73_ERODE_3X3_08U, 2},
{24, 6, 1016, 0, 1, gScenarioBufferData74_ERODE_3X3_08U, 20, gScenarioKernelData74_ERODE_3X3_08U, 2},
{26, 6, 1092, 0, 1, gScenarioBufferData75_ERODE_3X3_08U, 20, gScenarioKernelData75_ERODE_3X3_08U, 2},
{28, 6, 1168, 0, 1, gScenarioBufferData76_ERODE_3X3_08U, 20, gScenarioKernelData76_ERODE_3X3_08U, 2},
{30, 6, 1244, 0, 1, gScenarioBufferData77_ERODE_3X3_08U, 20, gScenarioKernelData77_ERODE_3X3_08U, 2},
{32, 6, 1320, 0, 1, gScenarioBufferData78_ERODE_3X3_08U, 20, gScenarioKernelData78_ERODE_3X3_08U, 2},
{48, 6, 1928, 0, 1, gScenarioBufferData79_ERODE_3X3_08U, 20, gScenarioKernelData79_ERODE_3X3_08U, 2},
{64, 6, 2536, 0, 1, gScenarioBufferData80_ERODE_3X3_08U, 20, gScenarioKernelData80_ERODE_3X3_08U, 2},
{96, 6, 3752, 0, 1, gScenarioBufferData81_ERODE_3X3_08U, 20, gScenarioKernelData81_ERODE_3X3_08U, 2},
{2, 8, 236, 0, 1, gScenarioBufferData82_ERODE_3X3_08U, 20, gScenarioKernelData82_ERODE_3X3_08U, 2},
{4, 8, 336, 0, 1, gScenarioBufferData83_ERODE_3X3_08U, 20, gScenarioKernelData83_ERODE_3X3_08U, 2},
{6, 8, 436, 0, 1, gScenarioBufferData84_ERODE_3X3_08U, 20, gScenarioKernelData84_ERODE_3X3_08U, 2},
{8, 8, 536, 0, 1, gScenarioBufferData85_ERODE_3X3_08U, 20, gScenarioKernelData85_ERODE_3X3_08U, 2},
{10, 8, 636, 0, 1, gScenarioBufferData86_ERODE_3X3_08U, 20, gScenarioKernelData86_ERODE_3X3_08U, 2},
{12, 8, 736, 0, 1, gScenarioBufferData87_ERODE_3X3_08U, 20, gScenarioKernelData87_ERODE_3X3_08U, 2},
{14, 8, 836, 0, 1, gScenarioBufferData88_ERODE_3X3_08U, 20, gScenarioKernelData88_ERODE_3X3_08U, 2},
{16, 8, 936, 0, 1, gScenarioBufferData89_ERODE_3X3_08U, 20, gScenarioKernelData89_ERODE_3X3_08U, 2},
{18, 8, 1036, 0, 1, gScenarioBufferData90_ERODE_3X3_08U, 20, gScenarioKernelData90_ERODE_3X3_08U, 2},
{20, 8, 1136, 0, 1, gScenarioBufferData91_ERODE_3X3_08U, 20, gScenarioKernelData91_ERODE_3X3_08U, 2},
{22, 8, 1236, 0, 1, gScenarioBufferData92_ERODE_3X3_08U, 20, gScenarioKernelData92_ERODE_3X3_08U, 2},
{24, 8, 1336, 0, 1, gScenarioBufferData93_ERODE_3X3_08U, 20, gScenarioKernelData93_ERODE_3X3_08U, 2},
{26, 8, 1436, 0, 1, gScenarioBufferData94_ERODE_3X3_08U, 20, gScenarioKernelData94_ERODE_3X3_08U, 2},
{28, 8, 1536, 0, 1, gScenarioBufferData95_ERODE_3X3_08U, 20, gScenarioKernelData95_ERODE_3X3_08U, 2},
{30, 8, 1636, 0, 1, gScenarioBufferData96_ERODE_3X3_08U, 20, gScenarioKernelData96_ERODE_3X3_08U, 2},
{32, 8, 1736, 0, 1, gScenarioBufferData97_ERODE_3X3_08U, 20, gScenarioKernelData97_ERODE_3X3_08U, 2},
{48, 8, 2536, 0, 1, gScenarioBufferData98_ERODE_3X3_08U, 20, gScenarioKernelData98_ERODE_3X3_08U, 2},
{64, 8, 3336, 0, 1, gScenarioBufferData99_ERODE_3X3_08U, 20, gScenarioKernelData99_ERODE_3X3_08U, 2},
{2, 10, 292, 0, 1, gScenarioBufferData100_ERODE_3X3_08U, 20, gScenarioKernelData100_ERODE_3X3_08U, 2},
{4, 10, 416, 0, 1, gScenarioBufferData101_ERODE_3X3_08U, 20, gScenarioKernelData101_ERODE_3X3_08U, 2},
{6, 10, 540, 0, 1, gScenarioBufferData102_ERODE_3X3_08U, 20, gScenarioKernelData102_ERODE_3X3_08U, 2},
{8, 10, 664, 0, 1, gScenarioBufferData103_ERODE_3X3_08U, 20, gScenarioKernelData103_ERODE_3X3_08U, 2},
{10, 10, 788, 0, 1, gScenarioBufferData104_ERODE_3X3_08U, 20, gScenarioKernelData104_ERODE_3X3_08U, 2},
{12, 10, 912, 0, 1, gScenarioBufferData105_ERODE_3X3_08U, 20, gScenarioKernelData105_ERODE_3X3_08U, 2},
{14, 10, 1036, 0, 1, gScenarioBufferData106_ERODE_3X3_08U, 20, gScenarioKernelData106_ERODE_3X3_08U, 2},
{16, 10, 1160, 0, 1, gScenarioBufferData107_ERODE_3X3_08U, 20, gScenarioKernelData107_ERODE_3X3_08U, 2},
{18, 10, 1284, 0, 1, gScenarioBufferData108_ERODE_3X3_08U, 20, gScenarioKernelData108_ERODE_3X3_08U, 2},
{20, 10, 1408, 0, 1, gScenarioBufferData109_ERODE_3X3_08U, 20, gScenarioKernelData109_ERODE_3X3_08U, 2},
{22, 10, 1532, 0, 1, gScenarioBufferData110_ERODE_3X3_08U, 20, gScenarioKernelData110_ERODE_3X3_08U, 2},
{24, 10, 1656, 0, 1, gScenarioBufferData111_ERODE_3X3_08U, 20, gScenarioKernelData111_ERODE_3X3_08U, 2},
{26, 10, 1780, 0, 1, gScenarioBufferData112_ERODE_3X3_08U, 20, gScenarioKernelData112_ERODE_3X3_08U, 2},
{28, 10, 1904, 0, 1, gScenarioBufferData113_ERODE_3X3_08U, 20, gScenarioKernelData113_ERODE_3X3_08U, 2},
{30, 10, 2028, 0, 1, gScenarioBufferData114_ERODE_3X3_08U, 20, gScenarioKernelData114_ERODE_3X3_08U, 2},
{32, 10, 2152, 0, 1, gScenarioBufferData115_ERODE_3X3_08U, 20, gScenarioKernelData115_ERODE_3X3_08U, 2},
{48, 10, 3144, 0, 1, gScenarioBufferData116_ERODE_3X3_08U, 20, gScenarioKernelData116_ERODE_3X3_08U, 2},
{2, 12, 348, 0, 1, gScenarioBufferData117_ERODE_3X3_08U, 20, gScenarioKernelData117_ERODE_3X3_08U, 2},
{4, 12, 496, 0, 1, gScenarioBufferData118_ERODE_3X3_08U, 20, gScenarioKernelData118_ERODE_3X3_08U, 2},
{6, 12, 644, 0, 1, gScenarioBufferData119_ERODE_3X3_08U, 20, gScenarioKernelData119_ERODE_3X3_08U, 2},
{8, 12, 792, 0, 1, gScenarioBufferData120_ERODE_3X3_08U, 20, gScenarioKernelData120_ERODE_3X3_08U, 2},
{10, 12, 940, 0, 1, gScenarioBufferData121_ERODE_3X3_08U, 20, gScenarioKernelData121_ERODE_3X3_08U, 2},
{12, 12, 1088, 0, 1, gScenarioBufferData122_ERODE_3X3_08U, 20, gScenarioKernelData122_ERODE_3X3_08U, 2},
{14, 12, 1236, 0, 1, gScenarioBufferData123_ERODE_3X3_08U, 20, gScenarioKernelData123_ERODE_3X3_08U, 2},
{16, 12, 1384, 0, 1, gScenarioBufferData124_ERODE_3X3_08U, 20, gScenarioKernelData124_ERODE_3X3_08U, 2},
{18, 12, 1532, 0, 1, gScenarioBufferData125_ERODE_3X3_08U, 20, gScenarioKernelData125_ERODE_3X3_08U, 2},
{20, 12, 1680, 0, 1, gScenarioBufferData126_ERODE_3X3_08U, 20, gScenarioKernelData126_ERODE_3X3_08U, 2},
{22, 12, 1828, 0, 1, gScenarioBufferData127_ERODE_3X3_08U, 20, gScenarioKernelData127_ERODE_3X3_08U, 2},
{24, 12, 1976, 0, 1, gScenarioBufferData128_ERODE_3X3_08U, 20, gScenarioKernelData128_ERODE_3X3_08U, 2},
{26, 12, 2124, 0, 1, gScenarioBufferData129_ERODE_3X3_08U, 20, gScenarioKernelData129_ERODE_3X3_08U, 2},
{28, 12, 2272, 0, 1, gScenarioBufferData130_ERODE_3X3_08U, 20, gScenarioKernelData130_ERODE_3X3_08U, 2},
{30, 12, 2420, 0, 1, gScenarioBufferData131_ERODE_3X3_08U, 20, gScenarioKernelData131_ERODE_3X3_08U, 2},
{32, 12, 2568, 0, 1, gScenarioBufferData132_ERODE_3X3_08U, 20, gScenarioKernelData132_ERODE_3X3_08U, 2},
{48, 12, 3752, 0, 1, gScenarioBufferData133_ERODE_3X3_08U, 20, gScenarioKernelData133_ERODE_3X3_08U, 2},
{2, 14, 404, 0, 1, gScenarioBufferData134_ERODE_3X3_08U, 20, gScenarioKernelData134_ERODE_3X3_08U, 2},
{4, 14, 576, 0, 1, gScenarioBufferData135_ERODE_3X3_08U, 20, gScenarioKernelData135_ERODE_3X3_08U, 2},
{6, 14, 748, 0, 1, gScenarioBufferData136_ERODE_3X3_08U, 20, gScenarioKernelData136_ERODE_3X3_08U, 2},
{8, 14, 920, 0, 1, gScenarioBufferData137_ERODE_3X3_08U, 20, gScenarioKernelData137_ERODE_3X3_08U, 2},
{10, 14, 1092, 0, 1, gScenarioBufferData138_ERODE_3X3_08U, 20, gScenarioKernelData138_ERODE_3X3_08U, 2},
{12, 14, 1264, 0, 1, gScenarioBufferData139_ERODE_3X3_08U, 20, gScenarioKernelData139_ERODE_3X3_08U, 2},
{14, 14, 1436, 0, 1, gScenarioBufferData140_ERODE_3X3_08U, 20, gScenarioKernelData140_ERODE_3X3_08U, 2},
{16, 14, 1608, 0, 1, gScenarioBufferData141_ERODE_3X3_08U, 20, gScenarioKernelData141_ERODE_3X3_08U, 2},
{18, 14, 1780, 0, 1, gScenarioBufferData142_ERODE_3X3_08U, 20, gScenarioKernelData142_ERODE_3X3_08U, 2},
{20, 14, 1952, 0, 1, gScenarioBufferData143_ERODE_3X3_08U, 20, gScenarioKernelData143_ERODE_3X3_08U, 2},
{22, 14, 2124, 0, 1, gScenarioBufferData144_ERODE_3X3_08U, 20, gScenarioKernelData144_ERODE_3X3_08U, 2},
{24, 14, 2296, 0, 1, gScenarioBufferData145_ERODE_3X3_08U, 20, gScenarioKernelData145_ERODE_3X3_08U, 2},
{26, 14, 2468, 0, 1, gScenarioBufferData146_ERODE_3X3_08U, 20, gScenarioKernelData146_ERODE_3X3_08U, 2},
{28, 14, 2640, 0, 1, gScenarioBufferData147_ERODE_3X3_08U, 20, gScenarioKernelData147_ERODE_3X3_08U, 2},
{30, 14, 2812, 0, 1, gScenarioBufferData148_ERODE_3X3_08U, 20, gScenarioKernelData148_ERODE_3X3_08U, 2},
{32, 14, 2984, 0, 1, gScenarioBufferData149_ERODE_3X3_08U, 20, gScenarioKernelData149_ERODE_3X3_08U, 2},
{2, 16, 460, 0, 1, gScenarioBufferData150_ERODE_3X3_08U, 20, gScenarioKernelData150_ERODE_3X3_08U, 2},
{4, 16, 656, 0, 1, gScenarioBufferData151_ERODE_3X3_08U, 20, gScenarioKernelData151_ERODE_3X3_08U, 2},
{6, 16, 852, 0, 1, gScenarioBufferData152_ERODE_3X3_08U, 20, gScenarioKernelData152_ERODE_3X3_08U, 2},
{8, 16, 1048, 0, 1, gScenarioBufferData153_ERODE_3X3_08U, 20, gScenarioKernelData153_ERODE_3X3_08U, 2},
{10, 16, 1244, 0, 1, gScenarioBufferData154_ERODE_3X3_08U, 20, gScenarioKernelData154_ERODE_3X3_08U, 2},
{12, 16, 1440, 0, 1, gScenarioBufferData155_ERODE_3X3_08U, 20, gScenarioKernelData155_ERODE_3X3_08U, 2},
{14, 16, 1636, 0, 1, gScenarioBufferData156_ERODE_3X3_08U, 20, gScenarioKernelData156_ERODE_3X3_08U, 2},
{16, 16, 1832, 0, 1, gScenarioBufferData157_ERODE_3X3_08U, 20, gScenarioKernelData157_ERODE_3X3_08U, 2},
{18, 16, 2028, 0, 1, gScenarioBufferData158_ERODE_3X3_08U, 20, gScenarioKernelData158_ERODE_3X3_08U, 2},
{20, 16, 2224, 0, 1, gScenarioBufferData159_ERODE_3X3_08U, 20, gScenarioKernelData159_ERODE_3X3_08U, 2},
{22, 16, 2420, 0, 1, gScenarioBufferData160_ERODE_3X3_08U, 20, gScenarioKernelData160_ERODE_3X3_08U, 2},
{24, 16, 2616, 0, 1, gScenarioBufferData161_ERODE_3X3_08U, 20, gScenarioKernelData161_ERODE_3X3_08U, 2},
{26, 16, 2812, 0, 1, gScenarioBufferData162_ERODE_3X3_08U, 20, gScenarioKernelData162_ERODE_3X3_08U, 2},
{28, 16, 3008, 0, 1, gScenarioBufferData163_ERODE_3X3_08U, 20, gScenarioKernelData163_ERODE_3X3_08U, 2},
{30, 16, 3204, 0, 1, gScenarioBufferData164_ERODE_3X3_08U, 20, gScenarioKernelData164_ERODE_3X3_08U, 2},
{32, 16, 3400, 0, 1, gScenarioBufferData165_ERODE_3X3_08U, 20, gScenarioKernelData165_ERODE_3X3_08U, 2},
{2, 18, 516, 0, 1, gScenarioBufferData166_ERODE_3X3_08U, 20, gScenarioKernelData166_ERODE_3X3_08U, 2},
{4, 18, 736, 0, 1, gScenarioBufferData167_ERODE_3X3_08U, 20, gScenarioKernelData167_ERODE_3X3_08U, 2},
{6, 18, 956, 0, 1, gScenarioBufferData168_ERODE_3X3_08U, 20, gScenarioKernelData168_ERODE_3X3_08U, 2},
{8, 18, 1176, 0, 1, gScenarioBufferData169_ERODE_3X3_08U, 20, gScenarioKernelData169_ERODE_3X3_08U, 2},
{10, 18, 1396, 0, 1, gScenarioBufferData170_ERODE_3X3_08U, 20, gScenarioKernelData170_ERODE_3X3_08U, 2},
{12, 18, 1616, 0, 1, gScenarioBufferData171_ERODE_3X3_08U, 20, gScenarioKernelData171_ERODE_3X3_08U, 2},
{14, 18, 1836, 0, 1, gScenarioBufferData172_ERODE_3X3_08U, 20, gScenarioKernelData172_ERODE_3X3_08U, 2},
{16, 18, 2056, 0, 1, gScenarioBufferData173_ERODE_3X3_08U, 20, gScenarioKernelData173_ERODE_3X3_08U, 2},
{18, 18, 2276, 0, 1, gScenarioBufferData174_ERODE_3X3_08U, 20, gScenarioKernelData174_ERODE_3X3_08U, 2},
{20, 18, 2496, 0, 1, gScenarioBufferData175_ERODE_3X3_08U, 20, gScenarioKernelData175_ERODE_3X3_08U, 2},
{22, 18, 2716, 0, 1, gScenarioBufferData176_ERODE_3X3_08U, 20, gScenarioKernelData176_ERODE_3X3_08U, 2},
{24, 18, 2936, 0, 1, gScenarioBufferData177_ERODE_3X3_08U, 20, gScenarioKernelData177_ERODE_3X3_08U, 2},
{26, 18, 3156, 0, 1, gScenarioBufferData178_ERODE_3X3_08U, 20, gScenarioKernelData178_ERODE_3X3_08U, 2},
{28, 18, 3376, 0, 1, gScenarioBufferData179_ERODE_3X3_08U, 20, gScenarioKernelData179_ERODE_3X3_08U, 2},
{30, 18, 3596, 0, 1, gScenarioBufferData180_ERODE_3X3_08U, 20, gScenarioKernelData180_ERODE_3X3_08U, 2},
{32, 18, 3816, 0, 1, gScenarioBufferData181_ERODE_3X3_08U, 20, gScenarioKernelData181_ERODE_3X3_08U, 2},
{2, 20, 572, 0, 1, gScenarioBufferData182_ERODE_3X3_08U, 20, gScenarioKernelData182_ERODE_3X3_08U, 2},
{4, 20, 816, 0, 1, gScenarioBufferData183_ERODE_3X3_08U, 20, gScenarioKernelData183_ERODE_3X3_08U, 2},
{6, 20, 1060, 0, 1, gScenarioBufferData184_ERODE_3X3_08U, 20, gScenarioKernelData184_ERODE_3X3_08U, 2},
{8, 20, 1304, 0, 1, gScenarioBufferData185_ERODE_3X3_08U, 20, gScenarioKernelData185_ERODE_3X3_08U, 2},
{10, 20, 1548, 0, 1, gScenarioBufferData186_ERODE_3X3_08U, 20, gScenarioKernelData186_ERODE_3X3_08U, 2},
{12, 20, 1792, 0, 1, gScenarioBufferData187_ERODE_3X3_08U, 20, gScenarioKernelData187_ERODE_3X3_08U, 2},
{14, 20, 2036, 0, 1, gScenarioBufferData188_ERODE_3X3_08U, 20, gScenarioKernelData188_ERODE_3X3_08U, 2},
{16, 20, 2280, 0, 1, gScenarioBufferData189_ERODE_3X3_08U, 20, gScenarioKernelData189_ERODE_3X3_08U, 2},
{18, 20, 2524, 0, 1, gScenarioBufferData190_ERODE_3X3_08U, 20, gScenarioKernelData190_ERODE_3X3_08U, 2},
{20, 20, 2768, 0, 1, gScenarioBufferData191_ERODE_3X3_08U, 20, gScenarioKernelData191_ERODE_3X3_08U, 2},
{22, 20, 3012, 0, 1, gScenarioBufferData192_ERODE_3X3_08U, 20, gScenarioKernelData192_ERODE_3X3_08U, 2},
{24, 20, 3256, 0, 1, gScenarioBufferData193_ERODE_3X3_08U, 20, gScenarioKernelData193_ERODE_3X3_08U, 2},
{26, 20, 3500, 0, 1, gScenarioBufferData194_ERODE_3X3_08U, 20, gScenarioKernelData194_ERODE_3X3_08U, 2},
{28, 20, 3744, 0, 1, gScenarioBufferData195_ERODE_3X3_08U, 20, gScenarioKernelData195_ERODE_3X3_08U, 2},
{2, 22, 628, 0, 1, gScenarioBufferData196_ERODE_3X3_08U, 20, gScenarioKernelData196_ERODE_3X3_08U, 2},
{4, 22, 896, 0, 1, gScenarioBufferData197_ERODE_3X3_08U, 20, gScenarioKernelData197_ERODE_3X3_08U, 2},
{6, 22, 1164, 0, 1, gScenarioBufferData198_ERODE_3X3_08U, 20, gScenarioKernelData198_ERODE_3X3_08U, 2},
{8, 22, 1432, 0, 1, gScenarioBufferData199_ERODE_3X3_08U, 20, gScenarioKernelData199_ERODE_3X3_08U, 2},
{10, 22, 1700, 0, 1, gScenarioBufferData200_ERODE_3X3_08U, 20, gScenarioKernelData200_ERODE_3X3_08U, 2},
{12, 22, 1968, 0, 1, gScenarioBufferData201_ERODE_3X3_08U, 20, gScenarioKernelData201_ERODE_3X3_08U, 2},
{14, 22, 2236, 0, 1, gScenarioBufferData202_ERODE_3X3_08U, 20, gScenarioKernelData202_ERODE_3X3_08U, 2},
{16, 22, 2504, 0, 1, gScenarioBufferData203_ERODE_3X3_08U, 20, gScenarioKernelData203_ERODE_3X3_08U, 2},
{18, 22, 2772, 0, 1, gScenarioBufferData204_ERODE_3X3_08U, 20, gScenarioKernelData204_ERODE_3X3_08U, 2},
{20, 22, 3040, 0, 1, gScenarioBufferData205_ERODE_3X3_08U, 20, gScenarioKernelData205_ERODE_3X3_08U, 2},
{22, 22, 3308, 0, 1, gScenarioBufferData206_ERODE_3X3_08U, 20, gScenarioKernelData206_ERODE_3X3_08U, 2},
{24, 22, 3576, 0, 1, gScenarioBufferData207_ERODE_3X3_08U, 20, gScenarioKernelData207_ERODE_3X3_08U, 2},
{2, 24, 684, 0, 1, gScenarioBufferData208_ERODE_3X3_08U, 20, gScenarioKernelData208_ERODE_3X3_08U, 2},
{4, 24, 976, 0, 1, gScenarioBufferData209_ERODE_3X3_08U, 20, gScenarioKernelData209_ERODE_3X3_08U, 2},
{6, 24, 1268, 0, 1, gScenarioBufferData210_ERODE_3X3_08U, 20, gScenarioKernelData210_ERODE_3X3_08U, 2},
{8, 24, 1560, 0, 1, gScenarioBufferData211_ERODE_3X3_08U, 20, gScenarioKernelData211_ERODE_3X3_08U, 2},
{10, 24, 1852, 0, 1, gScenarioBufferData212_ERODE_3X3_08U, 20, gScenarioKernelData212_ERODE_3X3_08U, 2},
{12, 24, 2144, 0, 1, gScenarioBufferData213_ERODE_3X3_08U, 20, gScenarioKernelData213_ERODE_3X3_08U, 2},
{14, 24, 2436, 0, 1, gScenarioBufferData214_ERODE_3X3_08U, 20, gScenarioKernelData214_ERODE_3X3_08U, 2},
{16, 24, 2728, 0, 1, gScenarioBufferData215_ERODE_3X3_08U, 20, gScenarioKernelData215_ERODE_3X3_08U, 2},
{18, 24, 3020, 0, 1, gScenarioBufferData216_ERODE_3X3_08U, 20, gScenarioKernelData216_ERODE_3X3_08U, 2},
{20, 24, 3312, 0, 1, gScenarioBufferData217_ERODE_3X3_08U, 20, gScenarioKernelData217_ERODE_3X3_08U, 2},
{22, 24, 3604, 0, 1, gScenarioBufferData218_ERODE_3X3_08U, 20, gScenarioKernelData218_ERODE_3X3_08U, 2},
{2, 26, 740, 0, 1, gScenarioBufferData219_ERODE_3X3_08U, 20, gScenarioKernelData219_ERODE_3X3_08U, 2},
{4, 26, 1056, 0, 1, gScenarioBufferData220_ERODE_3X3_08U, 20, gScenarioKernelData220_ERODE_3X3_08U, 2},
{6, 26, 1372, 0, 1, gScenarioBufferData221_ERODE_3X3_08U, 20, gScenarioKernelData221_ERODE_3X3_08U, 2},
{8, 26, 1688, 0, 1, gScenarioBufferData222_ERODE_3X3_08U, 20, gScenarioKernelData222_ERODE_3X3_08U, 2},
{10, 26, 2004, 0, 1, gScenarioBufferData223_ERODE_3X3_08U, 20, gScenarioKernelData223_ERODE_3X3_08U, 2},
{12, 26, 2320, 0, 1, gScenarioBufferData224_ERODE_3X3_08U, 20, gScenarioKernelData224_ERODE_3X3_08U, 2},
{14, 26, 2636, 0, 1, gScenarioBufferData225_ERODE_3X3_08U, 20, gScenarioKernelData225_ERODE_3X3_08U, 2},
{16, 26, 2952, 0, 1, gScenarioBufferData226_ERODE_3X3_08U, 20, gScenarioKernelData226_ERODE_3X3_08U, 2},
{18, 26, 3268, 0, 1, gScenarioBufferData227_ERODE_3X3_08U, 20, gScenarioKernelData227_ERODE_3X3_08U, 2},
{20, 26, 3584, 0, 1, gScenarioBufferData228_ERODE_3X3_08U, 20, gScenarioKernelData228_ERODE_3X3_08U, 2},
{2, 28, 796, 0, 1, gScenarioBufferData229_ERODE_3X3_08U, 20, gScenarioKernelData229_ERODE_3X3_08U, 2},
{4, 28, 1136, 0, 1, gScenarioBufferData230_ERODE_3X3_08U, 20, gScenarioKernelData230_ERODE_3X3_08U, 2},
{6, 28, 1476, 0, 1, gScenarioBufferData231_ERODE_3X3_08U, 20, gScenarioKernelData231_ERODE_3X3_08U, 2},
{8, 28, 1816, 0, 1, gScenarioBufferData232_ERODE_3X3_08U, 20, gScenarioKernelData232_ERODE_3X3_08U, 2},
{10, 28, 2156, 0, 1, gScenarioBufferData233_ERODE_3X3_08U, 20, gScenarioKernelData233_ERODE_3X3_08U, 2},
{12, 28, 2496, 0, 1, gScenarioBufferData234_ERODE_3X3_08U, 20, gScenarioKernelData234_ERODE_3X3_08U, 2},
{14, 28, 2836, 0, 1, gScenarioBufferData235_ERODE_3X3_08U, 20, gScenarioKernelData235_ERODE_3X3_08U, 2},
{16, 28, 3176, 0, 1, gScenarioBufferData236_ERODE_3X3_08U, 20, gScenarioKernelData236_ERODE_3X3_08U, 2},
{18, 28, 3516, 0, 1, gScenarioBufferData237_ERODE_3X3_08U, 20, gScenarioKernelData237_ERODE_3X3_08U, 2},
{2, 30, 852, 0, 1, gScenarioBufferData238_ERODE_3X3_08U, 20, gScenarioKernelData238_ERODE_3X3_08U, 2},
{4, 30, 1216, 0, 1, gScenarioBufferData239_ERODE_3X3_08U, 20, gScenarioKernelData239_ERODE_3X3_08U, 2},
{6, 30, 1580, 0, 1, gScenarioBufferData240_ERODE_3X3_08U, 20, gScenarioKernelData240_ERODE_3X3_08U, 2},
{8, 30, 1944, 0, 1, gScenarioBufferData241_ERODE_3X3_08U, 20, gScenarioKernelData241_ERODE_3X3_08U, 2},
{10, 30, 2308, 0, 1, gScenarioBufferData242_ERODE_3X3_08U, 20, gScenarioKernelData242_ERODE_3X3_08U, 2},
{12, 30, 2672, 0, 1, gScenarioBufferData243_ERODE_3X3_08U, 20, gScenarioKernelData243_ERODE_3X3_08U, 2},
{14, 30, 3036, 0, 1, gScenarioBufferData244_ERODE_3X3_08U, 20, gScenarioKernelData244_ERODE_3X3_08U, 2},
{16, 30, 3400, 0, 1, gScenarioBufferData245_ERODE_3X3_08U, 20, gScenarioKernelData245_ERODE_3X3_08U, 2},
{18, 30, 3764, 0, 1, gScenarioBufferData246_ERODE_3X3_08U, 20, gScenarioKernelData246_ERODE_3X3_08U, 2},
{2, 32, 908, 0, 1, gScenarioBufferData247_ERODE_3X3_08U, 20, gScenarioKernelData247_ERODE_3X3_08U, 2},
{4, 32, 1296, 0, 1, gScenarioBufferData248_ERODE_3X3_08U, 20, gScenarioKernelData248_ERODE_3X3_08U, 2},
{6, 32, 1684, 0, 1, gScenarioBufferData249_ERODE_3X3_08U, 20, gScenarioKernelData249_ERODE_3X3_08U, 2},
{8, 32, 2072, 0, 1, gScenarioBufferData250_ERODE_3X3_08U, 20, gScenarioKernelData250_ERODE_3X3_08U, 2},
{10, 32, 2460, 0, 1, gScenarioBufferData251_ERODE_3X3_08U, 20, gScenarioKernelData251_ERODE_3X3_08U, 2},
{12, 32, 2848, 0, 1, gScenarioBufferData252_ERODE_3X3_08U, 20, gScenarioKernelData252_ERODE_3X3_08U, 2},
{14, 32, 3236, 0, 1, gScenarioBufferData253_ERODE_3X3_08U, 20, gScenarioKernelData253_ERODE_3X3_08U, 2},
{16, 32, 3624, 0, 1, gScenarioBufferData254_ERODE_3X3_08U, 20, gScenarioKernelData254_ERODE_3X3_08U, 2}
};

static acf_scenario_list gScenarioList_ERODE_3X3_08U = {
255, //number of scenarios
gScenarioArray_ERODE_3X3_08U};
//**************************************************************

class ERODE_3X3_08U : public ACF_Process_APU
{
public:
   ERODE_3X3_08U(int32_t apex_id = 0) : ACF_Process_APU(apex_id)
   {} 

   int32_t Initialize()
   {
      int32_t lRetVal = 0;

      if (!Initialized()) //initialization steps that only need to occur once
      {
         SetProcessIdentifier("ERODE_3X3_08U");
         SetApuLoadInfo(ERODE_3X3_08U_LOAD_SEGMENTS,
                        ERODE_3X3_08U_LOAD_PMEM, ERODE_3X3_08U_LOAD_PMEM_SIZE,
                        ERODE_3X3_08U_LOAD_DMEM, ERODE_3X3_08U_LOAD_DMEM_SIZE,
                        0, 0); //assuming _LOAD_CMEM does not exist
         FlagSpatialDep();

         //***NOTE: the order in which the following ports are added is meaningful; do not change!

         AddPort("INPUT_0", ICP_DATATYPE_08U, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0x1010101);
         AddPort("OUTPUT_0", ICP_DATATYPE_08U, 1, 1, 2, 1, 1, 0, 0, 0, 0, 0, 1);

         CfgScenarios(&gScenarioList_ERODE_3X3_08U);

         FlagAsInitialized();
      }

      lRetVal = SelectApuConfiguration(mApuCfg, mApexId); //by default mApuCfg = ACF_APU_CFG__APEX0_DEFAULT and mApexId = 0

      return lRetVal;
   }
};

#endif //_ACF_PROCESS_APU_ERODE_3X3_08U
