#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_004a21bc;
extern undefined *DAT_004a21c0;

// USA 004A210C <- EU 004A20E4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_004a21bc undefined4
// GLOBAL DAT_004a21c0 undefined *

undefined4 *
func_004A210C(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x12] = param_1 + 0x11;
  param_1[0x15] = 0;
  param_1[0x11] = param_1 + 0x11;
  param_1[0x16] = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = *(undefined4 *)(param_2 + 4);
  param_1[5] = *(undefined4 *)(param_2 + 8);
  param_1[6] = *(undefined4 *)(param_2 + 8);
  param_1[7] = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  iVar3 = *(int *)(param_2 + 0x10);
  param_1[8] = iVar3;
  if (iVar3 == 0) {
    param_1[8] = DAT_004a21bc;
  }
  iVar3 = *(int *)(param_2 + 0x14);
  param_1[0xf] = iVar3;
  if ((0 < iVar3) && (iVar2 = func_0010CEE0(iVar3 * 0xc,param_5,4), iVar1 = 0, iVar2 != 0)) {
    iVar1 = func_00100118(iVar2,DAT_004a21c0,0xc,iVar3);
  }
  param_1[0xe] = iVar1;
  param_1[0x14] = 0;
  param_1[9] = 0xffffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  return param_1;
}

