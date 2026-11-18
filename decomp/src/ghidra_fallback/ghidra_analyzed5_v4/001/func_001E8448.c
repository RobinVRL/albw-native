#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0034D718(int param_1,float *param_2,float param_3);
extern uint *DAT_001e84f4;
extern undefined4 DAT_001e84f8;
extern undefined4 *DAT_001e84fc;

// USA 001E8448 <- EU 001E8448 (Ghidra, non-matching)
// GLOBAL DAT_001e84f4 uint *
// GLOBAL DAT_001e84f8 undefined4
// GLOBAL DAT_001e84fc undefined4 *

void func_001E8448(int param_1,float *param_2,float param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar2 = DAT_001e84f8;
  puVar1 = DAT_001e84f4;
  iVar3 = *(int *)(param_1 + 0xe30);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar5 = (undefined4 *)(param_1 + 0x14 + iVar3 * 0x2d0);
    if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001e84f4), iVar4 != 0)) {
      *DAT_001e84fc = uVar2;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar5)(puVar5,DAT_001e84fc), iVar4 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      func_0034D718((int)puVar5,param_2,param_3);
    }
  }
  return;
}

