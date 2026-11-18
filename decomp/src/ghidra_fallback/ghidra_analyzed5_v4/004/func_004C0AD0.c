#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);

// USA 004C0AD0 <- EU 004C0AA8 (Ghidra, non-matching)

undefined4 func_004C0AD0(undefined4 param_1,int *param_2,float *param_3,float *param_4)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  if (param_2 == (int *)0x0) {
    return 0;
  }
  fStack_18 = *param_3;
  fStack_14 = param_3[1];
  fStack_10 = param_3[2];
  func_00115C54(&fStack_18,&fStack_18,param_4);
  param_2[1] = (int)ALBW_AS_U32(fStack_18);
  param_2[2] = (int)ALBW_AS_U32(fStack_14);
  param_2[3] = (int)ALBW_AS_U32(fStack_10);
  return func_004356B4(param_2);
}

