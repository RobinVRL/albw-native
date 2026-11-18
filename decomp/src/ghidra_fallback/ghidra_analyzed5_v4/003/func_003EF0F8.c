#include "ghidra_types.h"

extern undefined4 DAT_003ef218;
extern undefined4 DAT_003ef21c;
extern undefined4 DAT_003ef220;

// USA 003EF0F8 <- EU 003EF0D8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_003ef218 undefined4
// GLOBAL DAT_003ef21c undefined4
// GLOBAL DAT_003ef220 undefined4

undefined4 *
func_003EF0F8(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_003ef21c;
  uVar1 = DAT_003ef218;
  param_2[3] = DAT_003ef220;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = 0;
  param_2[4] = param_5[2];
  param_2[5] = param_5[1];
  param_2[6] = *param_5;
  param_2[7] = param_3[3];
  param_2[8] = param_3[2];
  param_2[9] = param_3[1];
  param_2[10] = *param_3;
  param_2[0xb] = param_3[7];
  param_2[0xc] = param_3[6];
  param_2[0xd] = param_3[5];
  param_2[0xe] = param_3[4];
  param_2[0xf] = param_3[0xb];
  param_2[0x10] = param_3[10];
  param_2[0x11] = param_3[9];
  param_2[0x12] = param_3[8];
  param_2[0x13] = param_3[0xf];
  param_2[0x14] = param_3[0xe];
  param_2[0x15] = param_3[0xd];
  param_2[0x16] = param_3[0xc];
  param_2[0x17] = param_4[3];
  param_2[0x18] = param_4[2];
  param_2[0x19] = param_4[1];
  param_2[0x1a] = *param_4;
  param_2[0x1b] = param_4[7];
  param_2[0x1c] = param_4[6];
  param_2[0x1d] = param_4[5];
  param_2[0x1e] = param_4[4];
  param_2[0x1f] = param_4[0xb];
  param_2[0x20] = param_4[10];
  param_2[0x21] = param_4[9];
  param_2[0x22] = param_4[8];
  param_2[0x23] = 0;
  return param_2 + 0x24;
}

