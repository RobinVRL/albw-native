#include "ghidra_types.h"

extern undefined4 DAT_002ac824;
extern undefined4 DAT_002ac828;
extern undefined4 *DAT_002ac82c;
extern undefined4 DAT_002ac830;

// USA 002AC790 <- EU 002AC76C (Ghidra, non-matching)
// GLOBAL DAT_002ac824 undefined4
// GLOBAL DAT_002ac828 undefined4
// GLOBAL DAT_002ac82c undefined4 *
// GLOBAL DAT_002ac830 undefined4

undefined4 func_002AC790(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = DAT_002ac824;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar3;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar1 = DAT_002ac828;
  param_1[5] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = uVar3;
  *(undefined1 *)(param_1 + 0xd) = 0;
  puVar2 = DAT_002ac82c;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = uVar3;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  param_1[0x11] = *puVar2;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar4;
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined1 *)((int)param_1 + 0x51) = 0xff;
  *(undefined1 *)((int)param_1 + 0x52) = 0xff;
  *(undefined1 *)((int)param_1 + 0x53) = 0xc;
  *(undefined1 *)(param_1 + 0x15) = 4;
  *(undefined1 *)((int)param_1 + 0x55) = 2;
  uVar3 = DAT_002ac830;
  *(undefined1 *)((int)param_1 + 0x56) = 0;
  *(undefined1 *)((int)param_1 + 0x57) = 1;
  param_1[0x16] = uVar3;
  param_1[0x17] = uVar1;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return (undefined4)param_1;
}

