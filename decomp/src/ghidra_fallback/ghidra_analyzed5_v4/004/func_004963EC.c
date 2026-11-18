#include "ghidra_types.h"

extern undefined4 *DAT_004964a4;
extern undefined4 DAT_004964a8;

// USA 004963EC <- EU 004963C4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_004964a4 undefined4 *
// GLOBAL DAT_004964a8 undefined4

void func_004963EC(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                  undefined4 param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = DAT_004964a8;
  puVar1 = DAT_004964a4;
  if ((param_5 == 0) || ((param_5 != 2 && param_5 != 3) && param_5 != 4)) {
    iVar4 = 4;
  }
  else {
    iVar4 = 2;
  }
  uVar2 = (**(code **)(*(int *)*DAT_004964a4 + 8))
                    ((int *)*DAT_004964a4,param_4,DAT_004964a8,0,iVar4 * param_2 * param_3);
  *param_1 = uVar2;
  *(char *)(param_1 + 1) = (char)param_5;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[2] = param_2;
  param_1[3] = param_3;
  if (param_7 == 0) {
    iVar4 = 2;
  }
  else if (param_7 == 2) {
    iVar4 = 3;
  }
  else {
    iVar4 = 4;
  }
  uVar3 = (**(code **)(*(int *)*puVar1 + 8))
                    ((int *)*puVar1,param_6,uVar3,0,iVar4 * param_2 * param_3);
  param_1[9] = uVar3;
  *(char *)(param_1 + 10) = (char)param_7;
  param_1[0xb] = param_2;
  param_1[0xc] = param_3;
  param_1[0x10] = param_2;
  param_1[0x11] = param_3;
  return;
}

