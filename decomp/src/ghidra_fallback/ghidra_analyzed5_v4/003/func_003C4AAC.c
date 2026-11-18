#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int DAT_003c4c40;

// USA 003C4AAC <- EU 003C4A88 (Ghidra, non-matching)
// GLOBAL DAT_003c4c40 int

void func_003C4AAC(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  uVar2 = *param_1;
  uVar1 = ((int)*(char *)(param_2 + 8) + ((uint)((int)*(char *)(param_2 + 8) >> 0x1f) >> 0x1e)) *
          0x2000000 >> 0x1b;
  *param_1 = uVar2 & 0xffffffe0 | uVar1;
  uVar7 = ((int)*(char *)(param_2 + 9) & 3U) << 5;
  *param_1 = uVar2 & 0xffffff80 | uVar1 | uVar7;
  uVar10 = ((int)*(char *)(param_2 + 10) & 3U) << 7;
  *param_1 = uVar2 & 0xfffffe00 | uVar1 | uVar7 | uVar10;
  uVar9 = ((int)*(char *)(param_2 + 0xb) & 3U) << 9;
  *param_1 = uVar2 & 0xfffff800 | uVar1 | uVar7 | uVar10 | uVar9;
  uVar11 = (*(byte *)(param_2 + 0xc) & 3) << 0xb;
  *param_1 = uVar2 & 0xffffe000 | uVar1 | uVar7 | uVar10 | uVar9 | uVar11;
  uVar3 = (*(byte *)(param_2 + 0xd) & 3) << 0xd;
  *param_1 = uVar2 & 0xffff8000 | uVar1 | uVar7 | uVar10 | uVar9 | uVar11 | uVar3;
  uVar4 = (*(byte *)(param_2 + 0xe) & 0x1f) << 0xf;
  *param_1 = uVar2 & 0xfff00000 | uVar1 | uVar7 | uVar10 | uVar9 | uVar11 | uVar3 | uVar4;
  uVar5 = (*(byte *)(param_2 + 0xf) & 0x1f) << 0x14;
  *param_1 = uVar2 & 0xfe000000 | uVar1 | uVar7 | uVar10 | uVar9 | uVar11 | uVar3 | uVar4 | uVar5;
  uVar6 = (*(byte *)(param_2 + 2) & 1) << 0x19;
  *param_1 = uVar2 & 0xfc000000 | uVar1 | uVar7 | uVar10 | uVar9 | uVar11 | uVar3 | uVar4 | uVar5 |
             uVar6;
  *param_1 = uVar1 | uVar7 | uVar10 | uVar9 | uVar11 | uVar3 | uVar4 | uVar5 | uVar6 |
             (uint)*(byte *)(param_2 + 7) << 0x1a;
  local_28 = DAT_003c4c40;
  *(undefined2 *)(param_1 + 6) = 0;
  local_24 = (uint *)(param_2 + 0x10);
  (**(code **)(local_28 + 8))(&local_28);
  iVar8 = 0;
  do {
    if (*(short *)((int)local_24 + iVar8 * 2) == 0) {
      if (iVar8 < 0x40001) goto LAB_003c4bf0;
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x40001);
  iVar8 = 0;
LAB_003c4bf0:
  if (10 < iVar8) {
    iVar8 = 10;
  }
  (**(code **)(local_28 + 8))(&local_28);
  func_0010E3C4(param_1 + 1,local_24,iVar8 << 1);
  *(undefined2 *)((int)(param_1 + 1) + iVar8 * 2) = 0;
  uVar1 = *(uint *)(param_2 + 0x28);
  uVar2 = *(uint *)(param_2 + 0x2c);
  uVar3 = *(uint *)(param_2 + 0x30);
  uVar4 = *(uint *)(param_2 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x38);
  param_1[0xc] = *(uint *)(param_2 + 0x3c);
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  return;
}

