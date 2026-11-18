// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_00292084(int param_1,int param_2);
extern int func_0039CB84(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00556E64(int param_1);
extern undefined4 DAT_0024c0ec;
extern uint DAT_0024c0f0;
extern undefined4 DAT_0024c0f4;
extern float DAT_0024c0f8;
extern uint *DAT_0024c0fc;
extern undefined4 DAT_0024c100;
extern int *DAT_0024c398;
extern int DAT_0024c39c;
extern float *DAT_0024c3a0;
extern undefined4 DAT_0024c3a4;

// USA 0024BD00 <- EU 0024BD00 (Ghidra, non-matching)
// GLOBAL DAT_0024c0ec undefined4
// GLOBAL DAT_0024c0f0 uint
// GLOBAL DAT_0024c0f4 undefined4
// GLOBAL DAT_0024c0f8 float
// GLOBAL DAT_0024c0fc uint *
// GLOBAL DAT_0024c100 undefined4
// GLOBAL DAT_0024c398 int *
// GLOBAL DAT_0024c39c int
// GLOBAL DAT_0024c3a0 float *
// GLOBAL DAT_0024c3a4 undefined4

void func_0024BD00(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_e0 (*(float *)(albw_frame + 0x0))
  #define local_dc (*(float *)(albw_frame + 0x4))
  #define fStack_d8 (*(float *)(albw_frame + 0x8))
  #define fStack_d0 (*(float *)(albw_frame + 0x10))
  #define uStack_cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_c8 (*(float *)(albw_frame + 0x18))
  #define local_c4 (*(float *)(albw_frame + 0x1c))
  #define local_c0 (*(float *)(albw_frame + 0x20))
  #define local_bc (*(float * *)(albw_frame + 0x24))
  #define afStack_b8 ((float *)(albw_frame + 0x28))
  #define fStack_98 (*(float *)(albw_frame + 0x48))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_90 (*(float * *)(albw_frame + 0x50))
  #define local_8c (*(uint *)(albw_frame + 0x54))
  #define fStack_88 (*(float *)(albw_frame + 0x58))
  #define local_84 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_80 (*(float * *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float * *)(albw_frame + 0x68))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define local_70 (*(uint *)(albw_frame + 0x70))
  #define uStack_6c (*(uint *)(albw_frame + 0x74))
  #define local_68 (*(undefined4 *)(albw_frame + 0x78))
  #define local_54 (*(int * *)(albw_frame + 0x8c))
  #define local_50 (*(float * *)(albw_frame + 0x90))
  #define local_4c (*(int * *)(albw_frame + 0x94))
  #define local_48 (*(int * *)(albw_frame + 0x98))
  #define local_40 (*(int * *)(albw_frame + 0xa0))
  #define local_3c (*(uint * *)(albw_frame + 0xa4))
  iVar12 = 0;
  iVar10 = param_1[0x103];
  if ((short)param_1[0xb] == 0) {
    iVar13 = 100;
  }
  else if ((short)param_1[0xb] == 2) {
    iVar13 = 0x46;
  }
  else {
    iVar13 = 0x3c;
  }
  uVar9 = 0;
  if (0 < param_1[0x2a2]) {
    local_40 = param_1 + 0x24f;
    local_54 = param_1 + 0x299;
    local_50 = (float *)(param_1 + 0x26f);
    local_4c = param_1 + 0x200;
    local_48 = param_1 + 0x291;
    uVar17 = (ulonglong)DAT_0024c0f0;
    uVar16 = CONCAT44(DAT_0024c0f4,DAT_0024c0ec);
    piVar11 = param_1 + 0x22f;
    local_7c = DAT_0024c0f8;
    do {
      piVar3 = piVar11;
      if (uVar9 < 0x20) {
        piVar3 = piVar11 + uVar9;
      }
      if (*piVar3 + iVar13 < iVar10) {
        piVar3 = param_1 + 300;
        if (uVar9 < 0x20) {
          piVar3 = piVar3 + uVar9;
        }
        iVar12 = iVar12 + 1;
        *(undefined1 *)(*piVar3 + 0x61) = 0;
        if (iVar12 == param_1[0x2a2]) {
          iVar2 = (int)(char)param_1[0x104];
          if (iVar2 != -1) {
            iVar8 = param_1[0x10b];
            pcVar7 = *(code **)(iVar8 + iVar2 * 8);
            if ((pcVar7 != (code *)0x0) ||
               ((uVar14 = *(uint *)(iVar8 + iVar2 * 8 + 4), (uVar14 & 1) != 0 && (uVar14 != 0)))) {
              uVar14 = *(uint *)(iVar8 + iVar2 * 8 + 4);
              piVar3 = (int *)(param_1[0x108] + ((int)uVar14 >> 1));
              if ((uVar14 & 1) != 0) {
                pcVar7 = *(code **)(pcVar7 + *piVar3);
              }
              (*pcVar7)(piVar3,1);
            }
          }
          iVar2 = param_1[0x104];
          *(undefined1 *)(param_1 + 0x104) = 1;
          param_1[0x103] = 0;
          *(char *)((int)param_1 + 0x411) = (char)iVar2;
          if (param_1[0x107] != 0) {
            local_80 = &local_e0;
            piVar3 = (int *)param_1[0x106];
            if (1 < (uint)param_1[0x105]) {
              piVar3 = piVar3 + 9;
            }
            (**(code **)(*piVar3 + 8))(piVar3);
            local_dc = ALBW_AS_F32(piVar3[1]);
            local_e0 = local_7c;
            func_0010BEB4(param_1[0x107],(int *)local_80);
          }
          iVar8 = (int)(char)param_1[0x104];
          iVar2 = param_1[0x109];
          pcVar7 = *(code **)(iVar2 + iVar8 * 8);
          if ((pcVar7 != (code *)0x0) ||
             ((uVar14 = *(uint *)(iVar2 + iVar8 * 8 + 4), (uVar14 & 1) != 0 && (uVar14 != 0)))) {
            uVar14 = *(uint *)(iVar2 + iVar8 * 8 + 4);
            if ((uVar14 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(int *)(param_1[0x108] + ((int)uVar14 >> 1)));
            }
            (*pcVar7)((int)(param_1[0x108]) + ((int)uVar14 >> 1));
          }
        }
      }
      else {
        piVar3 = piVar11;
        if (uVar9 < 0x20) {
          piVar3 = piVar11 + uVar9;
        }
        if (*piVar3 < iVar10) {
          piVar3 = local_40;
          if (uVar9 < 0x20) {
            piVar3 = local_40 + uVar9;
          }
          if (*piVar3 < iVar10) {
            piVar3 = local_54;
            if (uVar9 < 0x20) {
              piVar3 = (int *)((int)local_54 + uVar9);
            }
            if ((char)*piVar3 == '\0') {
              piVar3 = param_1 + 300;
              if (uVar9 < 0x20) {
                piVar3 = piVar3 + uVar9;
              }
              piVar4 = param_1 + 0x14c;
              if (uVar9 < 0x20) {
                piVar4 = piVar4 + uVar9 * 2;
              }
              *(undefined1 *)(*piVar3 + 0x61) = 1;
              iVar2 = *piVar4;
              if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == piVar4[1])) {
                iVar8 = *(int *)(iVar2 + 0x20);
                if ((iVar8 != 0) &&
                   ((*(int *)(iVar2 + 0x24) == *(int *)(iVar8 + 0xc) && (0 < *(int *)(iVar8 + 4)))))
                {
                  *(undefined1 *)(iVar8 + 0x280) = 1;
                }
                *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb;
                *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) | 8;
              }
              pfVar5 = (float *)(param_1 + 0x18c);
              if (uVar9 < 0x20) {
                pfVar5 = (float *)(param_1 + uVar9 * 3 + 0x18c);
              }
              local_e0 = *pfVar5;
              fStack_d8 = pfVar5[2];
              local_90 = (float *)(param_1 + 0x1ec);
              if (uVar9 < 0x20) {
                local_90 = local_90 + uVar9;
              }
              local_dc = pfVar5[1] + ALBW_AS_F32(uVar16);
              local_80 = (float *)0x0;
              fVar15 = 0.0;
              if (param_1[0xd1] != 0) {
                func_004A1B9C((int *)&local_78,param_1[0xd1],DAT_0024c0fc);
                local_80 = local_78;
                fVar15 = local_74;
              }
              fStack_88 = *local_90;
              local_84 = 0;
              local_8c = 0;
              func_0049216C(&fStack_d0,&local_8c,&local_e0);
              if ((local_80 != (float *)0x0) && (local_80[7] == fVar15)) {
                func_004A2D1C((int)local_80,&fStack_d0);
              }
              fStack_98 = local_7c;
              uStack_94 = DAT_0024c100;
              func_0014DBF4(param_1,(int *)&fStack_98,&local_e0,0);
              if ((short)param_1[0xb] == 2) {
                piVar3 = param_1 + 0x1ec;
                if (uVar9 < 0x20) {
                  piVar3 = piVar3 + uVar9;
                }
                func_0039CB84(&local_e0,*piVar3,param_1[0x14],(int)(short)param_1[0xc]);
              }
              piVar3 = local_54;
              if (uVar9 < 0x20) {
                piVar3 = (int *)((int)local_54 + uVar9);
              }
              *(char *)piVar3 = '\x01';
            }
            if ((short)param_1[0xb] == 2) {
              iVar2 = *DAT_0024c398;
              bVar1 = func_00556E64(iVar2);
              if (bVar1) {
                pfVar5 = (float *)func_00520FC0();
                pfVar6 = (float *)(param_1 + 0x18c);
                if (uVar9 < 0x20) {
                  pfVar6 = (float *)(param_1 + uVar9 * 3 + 0x18c);
                }
                if ((int)ALBW_AS_U32(((*pfVar5 - *pfVar6) * (*pfVar5 - *pfVar6) +
                          (pfVar5[1] - pfVar6[1]) * (pfVar5[1] - pfVar6[1]) +
                         (pfVar5[2] - pfVar6[2]) * (pfVar5[2] - pfVar6[2]))) < DAT_0024c39c) {
                  func_00292084(iVar2,0xfffffff8);
                }
              }
            }
            pfVar5 = local_50;
            if (uVar9 < 0x20) {
              pfVar5 = local_50 + uVar9;
            }
            pfVar6 = local_50;
            if (uVar9 < 0x20) {
              pfVar6 = local_50 + uVar9;
            }
            *pfVar5 = *pfVar5 + ALBW_AS_F32(local_4c[0x90]);
            if (ALBW_AS_F32(local_4c[0x8f]) < *pfVar6) {
              *pfVar6 = ALBW_AS_F32(local_4c[0x8f]);
            }
          }
          else {
            piVar3 = local_48;
            if (uVar9 < 0x20) {
              piVar3 = (int *)((int)local_48 + uVar9);
            }
            if ((char)*piVar3 == '\0') {
              pfVar5 = (float *)(param_1 + 0x18c);
              if (uVar9 < 0x20) {
                pfVar5 = (float *)(param_1 + uVar9 * 3 + 0x18c);
              }
              local_c8 = *pfVar5;
              pfVar6 = (float *)(param_1 + 0x14c);
              local_c0 = pfVar5[2];
              local_3c = (uint *)(param_1 + 0x1ec);
              if (uVar9 < 0x20) {
                pfVar6 = pfVar6 + uVar9 * 2;
                local_3c = (uint *)(param_1 + uVar9 + 0x1ec);
              }
              local_bc = &local_c8;
              local_c4 = pfVar5[1] + ALBW_AS_F32(uVar16);
              local_78 = DAT_0024c3a0;
              if (param_1[0xd1] == 0) {
                *pfVar6 = 0.0;
                pfVar6[1] = 0.0;
              }
              else {
                fVar15 = *pfVar6;
                if ((fVar15 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar15) + 0x1c) == pfVar6[1])) {
                  func_00110848((int)ALBW_AS_U32(fVar15));
                }
                func_004A1B9C((int *)&local_e0,param_1[0xd1],(uint *)local_78);
                *pfVar6 = local_e0;
                pfVar6[1] = local_dc;
              }
              func_004D80A4(&fStack_88,*local_3c,ALBW_AS_F32(uVar17));
              local_84 = (undefined4)((ulonglong)uVar16 >> 0x20);
              func_00115C54(&fStack_88,&fStack_88,local_bc);
              uStack_6c = *local_3c;
              local_68 = 0;
              local_70 = 0;
              func_0049216C(afStack_b8,&local_70,&fStack_88);
              fVar15 = *pfVar6;
              if ((fVar15 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar15) + 0x1c) == pfVar6[1])) {
                func_004A2D1C((int)ALBW_AS_U32(fVar15),afStack_b8);
              }
              fStack_d0 = local_7c;
              uStack_cc = DAT_0024c3a4;
              func_0014DBF4(param_1,(int *)&fStack_d0,&fStack_88,0);
              piVar3 = local_48;
              if (uVar9 < 0x20) {
                piVar3 = (int *)((int)local_48 + uVar9);
              }
              *(char *)piVar3 = '\x01';
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < param_1[0x2a2]);
  }
  return;
}

