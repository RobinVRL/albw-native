#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0034D718(int param_1,float *param_2,float param_3);
extern uint *DAT_001e84f4;
extern undefined4 DAT_001e84f8;
extern undefined4 *DAT_001e84fc;

// USA 001E8440 <- EU 001E8440 (Ghidra, non-matching)
// GLOBAL DAT_001e84f4 uint *
// GLOBAL DAT_001e84f8 undefined4
// GLOBAL DAT_001e84fc undefined4 *

void func_001E8440(int param_1,float *param_2,float param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = DAT_001e84f8;
  puVar1 = DAT_001e84f4;
  iVar3 = *(int *)(param_1 + 0x1c8);
  iVar4 = *(int *)(iVar3 + 0xe30);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    puVar6 = (undefined4 *)(iVar3 + 0x14 + iVar4 * 0x2d0);
    if (((*puVar1 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001e84f4), iVar5 != 0)) {
      *DAT_001e84fc = uVar2;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar6)(puVar6,DAT_001e84fc), iVar5 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      func_0034D718((int)puVar6,param_2,param_3);
    }
  }
  return;
}

