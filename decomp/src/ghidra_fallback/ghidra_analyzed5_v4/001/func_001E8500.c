#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0034D74C(int param_1,float *param_2,float param_3,float fparam_0);
extern uint *DAT_001e85c4;
extern undefined4 DAT_001e85c8;
extern undefined4 *DAT_001e85cc;

// USA 001E8500 <- EU 001E8500 (Ghidra, non-matching)
// GLOBAL DAT_001e85c4 uint *
// GLOBAL DAT_001e85c8 undefined4
// GLOBAL DAT_001e85cc undefined4 *

void func_001E8500(int param_1,float *param_2,float param_3,float fparam_0)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar2 = DAT_001e85c8;
  puVar1 = DAT_001e85c4;
  iVar3 = *(int *)(param_1 + 0x1c8);
  uVar7 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  iVar4 = *(int *)(iVar3 + 0xe30);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    puVar6 = (undefined4 *)(iVar3 + 0x14 + iVar4 * 0x2d0);
    if (((*puVar1 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001e85c4), iVar5 != 0)) {
      *DAT_001e85cc = uVar2;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar6)(puVar6,DAT_001e85cc), iVar5 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      func_0034D74C((int)puVar6,param_2,param_3,ALBW_AS_F32(uVar7));
    }
  }
  return;
}

