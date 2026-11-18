#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004ED9C8(int param_1);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern float DAT_00331388;
extern float DAT_0033138c;
extern int *DAT_00331390;
extern float DAT_00331394;
extern float DAT_00331398;

// USA 00331114 <- EU 003310F0 (Ghidra, non-matching)
// GLOBAL DAT_00331388 float
// GLOBAL DAT_0033138c float
// GLOBAL DAT_00331390 int *
// GLOBAL DAT_00331394 float
// GLOBAL DAT_00331398 float

undefined4 func_00331114(int param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  fVar7 = DAT_00331388;
  func_004D80A4(&fStack_24,0,DAT_00331388);
  local_20 = DAT_0033138c;
  fVar6 = DAT_0033138c;
  func_0051E5F8(*DAT_00331390,&local_48,&fStack_24,*(float *)(*(int *)(param_1 + 0x2d0) + 0x2c),
                *(float *)(*(int *)(param_1 + 0x2d0) + 0x30));
  iVar2 = *(int *)(*(int *)(param_1 + 0x410) + 0x14);
  fVar5 = local_48 - *(float *)(iVar2 + 0x18);
  bVar3 = DAT_00331398 == fVar5;
  bVar4 = fVar5 <= DAT_00331398;
  if (!bVar4 || bVar3) {
    bVar3 = fVar5 == DAT_00331394;
    bVar4 = DAT_00331394 <= fVar5;
  }
  if (!bVar4 || bVar3) {
    fVar5 = local_44 - *(float *)(iVar2 + 0x1c);
    bVar3 = DAT_00331398 == fVar5;
    bVar4 = fVar5 <= DAT_00331398;
    if (!bVar4 || bVar3) {
      bVar3 = fVar5 == DAT_00331394;
      bVar4 = DAT_00331394 <= fVar5;
    }
    if (!bVar4 || bVar3) {
      fVar5 = local_40 - *(float *)(iVar2 + 0x20);
      bVar3 = DAT_00331398 == fVar5;
      bVar4 = fVar5 <= DAT_00331398;
      if (!bVar4 || bVar3) {
        bVar3 = fVar5 == DAT_00331394;
        bVar4 = DAT_00331394 <= fVar5;
      }
      if (!bVar4 || bVar3) {
        fVar5 = local_3c - *(float *)(iVar2 + 0x24);
        bVar3 = DAT_00331398 == fVar5;
        bVar4 = fVar5 <= DAT_00331398;
        if (!bVar4 || bVar3) {
          bVar3 = fVar5 == DAT_00331394;
          bVar4 = DAT_00331394 <= fVar5;
        }
        if (!bVar4 || bVar3) {
          fVar5 = local_38 - *(float *)(iVar2 + 0x28);
          bVar3 = DAT_00331398 == fVar5;
          bVar4 = fVar5 <= DAT_00331398;
          if (!bVar4 || bVar3) {
            bVar3 = fVar5 == DAT_00331394;
            bVar4 = DAT_00331394 <= fVar5;
          }
          if (!bVar4 || bVar3) {
            fVar5 = local_34 - *(float *)(iVar2 + 0x2c);
            bVar3 = DAT_00331398 == fVar5;
            bVar4 = fVar5 <= DAT_00331398;
            if (!bVar4 || bVar3) {
              bVar3 = fVar5 == DAT_00331394;
              bVar4 = DAT_00331394 <= fVar5;
            }
            if (!bVar4 || bVar3) {
              fVar5 = local_30 - *(float *)(iVar2 + 0x30);
              bVar3 = DAT_00331398 == fVar5;
              bVar4 = fVar5 <= DAT_00331398;
              if (!bVar4 || bVar3) {
                bVar3 = fVar5 == DAT_00331394;
                bVar4 = DAT_00331394 <= fVar5;
              }
              if (!bVar4 || bVar3) {
                fVar5 = local_2c - *(float *)(iVar2 + 0x34);
                bVar3 = DAT_00331398 == fVar5;
                bVar4 = fVar5 <= DAT_00331398;
                if (!bVar4 || bVar3) {
                  bVar3 = fVar5 == DAT_00331394;
                  bVar4 = DAT_00331394 <= fVar5;
                }
                if (!bVar4 || bVar3) {
                  fVar5 = local_28 - *(float *)(iVar2 + 0x38);
                  bVar3 = DAT_00331398 == fVar5;
                  bVar4 = fVar5 <= DAT_00331398;
                  if (!bVar4 || bVar3) {
                    bVar3 = fVar5 == DAT_00331394;
                    bVar4 = DAT_00331394 <= fVar5;
                  }
                  if (!bVar4 || bVar3) {
                    bVar3 = true;
                    goto LAB_0033129c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_0033129c:
  if (!bVar3) {
    bVar1 = *(byte *)(iVar2 + 0xa8);
    *(byte *)(iVar2 + 0xa8) = bVar1 | 8;
    if ((((local_48 == 1.0 && local_44 == fVar6) && (local_40 == fVar6 && local_3c == fVar6)) &&
        (local_38 == 1.0 && local_34 == fVar6)) &&
       ((local_30 == fVar6 && local_2c == fVar6) && local_28 == 1.0)) {
      *(float *)(iVar2 + 0x18) = fVar7;
      *(float *)(iVar2 + 0x1c) = fVar6;
      *(float *)(iVar2 + 0x20) = fVar6;
      bVar1 = bVar1 & 0xfb | 8;
      *(float *)(iVar2 + 0x24) = fVar6;
      *(float *)(iVar2 + 0x28) = fVar7;
      *(float *)(iVar2 + 0x2c) = fVar6;
      *(float *)(iVar2 + 0x30) = fVar6;
      *(float *)(iVar2 + 0x34) = fVar6;
      *(float *)(iVar2 + 0x38) = fVar7;
    }
    else {
      func_001151CC((undefined4 *)(iVar2 + 0x18),&local_48);
      bVar1 = *(byte *)(iVar2 + 0xa8) | 4;
    }
    *(byte *)(iVar2 + 0xa8) = bVar1;
  }
  func_0043625C(*(int **)(*(int *)(param_1 + 0x410) + 0x14),(undefined4 *)(param_1 + 8));
  return func_004ED9C8(*(int *)(param_1 + 0x410));
}

