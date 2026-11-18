#include "ghidra_types.h"

extern undefined4 DAT_0036eacc;
extern undefined4 DAT_0036ead0;

// USA 0036EAB4 <- EU 0036EA90 (Ghidra, non-matching)
// GLOBAL DAT_0036eacc undefined4
// GLOBAL DAT_0036ead0 undefined4

undefined4 func_0036EAB4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x5c) = DAT_0036eacc;
  uVar1 = DAT_0036ead0;
  uVar2 = *(undefined4 *)(param_2 + 0x3d4);
  uVar3 = *(undefined4 *)(param_2 + 0x3d8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x3d0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x6b) = 1;
  *(undefined4 *)(param_1 + 100) = 0x3c;
  return (undefined4)param_1;
}

