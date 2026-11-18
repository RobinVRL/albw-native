#include "ghidra_types.h"

extern int func_002E0180(undefined4 *param_1,uint param_2);
extern int func_00325094(undefined4 *param_1,int param_2);
extern undefined4 DAT_0019b5d8;
extern undefined4 DAT_0019b5dc;
extern int DAT_0019b5e0;
extern int *DAT_0019b5e4;
extern undefined4 *DAT_0019b5e8;

// USA 0019B51C <- EU 0019B51C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0019b5d8 undefined4
// GLOBAL DAT_0019b5dc undefined4
// GLOBAL DAT_0019b5e0 int
// GLOBAL DAT_0019b5e4 int *
// GLOBAL DAT_0019b5e8 undefined4 *

int func_0019B51C(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5
                 ,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_20 ((undefined4 *)(albw_frame + 0x0))
  *param_1 = DAT_0019b5d8;
  uVar1 = DAT_0019b5dc;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = uVar1;
  if (param_7 == 0) {
    param_7 = DAT_0019b5e0;
  }
  param_1[4] = *(undefined4 *)(param_4 + 4);
  param_1[5] = param_7;
  func_002E0180(auStack_20,param_3);
  iVar2 = func_00325094(param_1 + 6,(int)auStack_20);
  iVar6 = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)(iVar2 + 0x1b0 + iVar6 * 4) = 0;
    iVar3 = iVar3 + 2;
    *(undefined4 *)(iVar2 + 0x1b0 + (iVar6 + 1) * 4) = 0;
    iVar6 = iVar6 + 2;
  } while (iVar3 < 0x20);
  piVar4 = DAT_0019b5e4;
  if (param_3 < 0x280) {
    piVar4 = DAT_0019b5e4 + param_3;
  }
  *piVar4 = iVar2 + -0x18;
  puVar5 = DAT_0019b5e8;
  if (param_3 < 0x280) {
    puVar5 = DAT_0019b5e8 + param_3;
  }
  *puVar5 = param_5;
  return iVar2 + -0x18;
}

