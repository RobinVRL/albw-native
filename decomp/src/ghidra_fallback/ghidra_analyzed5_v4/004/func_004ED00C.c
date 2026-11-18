#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010DB90(void);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_004ed0dc;
extern undefined4 DAT_004ed0e0;
extern int *DAT_004ed0e4;
extern int *DAT_004ed0e8;
extern undefined8 *DAT_004ed0ec;
extern undefined4 DAT_004ed0f0;
extern undefined4 DAT_004ed0f4;

// USA 004ED00C <- EU 004ECFE4 (Ghidra, non-matching)
// GLOBAL DAT_004ed0dc undefined4
// GLOBAL DAT_004ed0e0 undefined4
// GLOBAL DAT_004ed0e4 int *
// GLOBAL DAT_004ed0e8 int *
// GLOBAL DAT_004ed0ec undefined8 *
// GLOBAL DAT_004ed0f0 undefined4
// GLOBAL DAT_004ed0f4 undefined4

undefined4 * func_004ED00C(undefined4 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  *param_1 = DAT_004ed0dc;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xb1] = 0;
  func_0010E3C4(param_1 + 1,param_2,0x2c4);
  uVar2 = func_0010DB90();
  param_1[0xb2] = uVar2;
  iVar3 = *DAT_004ed0e4;
  param_1[0xb3] = *(undefined4 *)(iVar3 + 0x3dbd4);
  param_1[0xb4] = *param_2;
  *(char *)(param_1 + 0xb5) = (char)*(undefined2 *)(*DAT_004ed0e8 + 0x6a);
  puVar1 = DAT_004ed0ec;
  *(undefined1 *)((int)param_1 + 0x2d5) = *(undefined1 *)(iVar3 + 0x3dbd8);
  *(undefined1 *)((int)param_1 + 0x2d6) = 0;
  *(undefined1 *)((int)param_1 + 0x2d7) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  uVar6 = *puVar1;
  puVar4 = func_0010CE7C(param_1 + 0xb9);
  *puVar4 = DAT_004ed0f0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = puVar4;
  puVar4[7] = 0;
  puVar5 = puVar4 + 9;
  puVar4[8] = 0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4[10] = param_1;
    uVar2 = DAT_004ed0f4;
    puVar4[0xb] = (int)uVar6;
    puVar4[0xc] = (int)((ulonglong)uVar6 >> 0x20);
    *puVar5 = uVar2;
  }
  puVar4[8] = puVar5;
  return puVar4 + -0xb9;
}

