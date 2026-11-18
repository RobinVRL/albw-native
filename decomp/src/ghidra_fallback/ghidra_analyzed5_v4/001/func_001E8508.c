#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0034D74C(int param_1,float *param_2,float param_3,float fparam_0);
extern uint *DAT_001e85c4;
extern undefined4 DAT_001e85c8;
extern undefined4 *DAT_001e85cc;

// USA 001E8508 <- EU 001E8508 (Ghidra, non-matching)
// GLOBAL DAT_001e85c4 uint *
// GLOBAL DAT_001e85c8 undefined4
// GLOBAL DAT_001e85cc undefined4 *

void func_001E8508(int param_1,float *param_2,float param_3,float fparam_0)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  uVar2 = DAT_001e85c8;
  puVar1 = DAT_001e85c4;
  uVar6 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  iVar3 = *(int *)(param_1 + 0xe30);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar5 = (undefined4 *)(param_1 + 0x14 + iVar3 * 0x2d0);
    if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001e85c4), iVar4 != 0)) {
      *DAT_001e85cc = uVar2;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar5)(puVar5,DAT_001e85cc), iVar4 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      func_0034D74C((int)puVar5,param_2,param_3,ALBW_AS_F32(uVar6));
    }
  }
  return;
}

