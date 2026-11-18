#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern undefined8 func_00300720(uint *param_1,uint *param_2,undefined4 param_3);
extern undefined8 func_00300750(uint *param_1,uint *param_2,undefined4 param_3);
extern int DAT_00100654;

// GLOBAL DAT_00100654 int
// USA 00100584 <- EU 00100584 (Ghidra, function missing from the decomp table)

void func_00100584(undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined8 *)(albw_frame + 0x8))
  #define iStack_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(undefined8 *)(albw_frame + 0x14))
  #define iStack_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(uint *)(albw_frame + 0x20))
  #define local_2c (*(uint *)(albw_frame + 0x24))
  #define local_28 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(uint *)(albw_frame + 0x2c))
  #define local_20 (*(undefined8 * *)(albw_frame + 0x30))
  #define iStack_1c (*(int *)(albw_frame + 0x34))
  #define iStack_18 (*(int *)(albw_frame + 0x38))
  local_48 = *(undefined8 *)(DAT_00100654 + 0x10060c);
  iStack_40 = *(int *)(DAT_00100654 + 0x100614);
  local_3c = *(undefined8 *)(DAT_00100654 + 0x100618);
  iStack_34 = *(int *)(DAT_00100654 + 0x100620);
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  lVar8 = func_001104E4(param_2 + 0x1b9b,0x37);
  uVar4 = (int)lVar8 - 0x80;
  uVar3 = (int)((ulonglong)lVar8 >> 0x20) - 0x1b;
  bVar7 = (int)uVar3 < 0;
  if (bVar7) {
    uVar3 = -uVar3;
  }
  local_24 = (uint)bVar7;
  iVar5 = 0;
  for (; uVar3 != 0; uVar3 = (int)uVar3 >> 1) {
    if ((uVar3 & 1) != 0) {
      iVar6 = param_3;
      local_48 = func_00300750((uint *)&local_48,(uint *)(iVar5 * 0xc + DAT_00100654 + 0x100590),
                               param_3);
      iStack_40 = iVar6;
    }
    iVar5 = iVar5 + 1;
  }
  iVar6 = DAT_00100654 + 0x1005cc;
  iVar5 = 0;
  for (; uVar4 != 0; uVar4 = (int)uVar4 >> 1) {
    if ((uVar4 & 1) != 0) {
      puVar1 = (uint *)(iVar5 * 0x10 + iVar6);
      local_30 = *puVar1;
      local_2c = puVar1[1];
      local_28 = puVar1[2];
      if (puVar1[3] + param_3 == 0) {
        local_28 = local_28 + param_3;
      }
      iVar2 = param_3;
      local_3c = func_00300750((uint *)&local_3c,&local_30,param_3);
      iStack_34 = iVar2;
    }
    iVar5 = iVar5 + 1;
  }
  if (local_24 == 0) {
    uVar9 = func_00300750((uint *)&local_3c,(uint *)&local_48,param_3);
  }
  else {
    uVar9 = func_00300720((uint *)&local_3c,(uint *)&local_48,param_3);
  }
  *local_20 = uVar9;
  *(int *)(local_20 + 1) = param_3;
  return;
}

