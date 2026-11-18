#include "ghidra_types.h"

extern undefined4 DAT_0037c520;
extern undefined4 *DAT_0037c524;
extern undefined4 DAT_0037c528;

// USA 0037C4E0 <- EU 0037C4BC (Ghidra, non-matching)
// GLOBAL DAT_0037c520 undefined4
// GLOBAL DAT_0037c524 undefined4 *
// GLOBAL DAT_0037c528 undefined4

undefined4 * func_0037C4E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = DAT_0037c520;
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar2 = DAT_0037c524;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  uVar3 = DAT_0037c528;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  param_1[5] = *puVar2;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  return param_1;
}

