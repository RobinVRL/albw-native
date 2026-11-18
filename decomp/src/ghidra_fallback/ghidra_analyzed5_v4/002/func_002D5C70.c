#include "ghidra_types.h"

extern undefined4 DAT_002d5d0c;
extern undefined4 DAT_002d5d10;

// USA 002D5C70 <- EU 002D5C4C (Ghidra, non-matching)
// GLOBAL DAT_002d5d0c undefined4
// GLOBAL DAT_002d5d10 undefined4

undefined4 * func_002D5C70(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = DAT_002d5d10;
  *(undefined2 *)(param_1 + 1) = 0xfffe;
  uVar1 = DAT_002d5d0c;
  iVar3 = *param_2;
  param_1[10] = iVar3;
  puVar2 = (undefined4 *)(iVar3 + 1000);
  param_1[0xb] = param_2[1];
  param_1[0xf] = puVar2;
  param_1[0xd] = iVar3 + 0x3dc;
  param_1[0xe] = iVar3 + 0x59c;
  param_1[0xc] = iVar3 + 0x3d0;
  param_1[0x10] = iVar3 + 0x5ac;
  param_1[0x11] = iVar3 + 0x620;
  param_1[0x12] = *(undefined4 *)(iVar3 + 0x5fc);
  param_1[0x13] = *(undefined4 *)(iVar3 + 0x600);
  param_1[0x14] = *(undefined4 *)(iVar3 + 0x604);
  param_1[0x15] = *(undefined4 *)(iVar3 + 0x608);
  param_1[0x16] = *puVar2;
  param_1[0x17] = *puVar2;
  param_1[0x18] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

