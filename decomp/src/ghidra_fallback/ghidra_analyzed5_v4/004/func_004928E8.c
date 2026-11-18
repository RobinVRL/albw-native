#include "ghidra_types.h"

extern undefined4 DAT_0049292c;
extern undefined1 *DAT_00492930;
extern undefined4 *DAT_00492934;
extern undefined4 *DAT_00492938;
extern undefined4 DAT_0049293c;
extern undefined4 DAT_00492940;
extern undefined4 DAT_00492944;
extern undefined4 DAT_00492948;
extern undefined4 DAT_0049294c;

// USA 004928E8 <- EU 004928C0 (Ghidra, non-matching)
// GLOBAL DAT_0049292c undefined4
// GLOBAL DAT_00492930 undefined1 *
// GLOBAL DAT_00492934 undefined4 *
// GLOBAL DAT_00492938 undefined4 *
// GLOBAL DAT_0049293c undefined4
// GLOBAL DAT_00492940 undefined4
// GLOBAL DAT_00492944 undefined4
// GLOBAL DAT_00492948 undefined4
// GLOBAL DAT_0049294c undefined4

undefined4 * func_004928E8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = DAT_0049293c;
  *param_1 = DAT_0049292c;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  uVar4 = DAT_00492948;
  uVar3 = DAT_00492944;
  uVar2 = DAT_00492940;
  *(undefined1 *)(param_1 + 0x22) = *DAT_00492930;
  param_1[0x23] = *DAT_00492934;
  param_1[0x24] = *DAT_00492938;
  *param_1 = DAT_0049294c;
  param_1[0x27] = uVar1;
  param_1[0x28] = uVar2;
  param_1[0x29] = uVar2;
  param_1[0x2a] = uVar1;
  param_1[0x25] = uVar3;
  param_1[0x26] = uVar4;
  return param_1;
}

