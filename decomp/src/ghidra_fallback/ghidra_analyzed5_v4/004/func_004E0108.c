#include "ghidra_types.h"

extern undefined4 DAT_004e0104;
extern int DAT_004e0108;
extern undefined4 DAT_004e010c;

// USA 004E0108 <- EU 004E00E0 (Ghidra, non-matching)
// GLOBAL DAT_004e0104 undefined4
// GLOBAL DAT_004e0108 int
// GLOBAL DAT_004e010c undefined4

undefined4 func_004E0108(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_004e0108;
  uVar1 = DAT_004e0104;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_004e0104;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_004e010c;
  *(undefined2 *)(iVar2 + param_1) = 0;
  return (undefined4)param_1;
}

