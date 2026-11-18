#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined4 DAT_0016a4e8;
extern undefined4 DAT_0016a4ec;
extern undefined *DAT_0016a4f0;
extern undefined *DAT_0016a4f4;

// USA 0016A2FC <- EU 0016A2FC (Ghidra, non-matching)
// GLOBAL DAT_0016a4e8 undefined4
// GLOBAL DAT_0016a4ec undefined4
// GLOBAL DAT_0016a4f0 undefined *
// GLOBAL DAT_0016a4f4 undefined *

undefined4 * func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 3;
  param_1[0xb] = 0;
  if (param_1 + 0xc != (undefined4 *)0x0) {
    param_1[0xb] = param_1 + 0xc;
  }
  param_1[0x1e] = 10;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((int)param_1 + 0x85) = 0;
  uVar1 = DAT_0016a4ec;
  param_1[0x22] = DAT_0016a4e8;
  param_1[0x23] = uVar1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  iVar2 = func_0010BA78(param_4 * 0x28);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = func_00100118(iVar2,DAT_0016a4f0,0x28,param_4);
  }
  if ((0 < param_4) && (iVar3 != 0)) {
    param_1[5] = iVar3;
    param_1[4] = param_4;
    param_1[3] = 0;
  }
  iVar2 = func_0010BA78(param_4 * 0x28);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = func_00100118(iVar2,DAT_0016a4f0,0x28,param_4);
  }
  if ((0 < param_4) && (iVar3 != 0)) {
    param_1[8] = iVar3;
    param_1[7] = param_4;
    param_1[6] = 0;
  }
  iVar3 = param_4 * 2;
  if (0 < iVar3) {
    iVar4 = func_0010CEE0(param_4 * 0x28,(int *)0x0,4);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = func_00100118(iVar4,DAT_0016a4f4,0x14,iVar3);
    }
    if (iVar2 != 0) {
      param_1[0x25] = iVar2;
      param_1[0x24] = iVar3;
    }
  }
  if ((0 < param_2) && (iVar3 = func_0010CEE0(param_2 << 2,(int *)0x0,4), iVar3 != 0)) {
    param_1[2] = iVar3;
    param_1[1] = param_2;
  }
  uVar7 = param_1[1];
  if (0 < (int)uVar7) {
    uVar5 = uVar7 & 1;
    if (uVar5 == 1) {
      *(undefined4 *)param_1[2] = 0;
    }
    uVar6 = (uint)(uVar5 == 1);
    for (; (int)uVar5 < (int)uVar7; uVar5 = uVar5 + 2) {
      *(undefined4 *)(param_1[2] + uVar6 * 4) = 0;
      *(undefined4 *)(param_1[2] + (uVar6 + 1) * 4) = 0;
      uVar6 = uVar6 + 2;
    }
  }
  return param_1;
}

