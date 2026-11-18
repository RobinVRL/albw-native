#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0034E344(int param_1);
extern uint *DAT_001e8b14;
extern undefined4 DAT_001e8b18;
extern undefined4 *DAT_001e8b1c;

// USA 001E8A78 <- EU 001E8A78 (Ghidra, non-matching)
// GLOBAL DAT_001e8b14 uint *
// GLOBAL DAT_001e8b18 undefined4
// GLOBAL DAT_001e8b1c undefined4 *

void func_001E8A78(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar2 = DAT_001e8b18;
  puVar1 = DAT_001e8b14;
  iVar3 = *(int *)(param_1 + 0xe30);
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar5 = (undefined4 *)(param_1 + 0x14 + iVar3 * 0x2d0);
    if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001e8b14), iVar4 != 0)) {
      *DAT_001e8b1c = uVar2;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar5)(puVar5,DAT_001e8b1c), iVar4 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      func_0034E344((int)puVar5);
    }
  }
  return;
}

