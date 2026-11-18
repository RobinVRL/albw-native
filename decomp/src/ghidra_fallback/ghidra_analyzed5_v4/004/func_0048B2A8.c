#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float func_00115DC8(float *param_1);
extern undefined4 DAT_0048b2f0;
extern undefined4 DAT_0048b2f4;
extern undefined4 DAT_0048b2f8;
extern undefined4 *DAT_0048b2fc;
extern undefined4 DAT_0048b300;
extern undefined4 DAT_0048b304;

// USA 0048B2A8 <- EU 0048B280 (Ghidra, non-matching)
// GLOBAL DAT_0048b2f0 undefined4
// GLOBAL DAT_0048b2f4 undefined4
// GLOBAL DAT_0048b2f8 undefined4
// GLOBAL DAT_0048b2fc undefined4 *
// GLOBAL DAT_0048b300 undefined4
// GLOBAL DAT_0048b304 undefined4

undefined4 * func_0048B2A8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_0048b2fc;
  uVar2 = DAT_0048b2f0;
  *param_1 = DAT_0048b2f8;
  uVar3 = DAT_0048b2f4;
  func_001119F4(param_1 + 1,puVar1);
  *param_1 = DAT_0048b300;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar2;
  func_00115DC8((float *)(param_1 + 0x13));
  *param_1 = DAT_0048b304;
  return param_1;
}

