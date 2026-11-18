#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_001e8bcc;
extern uint DAT_001e8bd0;
extern undefined4 DAT_001e8bd4;
extern undefined4 *DAT_001e8bd8;

// USA 001E8B28 <- EU 001E8B28 (Ghidra, non-matching)
// GLOBAL DAT_001e8bcc uint *
// GLOBAL DAT_001e8bd0 uint
// GLOBAL DAT_001e8bd4 undefined4
// GLOBAL DAT_001e8bd8 undefined4 *

void func_001E8B28(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  uVar2 = DAT_001e8bd4;
  puVar1 = DAT_001e8bcc;
  iVar4 = *(int *)(param_1 + 0xe30) + -1;
  if (-1 < iVar4) {
    uVar6 = (ulonglong)DAT_001e8bd0;
    do {
      puVar5 = (undefined4 *)(param_1 + 0x14 + iVar4 * 0x2d0);
      if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001e8bcc), iVar3 != 0)) {
        *DAT_001e8bd8 = uVar2;
      }
      if ((puVar5 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar5)(puVar5,DAT_001e8bd8), iVar3 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        puVar5[0x42] = (int)uVar6;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}

