#include "ghidra_types.h"

extern uint DAT_003dbd64;
extern int *DAT_003dbd68;

// USA 003DBD0C <- EU 003DBCEC (Ghidra, non-matching)
// GLOBAL DAT_003dbd64 uint
// GLOBAL DAT_003dbd68 int *

int func_003DBD0C(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  uVar4 = (uint)((ulonglong)(uint)(*piVar1 * 1000) * (ulonglong)DAT_003dbd64 >> 0x2c);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  uVar3 = (uint)((ulonglong)(uint)(piVar1[2] * 1000) * (ulonglong)DAT_003dbd64 >> 0x2c);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  piVar2 = (int *)piVar1[5];
  if ((int *)piVar1[5] == (int *)0x0) {
    piVar2 = DAT_003dbd68;
  }
  return (piVar2[2] + *piVar2 + piVar2[1] + (uVar3 + uVar4) * 0xa0) * 8;
}

