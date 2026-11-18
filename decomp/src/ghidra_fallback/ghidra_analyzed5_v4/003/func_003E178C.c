#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern undefined4 DAT_003e17e4;

// USA 003E178C <- EU 003E176C (Ghidra, non-matching)
// GLOBAL DAT_003e17e4 undefined4

undefined4 * func_003E178C(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_003e17e4;
  *param_1 = param_2;
  param_1[0x16] = uVar1;
  param_1[0x12] = uVar1;
  param_1[0xe] = uVar1;
  param_1[0x17] = uVar1;
  param_1[0x13] = uVar1;
  param_1[0xf] = uVar1;
  param_1[0x18] = uVar1;
  param_1[0x14] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x19] = uVar1;
  param_1[0x15] = uVar1;
  param_1[0x11] = uVar1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff;
  func_0010DEB0(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 1) = 1;
  *(ushort *)(param_1 + 0x1b) = *(ushort *)(param_1 + 0x1b) | 0x8000;
  return param_1;
}

