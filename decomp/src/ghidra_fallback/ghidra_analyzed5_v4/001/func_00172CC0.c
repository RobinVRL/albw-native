#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern float DAT_00173058;
extern float DAT_0017305c;
extern float DAT_00173060;
extern float DAT_00173064;
extern float DAT_00173068;
extern float *DAT_0017306c;

// USA 00172CC0 <- EU 00172CC0 (Ghidra, non-matching)
// GLOBAL DAT_00173058 float
// GLOBAL DAT_0017305c float
// GLOBAL DAT_00173060 float
// GLOBAL DAT_00173064 float
// GLOBAL DAT_00173068 float
// GLOBAL DAT_0017306c float *

undefined4 func_00172CC0(int param_1)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_38 (*(undefined4 *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x60))
  fVar9 = DAT_00173068;
  fVar7 = DAT_00173064;
  fVar8 = DAT_0017305c;
  fVar10 = DAT_00173058;
  if (*(int *)(*(int *)(param_1 + 0x440) + 0x14) == 0) goto LAB_001730c4;
  local_88 = DAT_00173058;
  local_84 = DAT_0017305c;
  local_80 = DAT_0017305c;
  local_7c = DAT_0017305c;
  local_78 = DAT_00173058;
  local_74 = DAT_0017305c;
  local_70 = DAT_0017305c;
  local_6c = DAT_0017305c;
  local_68 = DAT_00173058;
  local_38 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_30 = *(undefined4 *)(param_1 + 0x3d8);
  local_34 = *(float *)(param_1 + 0x3d4) + (DAT_00173060 - *(float *)(param_1 + 0x444));
  iVar3 = *(int *)(*(int *)(param_1 + 0x440) + 0x14);
  fVar6 = DAT_00173058 - *(float *)(iVar3 + 0x18);
  bVar4 = DAT_00173068 == fVar6;
  bVar5 = fVar6 <= DAT_00173068;
  if (!bVar5 || bVar4) {
    bVar4 = fVar6 == DAT_00173064;
    bVar5 = DAT_00173064 <= fVar6;
  }
  if (bVar5 && !bVar4) {
LAB_00172e94:
    bVar4 = false;
  }
  else {
    fVar6 = DAT_0017305c - *(float *)(iVar3 + 0x1c);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    fVar6 = DAT_0017305c - *(float *)(iVar3 + 0x20);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    fVar6 = DAT_0017305c - *(float *)(iVar3 + 0x24);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    fVar6 = DAT_00173058 - *(float *)(iVar3 + 0x28);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    fVar6 = DAT_0017305c - *(float *)(iVar3 + 0x2c);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    fVar6 = DAT_0017305c - *(float *)(iVar3 + 0x30);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    fVar6 = DAT_0017305c - *(float *)(iVar3 + 0x34);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    fVar6 = DAT_00173058 - *(float *)(iVar3 + 0x38);
    bVar4 = DAT_00173068 == fVar6;
    bVar5 = fVar6 <= DAT_00173068;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == DAT_00173064;
      bVar5 = DAT_00173064 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172e94;
    bVar4 = true;
  }
  if (!bVar4) {
    bVar2 = *(byte *)(iVar3 + 0xa8);
    *(byte *)(iVar3 + 0xa8) = bVar2 | 8;
    if (fVar10 == 1.0) {
      *(undefined4 *)(iVar3 + 0x18) = 0x3f800000;
      *(float *)(iVar3 + 0x1c) = fVar8;
      *(float *)(iVar3 + 0x20) = fVar8;
      *(float *)(iVar3 + 0x24) = fVar8;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      *(float *)(iVar3 + 0x2c) = fVar8;
      *(float *)(iVar3 + 0x30) = fVar8;
      *(float *)(iVar3 + 0x34) = fVar8;
      *(undefined4 *)(iVar3 + 0x38) = 0x3f800000;
      bVar2 = bVar2 & 0xfb | 8;
    }
    else {
      func_001151CC((undefined4 *)(iVar3 + 0x18),&local_88);
      bVar2 = *(byte *)(iVar3 + 0xa8) | 4;
    }
    *(byte *)(iVar3 + 0xa8) = bVar2;
  }
  func_0043625C(*(int **)(*(int *)(param_1 + 0x440) + 0x14),&local_38);
  pfVar1 = DAT_0017306c;
  iVar3 = *(int *)(*(int *)(param_1 + 0x440) + 0x14);
  fVar6 = *(float *)(param_1 + 0x14) - *(float *)(iVar3 + 4);
  bVar4 = fVar9 == fVar6;
  bVar5 = fVar6 <= fVar9;
  if (!bVar5 || bVar4) {
    bVar4 = fVar6 == fVar7;
    bVar5 = fVar7 <= fVar6;
  }
  if (bVar5 && !bVar4) {
LAB_00172fb0:
    bVar4 = false;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x18) - *(float *)(iVar3 + 8);
    bVar4 = fVar9 == fVar6;
    bVar5 = fVar6 <= fVar9;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == fVar7;
      bVar5 = fVar7 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172fb0;
    fVar6 = *(float *)(param_1 + 0x1c) - *(float *)(iVar3 + 0xc);
    bVar4 = fVar9 == fVar6;
    bVar5 = fVar6 <= fVar9;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == fVar7;
      bVar5 = fVar7 <= fVar6;
    }
    if (bVar5 && !bVar4) goto LAB_00172fb0;
    bVar4 = true;
  }
  if (!bVar4) {
    *(byte *)(iVar3 + 0xa8) = *(byte *)(iVar3 + 0xa8) | 8;
    fVar6 = *(float *)(param_1 + 0x14) - *pfVar1;
    bVar4 = fVar9 == fVar6;
    bVar5 = fVar6 <= fVar9;
    if (!bVar5 || bVar4) {
      bVar4 = fVar6 == fVar7;
      bVar5 = fVar7 <= fVar6;
    }
    if (bVar5 && !bVar4) {
LAB_0017309c:
      *(float *)(iVar3 + 4) = *(float *)(param_1 + 0x14);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1c);
      bVar2 = *(byte *)(iVar3 + 0xa8) | 2;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x18) - pfVar1[1];
      bVar4 = fVar9 == fVar6;
      bVar5 = fVar6 <= fVar9;
      if (!bVar5 || bVar4) {
        bVar4 = fVar6 == fVar7;
        bVar5 = fVar7 <= fVar6;
      }
      if (bVar5 && !bVar4) goto LAB_0017309c;
      fVar6 = *(float *)(param_1 + 0x1c) - pfVar1[2];
      bVar4 = fVar9 == fVar6;
      bVar5 = fVar6 <= fVar9;
      if (!bVar5 || bVar4) {
        bVar4 = fVar6 == fVar7;
        bVar5 = fVar7 <= fVar6;
      }
      if (bVar5 && !bVar4) goto LAB_0017309c;
      *(float *)(iVar3 + 4) = *pfVar1;
      *(float *)(iVar3 + 8) = pfVar1[1];
      *(float *)(iVar3 + 0xc) = pfVar1[2];
      bVar2 = *(byte *)(iVar3 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar3 + 0xa8) = bVar2;
  }
  func_004ED9C8(*(int *)(param_1 + 0x440));
LAB_001730c4:
  iVar3 = *(int *)(param_1 + 0x43c);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(float *)(iVar3 + 0x80) = fVar10;
  *(float *)(iVar3 + 0x84) = fVar8;
  *(float *)(iVar3 + 0x88) = fVar8;
  *(float *)(iVar3 + 0x90) = fVar8;
  *(float *)(iVar3 + 0x94) = fVar10;
  *(float *)(iVar3 + 0x98) = fVar8;
  *(float *)(iVar3 + 0xa0) = fVar8;
  *(float *)(iVar3 + 0xa4) = fVar8;
  *(float *)(iVar3 + 0xa8) = fVar10;
  *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  return func_004CEAF0(*(int *)(param_1 + 0x43c));
}

