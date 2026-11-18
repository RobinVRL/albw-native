#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0068C690(float *param_1);
extern float DAT_002f50e8;

// USA 002F5090 <- EU 002F506C (Ghidra, non-matching)
// GLOBAL DAT_002f50e8 float

void func_002F5090(int param_1,int param_2,float *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  #define afStack_1c ((float *)(albw_frame + 0x14))
  if (param_2 == 0 || param_3 == (float *)0x0) {
    return;
  }
  local_28 = *(float *)(param_1 + 0x3d0);
  fStack_24 = *(float *)(param_1 + 0x3d4);
  fStack_20 = *(float *)(param_1 + 0x3d8);
  func_00115C54(&local_28,&local_28,(float *)(param_1 + 0xc58));
  *param_3 = local_28;
  param_3[1] = fStack_24;
  param_3[2] = fStack_20;
  func_00115C70(afStack_1c,(float *)(param_1 + 0xe30),(float *)(param_1 + 0x3d0));
  iVar1 = func_0068C690(afStack_1c);
  *(int *)(param_2 + 8) = iVar1;
  *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + DAT_002f50e8;
  return;
}

