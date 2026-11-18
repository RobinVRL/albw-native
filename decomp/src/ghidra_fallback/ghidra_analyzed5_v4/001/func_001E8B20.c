#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_001e8bcc;
extern uint DAT_001e8bd0;
extern undefined4 DAT_001e8bd4;
extern undefined4 *DAT_001e8bd8;

// USA 001E8B20 <- EU 001E8B20 (Ghidra, non-matching)
// GLOBAL DAT_001e8bcc uint *
// GLOBAL DAT_001e8bd0 uint
// GLOBAL DAT_001e8bd4 undefined4
// GLOBAL DAT_001e8bd8 undefined4 *

void func_001E8B20(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar2 = DAT_001e8bd4;
  puVar1 = DAT_001e8bcc;
  iVar3 = *(int *)(param_1 + 0x1c8);
  iVar5 = *(int *)(iVar3 + 0xe30) + -1;
  if (-1 < iVar5) {
    uVar7 = (ulonglong)DAT_001e8bd0;
    do {
      puVar6 = (undefined4 *)(iVar3 + 0x14 + iVar5 * 0x2d0);
      if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001e8bcc), iVar4 != 0)) {
        *DAT_001e8bd8 = uVar2;
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar6)(puVar6,DAT_001e8bd8), iVar4 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        puVar6[0x42] = (int)uVar7;
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}

