#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_00151358(int *param_1);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004ED9C8(int param_1);
extern int func_0058A4A8(int param_1);
extern int func_0068C690(float *param_1);
extern float *DAT_002a51e4;
extern float *DAT_002a51e8;
extern float DAT_002a51ec;
extern float DAT_002a51f0;
extern undefined4 DAT_002a51f4;
extern float DAT_002a51f8;
extern float *DAT_002a51fc;
extern float *DAT_002a5200;
extern float *DAT_002a5204;
extern int *DAT_002a5208;
extern float DAT_002a520c;
extern float *DAT_002a5210;
extern int *DAT_002a5214;

// USA 002A4DF4 <- EU 002A4DD0 (Ghidra, non-matching)
// GLOBAL DAT_002a51e4 float *
// GLOBAL DAT_002a51e8 float *
// GLOBAL DAT_002a51ec float
// GLOBAL DAT_002a51f0 float
// GLOBAL DAT_002a51f4 undefined4
// GLOBAL DAT_002a51f8 float
// GLOBAL DAT_002a51fc float *
// GLOBAL DAT_002a5200 float *
// GLOBAL DAT_002a5204 float *
// GLOBAL DAT_002a5208 int *
// GLOBAL DAT_002a520c float
// GLOBAL DAT_002a5210 float *
// GLOBAL DAT_002a5214 int *

