#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern undefined4 DAT_0011046c;

// USA 001103B0 <- EU 001103B0 (Ghidra, non-matching)
// GLOBAL DAT_0011046c undefined4

undefined4 func_001103B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  *param_1 = param_2;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 0xb);
  } while (!bVar1);
  param_1[0xb] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 0xc);
  } while (!bVar1);
  param_1[0xc] = 0;
  uVar2 = DAT_0011046c;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 1);
  } while (!bVar1);
  param_1[1] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 2);
  } while (!bVar1);
  *(undefined2 *)(param_1 + 2) = 0;
  *(short *)((int)param_1 + 10) = (short)uVar2;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 3);
  } while (!bVar1);
  param_1[3] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 4);
  } while (!bVar1);
  *(undefined2 *)(param_1 + 4) = 0;
  *(short *)((int)param_1 + 0x12) = (short)uVar2;
  return func_0010DEB0(param_1 + 5);
}

