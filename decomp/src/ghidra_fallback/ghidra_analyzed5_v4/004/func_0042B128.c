#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0042BD5C(int param_1,float *param_2,float *param_3,int param_4,float fparam_0,float fparam_1);
extern float DAT_0042b474;
extern float DAT_0042b478;
extern float DAT_0042b5ac;
extern float DAT_0042b5b0;
extern float *DAT_0042b5b4;
extern float *DAT_0042b5b8;

// USA 0042B128 <- EU 0042B108 (Ghidra, non-matching)
// GLOBAL DAT_0042b474 float
// GLOBAL DAT_0042b478 float
// GLOBAL DAT_0042b5ac float
// GLOBAL DAT_0042b5b0 float
// GLOBAL DAT_0042b5b4 float *
// GLOBAL DAT_0042b5b8 float *

undefined4 func_0042B128(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define local_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define fStack_44 (*(float *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(float *)(albw_frame + 0x54))
  #define local_38 (*(float *)(albw_frame + 0x58))
  func_00115C70(&local_90,(float *)(param_1 + 4),(float *)(param_2 + 4));
  fVar11 = *(float *)(param_1 + 0x68);
  fVar9 = *(float *)(param_1 + 100);
  fVar10 = local_90;
  fVar8 = DAT_0042b474;
  fVar5 = local_8c;
  fVar6 = local_88;
  func_00115D70(&local_64,(float *)(param_2 + 0x58),DAT_0042b474);
  fVar7 = DAT_0042b478;
  fVar12 = *(float *)(param_2 + 100) * fVar10 + *(float *)(param_2 + 0x70) * fVar5 +
           *(float *)(param_2 + 0x7c) * fVar6;
  if ((fVar12 < local_64 + fVar9) && (-(local_64 + fVar9) < fVar12)) {
    fVar4 = *(float *)(param_2 + 0x68) * fVar10 + *(float *)(param_2 + 0x74) * fVar5 +
            *(float *)(param_2 + 0x80) * fVar6;
    if ((fVar4 < local_60 + fVar11) && (-(local_60 + fVar11) < fVar4)) {
      fVar10 = *(float *)(param_2 + 0x6c) * fVar10 + *(float *)(param_2 + 0x78) * fVar5 +
               *(float *)(param_2 + 0x84) * fVar6;
      if ((fVar10 < local_5c + fVar9) && (-(local_5c + fVar9) < fVar10)) {
        if (local_64 < fVar12) {
          local_80 = fVar12 - local_64;
        }
        else if (fVar12 < -local_64) {
          local_80 = local_64 + fVar12;
        }
        else {
          local_80 = DAT_0042b478;
        }
        if (local_5c < fVar10) {
          local_78 = fVar10 - local_5c;
        }
        else if (fVar10 < -local_5c) {
          local_78 = local_5c + fVar10;
        }
        else {
          local_78 = DAT_0042b478;
        }
        local_7c = DAT_0042b478;
        fVar5 = local_80 * local_80 + DAT_0042b478 * DAT_0042b478 + local_78 * local_78;
        if (fVar5 < fVar9 * fVar9) {
          if (param_3 != 0) {
            if (fVar5 <= DAT_0042b478) {
              local_4c = *(float *)(param_1 + 0x10);
              fStack_44 = *(float *)(param_1 + 0x18);
              local_48 = *(float *)(param_1 + 8);
              func_00115C70(&local_58,(float *)(param_1 + 0x10),&local_4c);
              local_74 = local_58;
              local_70 = local_54;
              local_6c = local_50;
              fVar8 = SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
              if (fVar7 < fVar8) {
                local_74 = local_58 / fVar8;
                local_70 = local_54 / fVar8;
                local_6c = local_50 / fVar8;
                local_58 = local_4c;
                local_54 = local_48;
                local_50 = fStack_44;
                local_40 = local_74;
                local_3c = local_70;
                local_38 = local_6c;
                func_00115D70(&local_40,&local_40,*(float *)(param_1 + 100));
                func_00115C70(&local_58,&local_58,&local_40);
                cVar1 = func_0042BD5C(param_2,&local_58,&local_74,param_3,
                                      *(float *)(param_1 + 100) + fVar8,*(float *)(param_1 + 100));
                if (cVar1 != '\0') {
                  func_00115C70(&local_90,(float *)(param_3 + 0x10),(float *)(param_1 + 4));
                  *(float *)(param_3 + 0x1c) =
                       local_90 * *(float *)(param_3 + 4) + local_8c * *(float *)(param_3 + 8) +
                       local_88 * *(float *)(param_3 + 0xc);
                  return 1;
                }
              }
              fVar8 = fVar12;
              if (fVar12 <= fVar7) {
                fVar8 = -fVar12;
              }
              fVar5 = fVar10;
              if (fVar10 <= fVar7) {
                fVar5 = -fVar10;
              }
              if (fVar8 / local_64 <= fVar5 / local_5c) {
                fVar8 = DAT_0042b5ac;
                if (fVar10 < fVar7) {
                  fVar8 = DAT_0042b5b0;
                }
                func_00115D70(&local_40,DAT_0042b5b8,fVar8);
                if (fVar10 <= fVar7) {
                  fVar10 = -fVar10;
                }
                local_64 = local_5c - fVar10;
              }
              else {
                fVar10 = DAT_0042b5ac;
                if (fVar12 < fVar7) {
                  fVar10 = DAT_0042b5b0;
                }
                func_00115D70(&local_40,DAT_0042b5b4,fVar10);
                if (fVar12 <= fVar7) {
                  fVar12 = -fVar12;
                }
                local_64 = local_64 - fVar12;
              }
              *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 100) + local_64;
              local_80 = local_40;
              local_7c = local_3c;
              local_78 = local_38;
              func_00115CE4((float *)(param_3 + 4),(float *)(param_2 + 100),&local_80);
              func_00115D70(&local_40,(float *)(param_3 + 4),*(float *)(param_1 + 100));
              local_58 = local_40;
              local_54 = local_3c;
              local_50 = local_38;
              func_00115C70(&local_40,(float *)(param_1 + 4),&local_58);
              *(float *)(param_3 + 0x10) = local_40;
              *(float *)(param_3 + 0x14) = local_3c;
              *(float *)(param_3 + 0x18) = local_38;
            }
            else {
              *(float *)(param_3 + 0x1c) = *(float *)(param_1 + 100) - SQRT(fVar5);
              func_00115DC8(&local_80);
              *(float *)(param_3 + 4) = local_80;
              *(float *)(param_3 + 8) = local_7c;
              *(float *)(param_3 + 0xc) = local_78;
              fVar5 = *(float *)(param_1 + 8);
              fVar9 = *(float *)(param_2 + 8);
              fVar6 = fVar5 - fVar9;
              fVar10 = fVar6;
              if (fVar6 <= fVar7) {
                fVar10 = -fVar6;
              }
              if (local_60 < fVar10) {
                if (fVar6 <= fVar7) {
                  fVar5 = (fVar9 - local_60) +
                          ((fVar5 + *(float *)(param_1 + 0x68)) - (fVar9 - local_60)) * fVar8;
                }
                else {
                  fVar5 = (fVar9 + local_60) -
                          ((fVar9 + local_60) - (fVar5 - *(float *)(param_1 + 0x68))) * fVar8;
                }
              }
              uVar2 = *(undefined4 *)(param_1 + 8);
              uVar3 = *(undefined4 *)(param_1 + 0xc);
              *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 4);
              *(undefined4 *)(param_3 + 0x14) = uVar2;
              *(undefined4 *)(param_3 + 0x18) = uVar3;
              *(float *)(param_3 + 0x14) = fVar5;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

