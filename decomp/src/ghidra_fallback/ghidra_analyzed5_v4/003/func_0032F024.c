#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_0032EF74(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0054FF8C(int param_1,float *param_2,int param_3);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int *DAT_0032f438;
extern float DAT_0032f43c;
extern undefined4 DAT_0032f440;
extern undefined4 DAT_0032f444;

// USA 0032F024 <- EU 0032F000 (Ghidra, non-matching)
// GLOBAL DAT_0032f438 int *
// GLOBAL DAT_0032f43c float
// GLOBAL DAT_0032f440 undefined4
// GLOBAL DAT_0032f444 undefined4

void func_0032F024(float *param_1,uint param_2,float fparam_0)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  undefined1 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined8 in_d9;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_110 (*(float *)(albw_frame + 0x0))
  #define local_10c (*(float *)(albw_frame + 0x4))
  #define local_108 (*(float *)(albw_frame + 0x8))
  #define local_fc (*(float *)(albw_frame + 0x14))
  #define local_f8 (*(float *)(albw_frame + 0x18))
  #define local_f4 (*(float *)(albw_frame + 0x1c))
  #define local_ec (*(float * *)(albw_frame + 0x24))
  #define local_e0 (*(float *)(albw_frame + 0x30))
  #define local_dc (*(float *)(albw_frame + 0x34))
  #define local_d8 (*(float *)(albw_frame + 0x38))
  #define local_d0 (*(float *)(albw_frame + 0x40))
  #define fStack_cc (*(float *)(albw_frame + 0x44))
  #define fStack_c8 (*(float *)(albw_frame + 0x48))
  #define local_c4 ((float *)(albw_frame + 0x4c))
  #define fStack_bc (*(float *)(albw_frame + 0x54))
  #define local_b8 (*(float *)(albw_frame + 0x58))
  #define local_b4 (*(float *)(albw_frame + 0x5c))
  #define local_b0 (*(float *)(albw_frame + 0x60))
  #define local_ac (*(float *)(albw_frame + 0x64))
  #define uStack_a8 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_a0 (*(float *)(albw_frame + 0x70))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x78))
  #define afStack_70 ((float *)(albw_frame + 0xa0))
  #define afStack_60 ((float *)(albw_frame + 0xb0))
  uVar7 = 0;
  param_1[3] = 0.0;
  if (-1 < (int)param_2) {
    iVar1 = *DAT_0032f438;
    iVar2 = func_00581B9C(iVar1);
    if (((iVar2 == 1) && (puVar3 = (uint *)func_00582250(iVar1), param_2 < *puVar3)) &&
       (iVar1 = *(int *)(puVar3[2] + param_2 * 4), iVar1 != 0)) {
      *(undefined1 *)(param_1 + 0x108) = 1;
      fVar10 = DAT_0032f43c;
      iVar2 = 0;
      if (*(int **)(iVar1 + 0x28) != (int *)0x0) {
        if (*(int *)(iVar1 + 0x20) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = **(int **)(iVar1 + 0x28);
        }
      }
      *param_1 = *(float *)(iVar2 + 0x18);
      param_1[1] = *(float *)(iVar2 + 0x1c);
      param_1[2] = *(float *)(iVar2 + 0x20);
      param_1[1] = fparam_0;
      uVar8 = *(uint *)(iVar1 + 0x20);
      iVar2 = *(int *)(iVar1 + 0x28);
      if (iVar2 == 0 || uVar8 <= uVar8 - 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar2 + (uVar8 - 1) * 4);
      }
      fVar9 = *(float *)(iVar4 + 0x1c) - fparam_0;
      if (fVar9 <= fVar10) {
        fVar9 = -fVar9;
      }
      if (0x3f800000 < (int)ALBW_AS_U32(fVar9)) {
        if (iVar2 == 0 || uVar8 <= uVar8 - 2) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar2 + (uVar8 - 2) * 4);
        }
        uVar7 = 1;
      }
      if (1 < uVar8) {
        in_d9 = CONCAT44(DAT_0032f440,DAT_0032f444);
      }
      uVar5 = 1;
      if (1 < uVar8) {
        do {
          if ((*(int *)(iVar1 + 0x28) == 0) || (*(uint *)(iVar1 + 0x20) <= uVar5)) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(iVar1 + 0x28) + uVar5 * 4);
          }
          local_fc = *(float *)(iVar4 + 0x18);
          local_f4 = *(float *)(iVar4 + 0x20);
          local_110 = *(float *)(iVar2 + 0x18);
          local_108 = *(float *)(iVar2 + 0x20);
          fVar9 = *(float *)(iVar2 + 0x1c) - fparam_0;
          if (fVar9 <= fVar10) {
            fVar9 = -fVar9;
          }
          if ((int)ALBW_AS_U32(fVar9) < 0x3f800001) {
            pfVar6 = param_1 + 4;
            if ((uint)param_1[3] < 0x14) {
              pfVar6 = pfVar6 + (int)param_1[3] * 0xd;
            }
            local_ec = pfVar6 + 9;
            *pfVar6 = local_fc;
            pfVar6[1] = fparam_0;
            pfVar6[2] = local_f4;
            pfVar6[3] = local_110;
            pfVar6[4] = fparam_0;
            pfVar6[5] = local_108;
            local_10c = fparam_0;
            local_f8 = fparam_0;
            func_00115C54(&local_d0,&local_fc,&local_110);
            local_e0 = local_d0;
            local_dc = fStack_cc;
            local_d8 = fStack_c8;
            func_00115D70(&local_e0,&local_e0,ALBW_AS_F32(((ulonglong)in_d9 >> 0x20)));
            pfVar6[6] = local_e0;
            pfVar6[7] = local_dc;
            pfVar6[8] = local_d8;
            func_00115C70(&local_b8,&local_110,&local_fc);
            if (local_b0 == fVar10 && local_b8 == fVar10) {
              iVar4 = 0;
            }
            else if (local_b0 < fVar10) {
              if (local_b8 < fVar10) {
                if (local_b8 < local_b0) {
                  iVar4 = func_004905E0(local_b0 / local_b8);
                  iVar4 = -0x40000000 - iVar4;
                }
                else {
                  iVar4 = func_004905E0(local_b8 / local_b0);
                  iVar4 = iVar4 + -0x80000000;
                }
              }
              else {
                fVar9 = -local_b0;
                if (fVar9 < local_b8) {
                  iVar4 = func_004905E0(fVar9 / local_b8);
                  iVar4 = iVar4 + 0x40000000;
                }
                else {
                  iVar4 = func_004905E0(local_b8 / fVar9);
                  iVar4 = -0x80000000 - iVar4;
                }
              }
            }
            else if (local_b8 < fVar10) {
              fVar9 = -local_b8;
              if (local_b0 < fVar9) {
                iVar4 = func_004905E0(local_b0 / fVar9);
                iVar4 = iVar4 + -0x40000000;
              }
              else {
                iVar4 = func_004905E0(fVar9 / local_b0);
                iVar4 = -iVar4;
              }
            }
            else if (local_b0 < local_b8) {
              iVar4 = func_004905E0(local_b0 / local_b8);
              iVar4 = 0x40000000 - iVar4;
            }
            else {
              iVar4 = func_004905E0(local_b8 / local_b0);
            }
            func_004D80A4(local_ec,iVar4 + 0xc0000000,ALBW_AS_F32(in_d9));
            local_ec[1] = fVar10;
            func_00115DC8(local_ec);
            *(undefined1 *)(pfVar6 + 0xc) = uVar7;
            uVar7 = 0;
            func_00115C70(local_c4,pfVar6 + 6,param_1);
            local_b8 = local_c4[0];
            local_b0 = fStack_bc;
            local_b4 = fVar10;
            func_00115DC8(&local_b8);
            func_00115C54(&local_a0,param_1,&local_b8);
            local_ac = local_a0;
            uStack_a8 = uStack_9c;
            uStack_a4 = uStack_98;
            func_0032EF74(&local_a0,&local_fc,&local_110);
            func_0032EF74(afStack_60,param_1,&local_ac);
            func_0054FF8C((int)&local_a0,afStack_70,(int)afStack_60);
            param_1[3] = ALBW_AS_F32(((int)ALBW_AS_U32(param_1[3]) + 1));
          }
          else {
            uVar7 = 1;
            iVar2 = iVar4;
          }
          uVar5 = uVar5 + 1;
          iVar4 = iVar2;
        } while (uVar5 < uVar8);
      }
    }
  }
  return;
}

