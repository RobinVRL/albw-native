#include "ghidra_types.h"

extern int func_003FB500(uint *param_1,int *param_2,uint param_3,int param_4,...);
extern uint DAT_00566f44;

// USA 00566E28 <- EU 00566E00 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00566f44 uint

void func_00566E28(int *param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(uint *)(albw_frame + 0x14))
  local_24 = *(int *)(param_5 + 0x14) + param_4;
  local_28 = param_4;
  func_003FB500(&local_20,&local_28,*(uint *)(param_5 + 0x5c),4);
  uVar2 = (uint)((ulonglong)local_1c * (ulonglong)DAT_00566f44 >> 0x23);
  *param_3 = local_20;
  param_3[1] = uVar2;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      puVar3 = (undefined4 *)(*param_3 + uVar1 * 0xc);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3[1]);
  }
  puVar4 = (uint *)*param_3;
  iVar7 = 0;
  puVar6 = puVar4 + param_3[1] * 3;
  for (; puVar4 != puVar6; puVar4 = puVar4 + 3) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x68) + iVar7 * 0x1c + 0x14);
    uVar1 = uVar2 >> 1 & 0xff;
    if ((uVar2 & 1) != 0) {
      uVar1 = uVar1 + 1;
    }
    uVar1 = (uVar1 << 0x18) >> 0x15;
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = local_28 + 3U & 0xfffffffc;
      local_28 = uVar1 + uVar5;
    }
    uVar1 = uVar2 >> 1 & 0xff;
    if ((uVar2 & 1) != 0) {
      uVar1 = uVar1 + 1;
    }
    *puVar4 = uVar5;
    puVar4[1] = uVar1 & 0xff;
    for (uVar2 = 0; uVar2 < (uVar1 & 0xff); uVar2 = uVar2 + 1) {
    }
    iVar7 = iVar7 + 1;
  }
  *param_1 = local_28;
  param_1[1] = 0;
  return;
}

