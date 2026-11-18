#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001FE680(undefined4 *param_1);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_004AAD4C(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4,uint param_5, uint param_6,float fparam_0,float fparam_1);
extern int func_004AAF44(int param_1,float *param_2,undefined4 *param_3,uint param_4,uint param_5, float fparam_0);
extern int func_00649E18(int param_1,float *param_2,float *param_3);
extern int func_0064B4A0(int param_1,float *param_2,float *param_3);
extern int func_0068B200(float *param_1,float *param_2);
extern float DAT_001e9424;
extern int *DAT_001e9428;
extern int DAT_001e942c;
extern int DAT_001e9430;
extern float DAT_001e9434;
extern undefined4 *DAT_001e9438;
extern float DAT_001e943c;
extern int *DAT_001e9440;
extern float DAT_001e9444;
extern undefined4 DAT_001e97cc;
extern float DAT_001e97d0;
extern int DAT_001e97d4;

// USA 001E9098 <- EU 001E9098 (Ghidra, non-matching)
// GLOBAL DAT_001e9424 float
// GLOBAL DAT_001e9428 int *
// GLOBAL DAT_001e942c int
// GLOBAL DAT_001e9430 int
// GLOBAL DAT_001e9434 float
// GLOBAL DAT_001e9438 undefined4 *
// GLOBAL DAT_001e943c float
// GLOBAL DAT_001e9440 int *
// GLOBAL DAT_001e9444 float
// GLOBAL DAT_001e97cc undefined4
// GLOBAL DAT_001e97d0 float
// GLOBAL DAT_001e97d4 int

