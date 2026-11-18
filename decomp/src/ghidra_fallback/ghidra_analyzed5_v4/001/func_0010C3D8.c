#include "ghidra_types.h"

extern undefined4 DAT_0010c418;
extern undefined4 DAT_0010c41c;
extern undefined4 DAT_0010c420;
extern undefined4 DAT_0010c424;

// USA 0010C3D8 <- EU 0010C3D8 (Ghidra, non-matching)
// GLOBAL DAT_0010c418 undefined4
// GLOBAL DAT_0010c41c undefined4
// GLOBAL DAT_0010c420 undefined4
// GLOBAL DAT_0010c424 undefined4

undefined4 func_0010C3D8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_0010c41c;
  *param_1 = 0x3c;
  param_1[1] = 4000;
  param_1[2] = 100;
  uVar3 = DAT_0010c420;
  uVar1 = DAT_0010c418;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  param_1[6] = uVar3;
  param_1[7] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = DAT_0010c424;
  return (undefined4)param_1;
}

