#include "ghidra_types.h"

extern undefined4 DAT_00433744;
extern undefined4 DAT_00433748;
extern undefined4 DAT_0043374c;
extern undefined4 DAT_00433750;
extern undefined4 DAT_00433754;
extern undefined4 DAT_00433758;

// USA 004336CC <- EU 004336AC (Ghidra, non-matching)
// GLOBAL DAT_00433744 undefined4
// GLOBAL DAT_00433748 undefined4
// GLOBAL DAT_0043374c undefined4
// GLOBAL DAT_00433750 undefined4
// GLOBAL DAT_00433754 undefined4
// GLOBAL DAT_00433758 undefined4

undefined4 func_004336CC(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00433748;
  *param_1 = DAT_00433744;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  uVar1 = DAT_0043374c;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar1;
  uVar1 = DAT_00433750;
  param_1[0x10] = DAT_00433750;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 7;
  uVar1 = DAT_00433754;
  *param_1 = DAT_00433758;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar1;
  return (undefined4)param_1;
}

