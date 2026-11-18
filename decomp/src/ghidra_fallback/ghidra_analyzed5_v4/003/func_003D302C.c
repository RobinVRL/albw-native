#include "ghidra_types.h"

extern int func_00104560(byte *param_1);
extern int func_003D25C0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern byte *DAT_003d3040;
extern undefined4 DAT_003d3044;

// USA 003D302C <- EU 003D3008 (Ghidra, non-matching)
// GLOBAL DAT_003d3040 byte *
// GLOBAL DAT_003d3044 undefined4

undefined4 func_003D302C(undefined4 param_1,undefined4 param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = DAT_003d3044;
  pbVar1 = DAT_003d3040;
  *DAT_003d3040 = 5;
  pbVar1[1] = 0;
  *(short *)(pbVar1 + 2) = (short)uVar2;
  *(undefined4 *)(pbVar1 + 8) = param_2;
  *(undefined4 *)(pbVar1 + 4) = param_1;
  uVar3 = func_00104560(pbVar1);
  return func_003D25C0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_1);
}

