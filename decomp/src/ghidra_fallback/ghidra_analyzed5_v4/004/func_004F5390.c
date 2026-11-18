#include "ghidra_types.h"

extern float DAT_004f5468;

// USA 004F5390 <- EU 004F5368 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_004f5468 float

undefined4 func_004F5390(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4,
                  undefined4 param_5,float fparam_0)

{
  bool bVar1;
  
  *(undefined1 *)((int)param_1 + 0x25) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x21);
  *param_1 = *(undefined4 *)(param_2 + 0x14);
  param_1[1] = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined4 *)(param_2 + 0x1c);
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  *(undefined1 *)((int)param_1 + 0x26) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((int)param_1 + 0x27) = param_4;
  param_1[6] = *(undefined4 *)(param_2 + 0x24);
  param_1[7] = *(undefined4 *)(param_2 + 0x28);
  param_1[8] = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = ALBW_AS_U32(fparam_0);
  param_1[0xc] = *(undefined4 *)(param_2 + 4);
  param_1[0xd] = param_5;
  param_1[0xe] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0xf] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x44);
  if (*(char *)(param_1 + 9) == '\x05') {
    *(byte *)(param_1 + 10) = (byte)((uint)*(undefined4 *)(param_2 + 0x38) >> 0x1c);
    *(byte *)((int)param_1 + 0x29) =
         ((byte)((uint)*(undefined4 *)(param_2 + 0x38) >> 0x18) & 0xc) >> 2;
  }
  bVar1 = false;
  if (ALBW_AS_F32(param_1[6]) == DAT_004f5468) {
    bVar1 = ALBW_AS_F32(param_1[8]) == DAT_004f5468;
  }
  if (bVar1) {
    param_1[6] = *param_3;
    param_1[7] = param_3[1];
    param_1[8] = param_3[2];
  }
  return (undefined4)param_1;
}

