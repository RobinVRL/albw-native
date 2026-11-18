#include "ghidra_types.h"

extern uint DAT_003dbd64;
extern int *DAT_003dbd68;

// USA 003DBD18 <- EU 003DBCF8 (Ghidra, non-matching)
// GLOBAL DAT_003dbd64 uint
// GLOBAL DAT_003dbd68 int *

int func_003DBD18(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)((ulonglong)(uint)(*param_1 * 1000) * (ulonglong)DAT_003dbd64 >> 0x2c);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  uVar2 = (uint)((ulonglong)(uint)(param_1[2] * 1000) * (ulonglong)DAT_003dbd64 >> 0x2c);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  piVar1 = (int *)param_1[5];
  if ((int *)param_1[5] == (int *)0x0) {
    piVar1 = DAT_003dbd68;
  }
  return (piVar1[2] + *piVar1 + piVar1[1] + (uVar2 + uVar3) * 0xa0) * 8;
}

