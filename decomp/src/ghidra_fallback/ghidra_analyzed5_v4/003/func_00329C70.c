// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00521184();
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_00329f38;
extern int *DAT_00329f3c;
extern uint DAT_00329f40;
extern uint *DAT_00329f44;
extern int DAT_00329f48;
extern float DAT_00329f4c;

// USA 00329C70 <- EU 00329C4C (Ghidra, non-matching)
// GLOBAL DAT_00329f38 undefined4 *
// GLOBAL DAT_00329f3c int *
// GLOBAL DAT_00329f40 uint
// GLOBAL DAT_00329f44 uint *
// GLOBAL DAT_00329f48 int
// GLOBAL DAT_00329f4c float

undefined4 func_00329C70(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float * *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 ((int *)(albw_frame + 0x1c))
  uVar2 = *DAT_00329f38;
  *(undefined4 *)(param_1 + 0x950) = uVar2;
  *(undefined4 *)(param_1 + 0xa28) = uVar2;
  func_004FC07C(param_1,5,0x10,0);
  *(undefined4 *)(param_1 + 0xc84) = 5;
  *(undefined1 *)(param_1 + 0xc93) = 1;
  local_38 = func_00521184(param_1);
  iVar6 = DAT_00329f48;
  puVar1 = DAT_00329f44;
  local_3c = (float *)(param_1 + 0x3d0);
  uVar11 = 0;
  uVar10 = 0xffffffff;
  uVar8 = 1;
  pfVar12 = *(float **)(*DAT_00329f3c + 0x1c);
  iVar9 = *(int *)(*(int *)(param_1 + 0xa94) + 0x20);
  if (1 < iVar9) {
    uVar15 = (ulonglong)DAT_00329f40;
    do {
      if (*(uint *)(param_1 + 0xc58) != uVar8) {
        iVar5 = *(int *)(*(int *)(param_1 + 0xa94) + 0x28);
        if (iVar5 != 0) {
          if (uVar8 < *(uint *)(*(int *)(param_1 + 0xa94) + 0x20)) {
            iVar5 = *(int *)(iVar5 + uVar8 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (iVar5 != 0) {
            local_48 = *(float *)(iVar5 + 0x18);
            uStack_44 = *(undefined4 *)(iVar5 + 0x1c);
            local_40 = *(float *)(iVar5 + 0x20);
            func_00115C70(&local_48,&local_48,local_3c);
            fVar13 = ALBW_AS_F32(uVar15);
            if (local_40 == fVar13 && local_48 == fVar13) {
              local_34[0] = 0;
            }
            else if (local_40 < fVar13) {
              if (local_48 < fVar13) {
                if (local_48 < local_40) {
                  local_34[0] = func_004905E0(local_40 / local_48);
                  local_34[0] = -0x40000000 - local_34[0];
                }
                else {
                  local_34[0] = func_004905E0(local_48 / local_40);
                  local_34[0] = local_34[0] + -0x80000000;
                }
              }
              else {
                fVar13 = -local_40;
                if (fVar13 < local_48) {
                  local_34[0] = func_004905E0(fVar13 / local_48);
                  local_34[0] = local_34[0] + 0x40000000;
                }
                else {
                  local_34[0] = func_004905E0(local_48 / fVar13);
                  local_34[0] = -0x80000000 - local_34[0];
                }
              }
            }
            else if (local_48 < fVar13) {
              fVar13 = -local_48;
              if (local_40 < fVar13) {
                local_34[0] = func_004905E0(local_40 / fVar13);
                local_34[0] = local_34[0] + -0x40000000;
              }
              else {
                local_34[0] = func_004905E0(fVar13 / local_40);
                local_34[0] = -local_34[0];
              }
            }
            else if (local_40 < local_48) {
              local_34[0] = func_004905E0(local_40 / local_48);
              local_34[0] = 0x40000000 - local_34[0];
            }
            else {
              local_34[0] = func_004905E0(local_48 / local_40);
            }
            local_34[0] = local_38 - local_34[0];
            uVar3 = func_0058E2B8(local_34);
            if ((*puVar1 < uVar3) &&
               (fVar13 = local_48 - *pfVar12, fVar14 = local_40 - pfVar12[2],
               iVar6 <= (int)ALBW_AS_U32((fVar13 * fVar13 + fVar14 * fVar14)))) {
              uVar11 = uVar11 + 1;
              puVar4 = (uint *)func_0058A7D4();
              uVar3 = func_00111A64(puVar4);
              if ((int)((ulonglong)uVar11 * (ulonglong)uVar3 >> 0x20) == 0) {
                uVar10 = uVar8;
              }
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar9);
    if (-1 < (int)uVar10) {
      *(uint *)(param_1 + 0xc58) = uVar10;
      fVar13 = DAT_00329f4c;
      uVar8 = *(uint *)(param_1 + 0xa94);
      iVar6 = *(int *)(uVar8 + 0x28);
      if (iVar6 != 0) {
        uVar8 = *(uint *)(uVar8 + 0x20);
      }
      if (iVar6 != 0 && uVar10 < uVar8) {
        iVar6 = *(int *)(iVar6 + uVar10 * 4);
      }
      else {
        iVar6 = 0;
      }
      uVar2 = *(undefined4 *)(iVar6 + 0x18);
      uVar7 = *(undefined4 *)(iVar6 + 0x1c);
      *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(param_1 + 0xc24) = uVar2;
      *(undefined4 *)(param_1 + 0xc28) = uVar7;
      *(float *)(param_1 + 0xc28) = *(float *)(param_1 + 0xc) + fVar13;
      return 0;
    }
  }
  return func_00665670((undefined4 *)(param_1 + 0xba8),5);
}

