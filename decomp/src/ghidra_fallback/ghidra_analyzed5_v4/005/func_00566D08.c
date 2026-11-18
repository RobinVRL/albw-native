#include "ghidra_types.h"

extern int func_003FB500(uint *param_1,int *param_2,uint param_3,int param_4,...);
extern uint DAT_00566dfc;

// USA 00566D08 <- EU 00566CE0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00566dfc uint

void func_00566D08(uint *param_1,int param_2,uint *param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(uint *)(albw_frame + 0x14))
  local_24 = *(int *)(param_5 + 0x10) + param_4;
  local_28 = param_4;
  func_003FB500(&local_20,(int *)&local_28,*(uint *)(param_5 + 0x54),4);
  param_3[1] = local_1c >> 3;
  *param_3 = local_20;
  uVar4 = 0;
  uVar2 = 0;
  if (local_1c >> 3 != 0) {
    do {
      puVar1 = (undefined4 *)(*param_3 + uVar4 * 8);
      uVar4 = uVar4 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      uVar2 = param_3[1];
    } while (uVar4 < uVar2);
  }
  uVar4 = DAT_00566dfc;
  puVar5 = (uint *)*param_3;
  iVar7 = 0;
  puVar8 = puVar5 + uVar2 * 2;
  for (; puVar5 != puVar8; puVar5 = puVar5 + 2) {
    uVar6 = iVar7 * 7;
    uVar2 = *(int *)(*(int *)(param_2 + 0x68) + iVar7 * 0x1c + 4) * 0x18;
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = local_28 + 3 & 0xfffffffc;
      uVar6 = uVar3 + uVar2;
      local_28 = uVar6;
    }
    *puVar5 = uVar3;
    uVar3 = 0;
    uVar2 = (uint)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x24);
    if (uVar2 != 0) {
      uVar6 = uVar2;
    }
    puVar5[1] = uVar2;
    if (uVar2 != 0) {
      do {
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
    iVar7 = iVar7 + 1;
  }
  *param_1 = local_28;
  param_1[1] = 0;
  return;
}

