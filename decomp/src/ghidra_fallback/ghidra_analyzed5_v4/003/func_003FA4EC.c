#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_003FB500(uint *param_1,int *param_2,uint param_3,int param_4,...);
extern undefined *DAT_003fa654;

// USA 003FA4EC <- EU 003FA4CC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_003fa654 undefined *

void func_003FA4EC(uint *param_1,int param_2,uint param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(uint *)(albw_frame + 0x10))
  #define uStack_1c (*(uint *)(albw_frame + 0x14))
  uVar1 = param_4 + 0xfU & 0xfffffff0;
  param_1[0x14] = uVar1;
  local_24 = param_2 + param_3 * 0x448 + uVar1 * 4;
  iVar4 = param_3 * 0xd0 + uVar1;
  iVar2 = 0;
  local_28 = param_2;
  do {
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_28 + 3U & 0xfffffffc;
      local_28 = uVar1 + iVar4;
    }
    param_1[iVar2 * 8 + 4] = uVar1;
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_28 + 3U & 0xfffffffc;
      local_28 = uVar1 + iVar4;
    }
    iVar6 = iVar2 + 1;
    param_1[iVar2 * 8 + 5] = uVar1;
    iVar2 = iVar6;
  } while (iVar6 < 2);
  func_003FB500(&local_20,&local_28,param_3 << 8,4);
  uVar1 = 0;
  *param_1 = local_20;
  param_1[1] = uStack_1c >> 8;
  if (uStack_1c >> 8 != 0) {
    do {
      iVar2 = *param_1 + uVar1 * 0x100;
      if (iVar2 != 0) {
        func_00100118(iVar2,DAT_003fa654,0x20,8);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1[1]);
  }
  iVar2 = 0;
  do {
    puVar3 = param_1 + iVar2 * 8 + 2;
    if (param_3 * 4 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = local_28 + 3U & 0xfffffffc;
      local_28 = uVar1 + param_3 * 4;
    }
    *puVar3 = uVar1;
    puVar3[1] = param_3 & 0x3fffffff;
    uVar1 = 0;
    if ((param_3 & 0x3fffffff) != 0) {
      do {
        puVar5 = (undefined2 *)(*puVar3 + uVar1 * 4);
        uVar1 = uVar1 + 1;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
      } while (uVar1 < puVar3[1]);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  *(undefined1 *)(param_1 + 0x13) = param_5;
  return;
}

