#include "ghidra_types.h"

extern int func_00104164(undefined4 *param_1,int param_2);
extern int func_001080D4(int *param_1);
extern undefined4 DAT_00419624;
extern undefined4 DAT_00419628;
extern undefined4 DAT_0041962c;

// USA 004195B4 <- EU 00419594 (Ghidra, non-matching)
// GLOBAL DAT_00419624 undefined4
// GLOBAL DAT_00419628 undefined4
// GLOBAL DAT_0041962c undefined4

undefined4 * func_004195B4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *param_1 = DAT_00419624;
  param_1[1] = 0;
  param_1[2] = 0;
  func_00104164(param_1 + 1,1);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  uVar1 = DAT_00419628;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  uVar2 = DAT_0041962c;
  param_1[5] = uVar1;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar2;
  param_1[9] = uVar2;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  param_1[10] = uVar2;
  param_1[0xc] = uVar2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar2;
  func_001080D4(param_1 + 1);
  return param_1;
}