undefined4 func_002A4DF4(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define afStack_60 ((float *)(albw_frame + 0x30))
  #define afStack_3c ((float *)(albw_frame + 0x54))
  #define afStack_30 ((float *)(albw_frame + 0x60))
  if ((*(char *)(param_1 + 0xb96) != '\0') || (*(char *)(param_1 + 0x9e4) == '\x12')) {
    return func_00151148(*(int *)(param_1 + 0xa1c),0);
  }
  local_90 = *DAT_002a51e4;
  local_8c = DAT_002a51e4[1];
  local_88 = DAT_002a51e4[2];
  pfVar3 = (float *)(param_1 + 0xa6c);
  func_00115CA8(pfVar3,(float *)(*(int *)(param_1 + 0xa10) + 0x104),DAT_002a51e8);
  func_001151D8(&local_84,(undefined4 *)(*(int *)(param_1 + 0xa10) + 0x104));
  uVar1 = DAT_002a51f4;
  iVar6 = *(int *)(*(int *)(param_1 + 0xa18) + 0x14);
  fVar9 = local_84 - *(float *)(iVar6 + 0x18);
  bVar7 = DAT_002a51f0 == fVar9;
  bVar8 = fVar9 <= DAT_002a51f0;
  if (!bVar8 || bVar7) {
    bVar7 = fVar9 == DAT_002a51ec;
    bVar8 = DAT_002a51ec <= fVar9;
  }
  if (!bVar8 || bVar7) {
    fVar9 = local_80 - *(float *)(iVar6 + 0x1c);
    bVar7 = DAT_002a51f0 == fVar9;
    bVar8 = fVar9 <= DAT_002a51f0;
    if (!bVar8 || bVar7) {
      bVar7 = fVar9 == DAT_002a51ec;
      bVar8 = DAT_002a51ec <= fVar9;
    }
    if (!bVar8 || bVar7) {
      fVar9 = local_7c - *(float *)(iVar6 + 0x20);
      bVar7 = DAT_002a51f0 == fVar9;
      bVar8 = fVar9 <= DAT_002a51f0;
      if (!bVar8 || bVar7) {
        bVar7 = fVar9 == DAT_002a51ec;
        bVar8 = DAT_002a51ec <= fVar9;
      }
      if (!bVar8 || bVar7) {
        fVar9 = local_78 - *(float *)(iVar6 + 0x24);
        bVar7 = DAT_002a51f0 == fVar9;
        bVar8 = fVar9 <= DAT_002a51f0;
        if (!bVar8 || bVar7) {
          bVar7 = fVar9 == DAT_002a51ec;
          bVar8 = DAT_002a51ec <= fVar9;
        }
        if (!bVar8 || bVar7) {
          fVar9 = local_74 - *(float *)(iVar6 + 0x28);
          bVar7 = DAT_002a51f0 == fVar9;
          bVar8 = fVar9 <= DAT_002a51f0;
          if (!bVar8 || bVar7) {
            bVar7 = fVar9 == DAT_002a51ec;
            bVar8 = DAT_002a51ec <= fVar9;
          }
          if (!bVar8 || bVar7) {
            fVar9 = local_70 - *(float *)(iVar6 + 0x2c);
            bVar7 = DAT_002a51f0 == fVar9;
            bVar8 = fVar9 <= DAT_002a51f0;
            if (!bVar8 || bVar7) {
              bVar7 = fVar9 == DAT_002a51ec;
              bVar8 = DAT_002a51ec <= fVar9;
            }
            if (!bVar8 || bVar7) {
              fVar9 = local_6c - *(float *)(iVar6 + 0x30);
              bVar7 = DAT_002a51f0 == fVar9;
              bVar8 = fVar9 <= DAT_002a51f0;
              if (!bVar8 || bVar7) {
                bVar7 = fVar9 == DAT_002a51ec;
                bVar8 = DAT_002a51ec <= fVar9;
              }
              if (!bVar8 || bVar7) {
                fVar9 = local_68 - *(float *)(iVar6 + 0x34);
                bVar7 = DAT_002a51f0 == fVar9;
                bVar8 = fVar9 <= DAT_002a51f0;
                if (!bVar8 || bVar7) {
                  bVar7 = fVar9 == DAT_002a51ec;
                  bVar8 = DAT_002a51ec <= fVar9;
                }
                if (!bVar8 || bVar7) {
                  fVar9 = local_64 - *(float *)(iVar6 + 0x38);
                  bVar7 = DAT_002a51f0 == fVar9;
                  bVar8 = fVar9 <= DAT_002a51f0;
                  if (!bVar8 || bVar7) {
                    bVar7 = fVar9 == DAT_002a51ec;
                    bVar8 = DAT_002a51ec <= fVar9;
                  }
                  if (!bVar8 || bVar7) {
                    bVar7 = true;
                    goto LAB_002a4fa0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar7 = false;
LAB_002a4fa0:
  if (!bVar7) {
    bVar2 = *(byte *)(iVar6 + 0xa8);
    *(byte *)(iVar6 + 0xa8) = bVar2 | 8;
    fVar9 = DAT_002a51f8;
    if ((((local_84 == 1.0) && (local_80 == DAT_002a51f8 && local_7c == DAT_002a51f8)) &&
        (local_78 == DAT_002a51f8 && local_74 == 1.0)) &&
       ((local_70 == DAT_002a51f8 && local_6c == DAT_002a51f8 &&
        (local_68 == DAT_002a51f8 && local_64 == 1.0)))) {
      *(undefined4 *)(iVar6 + 0x18) = uVar1;
      *(float *)(iVar6 + 0x1c) = fVar9;
      *(float *)(iVar6 + 0x20) = fVar9;
      bVar2 = bVar2 & 0xfb | 8;
      *(float *)(iVar6 + 0x24) = fVar9;
      *(undefined4 *)(iVar6 + 0x28) = uVar1;
      *(float *)(iVar6 + 0x2c) = fVar9;
      *(float *)(iVar6 + 0x30) = fVar9;
      *(float *)(iVar6 + 0x34) = fVar9;
      *(undefined4 *)(iVar6 + 0x38) = uVar1;
    }
    else {
      func_001151CC((undefined4 *)(iVar6 + 0x18),&local_84);
      bVar2 = *(byte *)(iVar6 + 0xa8) | 4;
    }
    *(byte *)(iVar6 + 0xa8) = bVar2;
  }
  func_0043625C(*(int **)(*(int *)(param_1 + 0xa18) + 0x14),pfVar3);
  func_004ED9C8(*(int *)(param_1 + 0xa18));
  (**(code **)(**(int **)(param_1 + 0xba0) + 4))(*(int **)(param_1 + 0xba0));
  func_001151CC((undefined4 *)(*(int *)(param_1 + 0xba0) + 0x2c),&local_84);
  iVar6 = *(int *)(param_1 + 0xba0);
  *(float *)(iVar6 + 0x84) = *pfVar3;
  *(undefined4 *)(iVar6 + 0x88) = *(undefined4 *)(param_1 + 0xa70);
  *(undefined4 *)(iVar6 + 0x8c) = *(undefined4 *)(param_1 + 0xa74);
  iVar6 = func_0058A4A8(param_1);
  pfVar3 = DAT_002a51fc;
  if (iVar6 != 0) {
    if (*(char *)(param_1 + 0x9e4) == '\0' || *(char *)(param_1 + 0x9e4) == '\x0e') {
      local_90 = *DAT_002a51fc;
      local_8c = DAT_002a51fc[1];
      local_88 = DAT_002a51fc[2];
      func_00115D70(&local_90,&local_90,*(float *)(param_1 + 0xb30));
      piVar4 = *(int **)(param_1 + 0xa1c);
      piVar4[4] = (int)ALBW_AS_U32(local_90);
      piVar4[5] = (int)ALBW_AS_U32(local_8c);
      piVar4[6] = (int)ALBW_AS_U32(local_88);
    }
    else {
      piVar4 = *(int **)(param_1 + 0xa1c);
      piVar4[4] = (int)ALBW_AS_U32(*DAT_002a51fc);
      piVar4[5] = (int)ALBW_AS_U32(pfVar3[1]);
      piVar4[6] = (int)ALBW_AS_U32(pfVar3[2]);
    }
    func_00151358(piVar4);
    func_00115CA8(afStack_30,(float *)(*(int *)(param_1 + 0xa10) + 0x104),DAT_002a5200);
    func_00115CA8(afStack_3c,(float *)(*(int *)(param_1 + 0xa10) + 0x104),DAT_002a5204);
    func_00115C70(&local_90,afStack_30,afStack_3c);
    iVar6 = func_0068C690(&local_90);
    func_00491624(afStack_60,0,iVar6 + *DAT_002a5208,0);
    func_00115D70(&local_90,&local_90,DAT_002a520c);
    func_00115C54(&local_90,&local_90,afStack_3c);
    func_0015133C(*(int *)(param_1 + 0xa1c),afStack_60);
    func_001512B4(*(int *)(param_1 + 0xa1c),&local_90);
  }
  piVar4 = *(int **)(param_1 + 0xaf8);
  local_90 = *(float *)(param_1 + 0xa6c);
  local_8c = *(float *)(param_1 + 0xa70);
  local_88 = *(float *)(param_1 + 0xa74);
  func_00115CA8(&local_90,(float *)(*(int *)(param_1 + 0xa10) + 0x104),DAT_002a5210);
  func_001151CC(piVar4 + 0x19,&local_84);
  iVar6 = DAT_002a5214[1];
  iVar5 = DAT_002a5214[2];
  piVar4[0x16] = *DAT_002a5214;
  piVar4[0x17] = iVar6;
  piVar4[0x18] = iVar5;
  piVar4[1] = (int)ALBW_AS_U32(local_90);
  piVar4[2] = (int)ALBW_AS_U32(local_8c);
  piVar4[3] = (int)ALBW_AS_U32(local_88);
  return func_004356B4(piVar4);
}

