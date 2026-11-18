#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined4 DAT_00325104;
extern undefined4 DAT_00325108;
extern undefined4 DAT_0032510c;
extern undefined4 DAT_00325110;
extern undefined *DAT_00325114;
extern undefined *DAT_00325118;
extern undefined *DAT_0032511c;

// USA 00325094 <- EU 00325070 (Ghidra, non-matching)
// GLOBAL DAT_00325104 undefined4
// GLOBAL DAT_00325108 undefined4
// GLOBAL DAT_0032510c undefined4
// GLOBAL DAT_00325110 undefined4
// GLOBAL DAT_00325114 undefined *
// GLOBAL DAT_00325118 undefined *
// GLOBAL DAT_0032511c undefined *

int func_00325094(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *param_1 = DAT_00325104;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined1 *)((int)param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 4;
  uVar2 = DAT_00325110;
  uVar1 = DAT_0032510c;
  param_1[5] = DAT_00325108;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  iVar3 = func_00100118((int)(param_1 + 8),DAT_00325114,0x10,4);
  iVar3 = func_00100118(iVar3 + 0x40,DAT_00325118,0x1c,4);
  iVar3 = func_00100118(iVar3 + 0x70,DAT_0032511c,0x38,4);
  return iVar3 + -0xd0;
}