undefined4 func_001E9098(int *param_1,float *param_2,int param_3,float fparam_0)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  _Alignas(8) unsigned char albw_frame[0x300];
  #define local_300 (*(float * *)(albw_frame + 0x0))
  #define local_2fc (*(undefined4 *)(albw_frame + 0x4))
  #define local_2f8 (*(float * *)(albw_frame + 0x8))
  #define local_2f4 ((float *)(albw_frame + 0xc))
  #define local_f4 (*(float *)(albw_frame + 0x20c))
  #define local_f0 (*(float *)(albw_frame + 0x210))
  #define local_ec (*(float *)(albw_frame + 0x214))
  #define local_e0 (*(float *)(albw_frame + 0x220))
  #define local_dc (*(int *)(albw_frame + 0x224))
  #define local_d8 (*(int *)(albw_frame + 0x228))
  #define local_d4 (*(int *)(albw_frame + 0x22c))
  #define local_d0 (*(float *)(albw_frame + 0x230))
  #define local_cc (*(float *)(albw_frame + 0x234))
  #define local_c8 (*(float *)(albw_frame + 0x238))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x23c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x240))
  #define local_bc (*(undefined4 *)(albw_frame + 0x244))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x248))
  #define local_b4 (*(float *)(albw_frame + 0x24c))
  #define local_b0 (*(int * *)(albw_frame + 0x250))
  #define local_a8 (*(float *)(albw_frame + 0x258))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x25c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x260))
  #define afStack_98 ((float *)(albw_frame + 0x268))
  #define local_6c (*(float ** *)(albw_frame + 0x294))
  #define local_68 (*(float *)(albw_frame + 0x298))
  #define piStack_64 (*(int * *)(albw_frame + 0x29c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x2a0))
  #define local_5c (*(float *)(albw_frame + 0x2a4))
  #define local_58 (*(float *)(albw_frame + 0x2a8))
  #define local_54 (*(float *)(albw_frame + 0x2ac))
  #define local_50 (*(float *)(albw_frame + 0x2b0))
  #define piStack_4c (*(int * *)(albw_frame + 0x2b4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x2b8))
  #define local_44 (*(float *)(albw_frame + 0x2bc))
  #define piStack_40 (*(int * *)(albw_frame + 0x2c0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x2c4))
  piVar11 = DAT_001e9428;
  fVar17 = DAT_001e9424;
  bVar15 = *(char *)((int)param_1 + 0x3bae) != '\0';
  iVar2 = 0;
  if (bVar15) {
    iVar2 = param_1[10];
  }
  if (bVar15 && iVar2 != 0) {
    if (param_3 != 0) {
      if (fparam_0 <= DAT_001e9424) {
        *param_2 = ALBW_AS_F32(param_1[0xee5]);
        param_2[1] = ALBW_AS_F32(param_1[0xee6]);
        param_2[2] = ALBW_AS_F32(param_1[0xee7]);
      }
      else {
        *param_2 = ALBW_AS_F32(param_1[0xee2]);
        param_2[1] = ALBW_AS_F32(param_1[0xee3]);
        param_2[2] = ALBW_AS_F32(param_1[0xee4]);
      }
      return 1;
    }
    local_2f8 = local_2f4;
    local_2fc = 0x20;
    local_300 = (float *)0x0;
    piVar3 = (int *)*DAT_001e9428;
    iVar13 = *(int *)param_1[10];
    iVar14 = ((int *)param_1[10])[4];
    iVar2 = 0;
    if (0 < *piVar3) {
      do {
        piVar10 = *(int **)(piVar3[2] + iVar2 * 4);
        iVar2 = iVar2 + 1;
        *piVar10 = piVar3[3];
        piVar3[3] = (int)piVar10;
      } while (iVar2 < *piVar3);
    }
    *piVar3 = 0;
    iVar2 = 0;
    if (0 < piVar3[5]) {
      do {
        piVar10 = *(int **)(piVar3[7] + iVar2 * 4);
        iVar2 = iVar2 + 1;
        *piVar10 = piVar3[8];
        piVar3[8] = (int)piVar10;
      } while (iVar2 < piVar3[5]);
    }
    piVar3[5] = 0;
    piVar3[10] = 0;
    func_0049F5FC(param_1 + 2);
    func_0049F5FC(param_1 + 6);
    iVar2 = DAT_001e942c;
    param_1[0x1f] = DAT_001e942c;
    param_1[0x20] = iVar2;
    param_1[0x21] = iVar2;
    iVar2 = DAT_001e9430;
    param_1[0x22] = DAT_001e9430;
    param_1[0x23] = iVar2;
    param_1[0x24] = iVar2;
    func_00115D70(&local_50,(float *)(param_1 + 0x12),fparam_0);
    local_a8 = local_50;
    uStack_a4 = piStack_4c;
    uStack_a0 = uStack_48;
    func_0068B200((float *)(param_1 + 0x1f),&local_a8);
    func_00115D70(&local_50,(float *)(param_1 + 0x18),fparam_0);
    local_a8 = local_50;
    uStack_a4 = piStack_4c;
    uStack_a0 = uStack_48;
    func_0068B200((float *)(param_1 + 0x1f),&local_a8);
    local_5c = -ALBW_AS_F32(param_1[0x18]);
    local_58 = -ALBW_AS_F32(param_1[0x19]);
    local_54 = -ALBW_AS_F32(param_1[0x1a]);
    func_00115D70(&local_50,&local_5c,fparam_0);
    local_a8 = local_50;
    uStack_a4 = piStack_4c;
    uStack_a0 = uStack_48;
    func_0068B200((float *)(param_1 + 0x1f),&local_a8);
    puVar1 = DAT_001e9438;
    fVar19 = ALBW_AS_F32(param_1[0x1f]) + ALBW_AS_F32(param_1[0xc]);
    param_1[0x1f] = (int)ALBW_AS_U32(fVar19);
    fVar22 = ALBW_AS_F32(param_1[0x20]) + ALBW_AS_F32(param_1[0xd]);
    param_1[0x20] = (int)ALBW_AS_U32(fVar22);
    fVar21 = ALBW_AS_F32(param_1[0x21]) + ALBW_AS_F32(param_1[0xe]);
    param_1[0x21] = (int)ALBW_AS_U32(fVar21);
    fVar20 = ALBW_AS_F32(param_1[0x22]) + ALBW_AS_F32(param_1[0xc]);
    param_1[0x22] = (int)ALBW_AS_U32(fVar20);
    fVar23 = ALBW_AS_F32(param_1[0x23]) + ALBW_AS_F32(param_1[0xd]);
    param_1[0x23] = (int)ALBW_AS_U32(fVar23);
    fVar16 = DAT_001e9434;
    fVar18 = ALBW_AS_F32(param_1[0x24]) + ALBW_AS_F32(param_1[0xe]);
    local_f4 = (fVar19 + fVar20) * DAT_001e9434;
    param_1[0x24] = (int)ALBW_AS_U32(fVar18);
    local_f0 = (fVar22 + fVar23) * fVar16;
    local_ec = (fVar21 + fVar18) * fVar16;
    fVar18 = fparam_0;
    if (fparam_0 <= fVar17) {
      fVar18 = -fparam_0;
    }
    fVar19 = (ALBW_AS_F32(param_1[0x22]) - ALBW_AS_F32(param_1[0x1f])) * fVar16;
    *param_1 = *piVar11;
    param_1[1] = *piVar11 + 0x14;
    param_1[0x25] = (int)ALBW_AS_U32(local_f4);
    fVar16 = (ALBW_AS_F32(param_1[0x24]) - ALBW_AS_F32(param_1[0x21])) * fVar16;
    param_1[0x26] = (int)ALBW_AS_U32(local_f0);
    param_1[0x27] = (int)ALBW_AS_U32(local_ec);
    if (fVar19 <= fVar16) {
      fVar19 = fVar16;
    }
    uVar25 = CONCAT44(fVar17,fVar19);
    param_1[0x28] = (int)ALBW_AS_U32(fVar19);
    piVar11 = DAT_001e9440;
    uStack_48 = *puVar1;
    local_44 = ALBW_AS_F32(puVar1[1]);
    local_50 = DAT_001e943c;
    piStack_4c = param_1;
    func_004AAD4C(*DAT_001e9440,&local_f4,&local_50,0x1f,0xf,0,fVar19,fVar19);
    uStack_48 = puVar1[2];
    local_44 = ALBW_AS_F32(puVar1[3]);
    local_50 = DAT_001e9444;
    piStack_4c = param_1;
    func_004AAF44(*piVar11,&local_f4,&local_50,0x1f,0xf,ALBW_AS_F32(uVar25));
    puVar8 = (uint *)*param_1;
    uVar12 = *puVar8;
    if (uVar12 != 0) {
      for (uVar4 = 0; (int)uVar4 < (int)uVar12; uVar4 = uVar4 + 1) {
        if (uVar4 < uVar12) {
          piVar11 = *(int **)(puVar8[2] + uVar4 * 4);
        }
        else {
          piVar11 = (int *)0x0;
        }
        if (*piVar11 == iVar13) {
          if (uVar4 < uVar12) {
            iVar2 = *(int *)(puVar8[2] + uVar4 * 4);
          }
          else {
            iVar2 = 0;
          }
          if (*(int *)(iVar2 + 0x10) == iVar14) {
            if (uVar12 <= uVar4) {
              return 0;
            }
            fVar16 = *(float *)(puVar8[2] + uVar4 * 4);
            if (fVar16 == 0.0) {
              return 0;
            }
            func_001FE680(afStack_98);
            local_6c = &local_300;
            local_dc = param_1[0xc];
            local_d8 = param_1[0xd];
            local_d4 = param_1[0xe];
            if (fparam_0 <= fVar17) {
              local_d0 = -ALBW_AS_F32(param_1[0x12]);
              local_cc = -ALBW_AS_F32(param_1[0x13]);
              local_c8 = -ALBW_AS_F32(param_1[0x14]);
            }
            else {
              local_d0 = ALBW_AS_F32(param_1[0x12]);
              local_cc = ALBW_AS_F32(param_1[0x13]);
              local_c8 = ALBW_AS_F32(param_1[0x14]);
            }
            local_c4 = *(undefined4 *)((int)ALBW_AS_U32(fVar16) + 0x30);
            pfVar9 = (float *)0x0;
            if (fVar17 < fparam_0) {
              pfVar9 = afStack_98;
            }
            local_c0 = *(undefined4 *)((int)ALBW_AS_U32(fVar16) + 0x34);
            if (fVar17 < fparam_0) {
              pfVar5 = &local_e0;
            }
            else {
              pfVar5 = afStack_98;
            }
            local_bc = *(undefined4 *)((int)ALBW_AS_U32(fVar16) + 0x38);
            local_b8 = DAT_001e97cc;
            local_b0 = param_1 + 2;
            local_e0 = fVar16;
            local_b4 = fVar18;
            if (fparam_0 <= fVar17) {
              pfVar9 = &local_e0;
              func_0049F5FC(param_1 + 2);
              func_0049F5FC(param_1 + 6);
              uVar12 = 0;
              while( true ) {
                fVar17 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
                uVar4 = *(uint *)*param_1;
                if ((int)uVar4 <= (int)uVar12) break;
                if (uVar12 < uVar4) {
                  iVar2 = *(int *)(((uint *)*param_1)[2] + uVar12 * 4);
                }
                else {
                  iVar2 = 0;
                }
                func_0010F1DC(param_1 + 2,(int *)(param_1[5] + iVar2));
                param_1[4] = param_1[4] + 1;
                if (uVar12 < *(uint *)*param_1) {
                  iVar2 = *(int *)(((uint *)*param_1)[2] + uVar12 * 4);
                }
                else {
                  iVar2 = 0;
                }
                func_0010F1DC(param_1 + 6,(int *)(param_1[9] + iVar2));
                uVar12 = uVar12 + 1;
                param_1[8] = param_1[8] + 1;
              }
              func_0064B4A0((int)param_1,pfVar5,pfVar9);
            }
            else {
              local_b0 = param_1 + 2;
              func_0049F5FC(param_1 + 2);
              func_0049F5FC(param_1 + 6);
              uVar12 = 0;
              while( true ) {
                fVar17 = ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
                uVar4 = *(uint *)*param_1;
                if ((int)uVar4 <= (int)uVar12) break;
                if (uVar12 < uVar4) {
                  iVar2 = *(int *)(((uint *)*param_1)[2] + uVar12 * 4);
                }
                else {
                  iVar2 = 0;
                }
                func_0010F1DC(param_1 + 2,(int *)(param_1[5] + iVar2));
                param_1[4] = param_1[4] + 1;
                if (uVar12 < *(uint *)*param_1) {
                  iVar2 = *(int *)(((uint *)*param_1)[2] + uVar12 * 4);
                }
                else {
                  iVar2 = 0;
                }
                func_0010F1DC(param_1 + 6,(int *)(param_1[9] + iVar2));
                uVar12 = uVar12 + 1;
                param_1[8] = param_1[8] + 1;
              }
              func_00649E18((int)param_1,pfVar9,pfVar5);
              pfVar9 = pfVar5;
            }
            if (local_300 == (float *)0x0) {
              return 0;
            }
            pfVar5 = (float *)0x0;
            fVar16 = fVar17;
            if (0 < (int)local_300) {
              do {
                pfVar9 = local_2f8;
                if (pfVar5 < local_300) {
                  pfVar9 = local_2f8 + (int)pfVar5 * 4;
                }
                pfVar5 = (float *)((int)pfVar5 + 1);
                fVar16 = *pfVar9 + fVar16;
                pfVar9 = local_300;
              } while ((int)pfVar5 < (int)local_300);
            }
            *param_2 = fVar17;
            fVar18 = DAT_001e97d0;
            param_2[1] = fVar17;
            param_2[2] = fVar17;
            pfVar5 = (float *)0x0;
            uVar24 = (ulonglong)(uint)ALBW_AS_U32((fVar18 / fVar16));
            if (0 < (int)local_300) {
              do {
                pfVar6 = local_2f8;
                if (pfVar5 < local_300) {
                  pfVar6 = local_2f8 + (int)pfVar5 * 4;
                  pfVar9 = local_2f8;
                }
                pfVar7 = local_2f8;
                if (pfVar5 < local_300) {
                  pfVar7 = pfVar9 + (int)pfVar5 * 4;
                }
                func_00115D70(&local_44,pfVar6 + 1,*pfVar7);
                local_50 = local_44;
                piStack_4c = piStack_40;
                uStack_48 = uStack_3c;
                func_00115D70(&local_44,&local_50,ALBW_AS_F32(uVar24));
                local_68 = local_44;
                piStack_64 = piStack_40;
                uStack_60 = uStack_3c;
                pfVar9 = &local_68;
                func_00115C54(param_2,param_2,pfVar9);
                pfVar5 = (float *)((int)pfVar5 + 1);
              } while ((int)pfVar5 < (int)local_300);
            }
            fVar17 = func_00115DC8(param_2);
            if (DAT_001e97d4 <= (int)ALBW_AS_U32(fVar17)) {
              return 1;
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

