#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0034E344(int param_1);
extern uint *DAT_001e8b14;
extern undefined4 DAT_001e8b18;
extern undefined4 *DAT_001e8b1c;

// USA 001E8A70 <- EU 001E8A70 (Ghidra, non-matching)
// GLOBAL DAT_001e8b14 uint *
// GLOBAL DAT_001e8b18 undefined4
// GLOBAL DAT_001e8b1c undefined4 *

void func_001E8A70(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar2 = DAT_001e8b18;
  puVar1 = DAT_001e8b14;
  iVar3 = *(int *)(param_1 + 0x1c8);
  iVar4 = *(int *)(iVar3 + 0xe30);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    puVar6 = (undefined4 *)(iVar3 + 0x14 + iVar4 * 0x2d0);
    if (((*puVar1 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001e8b14), iVar5 != 0)) {
      *DAT_001e8b1c = uVar2;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar5 = (**(code **)*puVar6)(puVar6,DAT_001e8b1c), iVar5 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if (puVar6 != (undefined4 *)0x0) {
      func_0034E344((int)puVar6);
    }
  }
  return;
}

