#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0068C690(float *param_1);

// USA 002F4594 <- EU 002F4570 (Ghidra, non-matching)

void func_002F4594(int param_1,int param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  if (param_2 == 0 || param_3 == (float *)0x0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x3d4);
  fVar3 = *(float *)(param_1 + 0x3d8);
  *param_3 = *(float *)(param_1 + 0x3d0);
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  func_00115C54(param_3,param_3,(float *)(param_1 + 0xc58));
  func_00115C70(afStack_18,(float *)(param_1 + 0xe30),(float *)(param_1 + 0x3d0));
  iVar1 = func_0068C690(afStack_18);
  *(int *)(param_2 + 8) = iVar1;
  return;
}

