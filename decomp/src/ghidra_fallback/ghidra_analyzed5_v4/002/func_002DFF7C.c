#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_002dff98;

// USA 002DFF7C <- EU 002DFF58 (Ghidra, non-matching)
// GLOBAL DAT_002dff98 undefined4 *

undefined4 * func_002DFF7C(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  func_00110490(param_1,0x2c4);
  puVar1 = DAT_002dff98;
  *(undefined2 *)(param_1 + 0x15) = 0xffff;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x52) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x56) = 0xffff;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  param_1[6] = puVar1[2];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  return param_1 + 4;
}

