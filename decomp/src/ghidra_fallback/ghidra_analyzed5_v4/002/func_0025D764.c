#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern float *DAT_0025d7f4;
extern float *DAT_0025d7f8;

// USA 0025D764 <- EU 0025D78C (Ghidra, non-matching)
// GLOBAL DAT_0025d7f4 float *
// GLOBAL DAT_0025d7f8 float *

undefined4 func_0025D764(int param_1,float *param_2,uint param_3)

{
  _Alignas(8) unsigned char albw_frame[0x60];
  #define afStack_60 ((float *)(albw_frame + 0x0))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define fStack_2c (*(float *)(albw_frame + 0x34))
  #define fStack_28 (*(float *)(albw_frame + 0x38))
  #define afStack_20 ((float *)(albw_frame + 0x40))
  func_0048B5D4(afStack_20,DAT_0025d7f4,param_3);
  func_00491B3C(afStack_60,afStack_20);
  local_30 = *DAT_0025d7f8;
  fStack_2c = DAT_0025d7f8[1];
  fStack_28 = DAT_0025d7f8[2];
  func_00115CA8(&local_30,afStack_60,&local_30);
  return func_00115C54((float *)(param_1 + 0x40c),param_2,&local_30);
}

