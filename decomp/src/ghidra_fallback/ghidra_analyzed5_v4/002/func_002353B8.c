#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);

// USA 002353B8 <- EU 002353B8 (Ghidra, non-matching)

undefined4 * func_002353B8(int param_1,uint param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = ALBW_AS_F32(param_3[1]);
  iVar3 = param_3[2];
  param_4[1] = *param_3;
  param_4[2] = (int)ALBW_AS_U32((fVar4 + ALBW_AS_F32(param_4[0x16])));
  param_4[3] = iVar3;
  func_004356B4(param_4);
  param_4[0xb] = param_4[0xb] | 0x2000085;
  puVar1 = (undefined4 *)func_0010BAB4(0x48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_0034CAA0(puVar1);
  }
  iVar3 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar3 = iVar3 + param_2 * 0x104;
  }
  *(undefined4 **)(iVar3 + 0x84) = puVar2;
  return puVar2;
}

