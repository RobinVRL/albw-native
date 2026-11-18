#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined4 DAT_002263c4;
extern float DAT_002263c8;
extern float DAT_002263cc;
extern float DAT_002263d0;
extern undefined4 DAT_002263d4;
extern undefined4 *DAT_002263d8;
extern uint DAT_002263dc;
extern undefined4 DAT_002263f4;
extern uint DAT_002263f8;
extern float DAT_002263fc;
extern float DAT_00226400;
extern float DAT_00226404;
extern float DAT_00226408;
extern undefined4 *DAT_0022640c;
extern int *DAT_00226410;
extern undefined4 DAT_002266f8;
extern float DAT_002266fc;
extern float DAT_00226700;
extern undefined4 DAT_00226704;
extern float DAT_00226708;
extern undefined4 DAT_0022670c;
extern float DAT_00226710;
extern float DAT_00226714;
extern float DAT_00226718;
extern char s_Actor_Togegoma_kcl_002263e0[];
extern char s_cf_002263e0[];

// USA 00225FDC <- EU 00225FDC (Ghidra, non-matching)
// GLOBAL DAT_002263c4 undefined4
// GLOBAL DAT_002263c8 float
// GLOBAL DAT_002263cc float
// GLOBAL DAT_002263d0 float
// GLOBAL DAT_002263d4 undefined4
// GLOBAL DAT_002263d8 undefined4 *
// GLOBAL DAT_002263dc uint
// GLOBAL DAT_002263f4 undefined4
// GLOBAL DAT_002263f8 uint
// GLOBAL DAT_002263fc float
// GLOBAL DAT_00226400 float
// GLOBAL DAT_00226404 float
// GLOBAL DAT_00226408 float
// GLOBAL DAT_0022640c undefined4 *
// GLOBAL DAT_00226410 int *
// GLOBAL DAT_002266f8 undefined4
// GLOBAL DAT_002266fc float
// GLOBAL DAT_00226700 float
// GLOBAL DAT_00226704 undefined4
// GLOBAL DAT_00226708 float
// GLOBAL DAT_0022670c undefined4
// GLOBAL DAT_00226710 float
// GLOBAL DAT_00226714 float
// GLOBAL DAT_00226718 float
// GLOBAL s_cf_002263e0 string

/* WARNING: Variable defined which should be unmapped: objStack_c8 */

void func_00225FDC(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined2 uVar3;
  uint auVar4 [1];
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define objStack_c8 ((uint *)(albw_frame + 0x8))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b8 (*(float *)(albw_frame + 0x18))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(float *)(albw_frame + 0x2c))
  #define local_a0 (*(float *)(albw_frame + 0x30))
  #define local_9c (*(float *)(albw_frame + 0x34))
  #define local_98 (*(undefined4 *)(albw_frame + 0x38))
  #define local_94 (*(undefined1 * *)(albw_frame + 0x3c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x40))
  #define local_8c ((undefined1 *)(albw_frame + 0x44))
  #define uStack_4d (*(undefined1 *)(albw_frame + 0x83))
  #define local_4c ((uint *)(albw_frame + 0x84))
  iVar6 = func_0054D964(param_1,0);
  *(int *)(param_1 + 0x598) = iVar6;
  *(undefined2 *)(iVar6 + 0x28) = 0xe0;
  *(undefined1 *)(param_1 + 0x751) = 1;
  fVar16 = DAT_002263d0;
  fVar18 = DAT_002263cc;
  fVar21 = DAT_002263c8;
  uVar20 = DAT_002263c4;
  uVar9 = *(undefined4 *)(param_1 + 0x3d0);
  fVar15 = *(float *)(param_1 + 0x3d4);
  fVar17 = *(float *)(param_1 + 0x3d8);
  piVar12 = (int *)(param_1 + 0x598);
  uVar22 = CONCAT44(DAT_002263cc,DAT_002263d0);
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x60) = DAT_002263c4;
  uVar11 = DAT_002263d4;
  *(undefined4 *)(*(int *)(param_1 + 0x598) + 0x58) = uVar20;
  *(undefined4 *)(*piVar12 + 0x5c) = uVar11;
  *(float *)(param_1 + 0x600) = fVar21;
  iVar6 = *piVar12;
  *(undefined4 *)(iVar6 + 4) = uVar9;
  *(float *)(iVar6 + 8) = fVar15 + fVar21 * fVar18;
  *(float *)(iVar6 + 0xc) = fVar17 - fVar21 * fVar16;
  func_004356B4((int *)*piVar12);
  uVar1 = DAT_002263dc;
  puVar8 = DAT_002263d8;
  *(uint *)(*piVar12 + 0x2c) = *(uint *)(*piVar12 + 0x2c) | 0x100000;
  uVar11 = *puVar8;
  uVar9 = puVar8[1];
  *(int *)(param_1 + 0x45c) = param_1;
  *(undefined4 *)(param_1 + 0x460) = uVar11;
  *(undefined4 *)(param_1 + 0x464) = uVar9;
  local_4c[0] = *(uint *)(param_1 + 0x2cc);
  objStack_c8[0] = uVar1;
  auVar4[0] = objStack_c8[0];
  (*(undefined2 *)((char *)&objStack_c8[0] + 0)) = (undefined2)uVar1;
  uVar3 = (undefined2)objStack_c8[0];
  objStack_c8[0] = auVar4[0];
  func_0014EB8C(param_1 + 0x59c,*piVar12,*(undefined2 **)(param_1 + 0x3a0),local_4c,
                *(undefined2 *)(param_1 + 0x54),param_1 + 0x458,uVar3);
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  *(undefined4 **)(param_1 + 0x604) = puVar8;
  local_94 = local_8c;
  uStack_90 = 0x40;
  uStack_4d = 0;
  piVar12 = (int *)(param_1 + 0x604);
  local_98 = DAT_002263f4;
  local_8c[0] = 0;
  func_00111A20((int)&local_98,s_Actor_Togegoma_kcl_002263e0,objStack_c8);
  func_004EDB28(*(int *)(param_1 + 0x604),(int)&local_98);
  func_00491624(&local_bc,DAT_002263f8,0,0);
  fVar21 = DAT_00226404;
  iVar6 = *(int *)(*piVar12 + 0x14);
  fVar18 = local_bc - *(float *)(iVar6 + 0x18);
  bVar13 = DAT_00226400 == fVar18;
  bVar14 = fVar18 <= DAT_00226400;
  if (!bVar14 || bVar13) {
    bVar13 = fVar18 == DAT_002263fc;
    bVar14 = DAT_002263fc <= fVar18;
  }
  if (!bVar14 || bVar13) {
    fVar18 = local_b8 - *(float *)(iVar6 + 0x1c);
    bVar13 = DAT_00226400 == fVar18;
    bVar14 = fVar18 <= DAT_00226400;
    if (!bVar14 || bVar13) {
      bVar13 = fVar18 == DAT_002263fc;
      bVar14 = DAT_002263fc <= fVar18;
    }
    if (!bVar14 || bVar13) {
      fVar18 = local_b4 - *(float *)(iVar6 + 0x20);
      bVar13 = DAT_00226400 == fVar18;
      bVar14 = fVar18 <= DAT_00226400;
      if (!bVar14 || bVar13) {
        bVar13 = fVar18 == DAT_002263fc;
        bVar14 = DAT_002263fc <= fVar18;
      }
      if (!bVar14 || bVar13) {
        fVar18 = local_b0 - *(float *)(iVar6 + 0x24);
        bVar13 = DAT_00226400 == fVar18;
        bVar14 = fVar18 <= DAT_00226400;
        if (!bVar14 || bVar13) {
          bVar13 = fVar18 == DAT_002263fc;
          bVar14 = DAT_002263fc <= fVar18;
        }
        if (!bVar14 || bVar13) {
          fVar18 = local_ac - *(float *)(iVar6 + 0x28);
          bVar13 = DAT_00226400 == fVar18;
          bVar14 = fVar18 <= DAT_00226400;
          if (!bVar14 || bVar13) {
            bVar13 = fVar18 == DAT_002263fc;
            bVar14 = DAT_002263fc <= fVar18;
          }
          if (!bVar14 || bVar13) {
            fVar18 = local_a8 - *(float *)(iVar6 + 0x2c);
            bVar13 = DAT_00226400 == fVar18;
            bVar14 = fVar18 <= DAT_00226400;
            if (!bVar14 || bVar13) {
              bVar13 = fVar18 == DAT_002263fc;
              bVar14 = DAT_002263fc <= fVar18;
            }
            if (!bVar14 || bVar13) {
              fVar18 = local_a4 - *(float *)(iVar6 + 0x30);
              bVar13 = DAT_00226400 == fVar18;
              bVar14 = fVar18 <= DAT_00226400;
              if (!bVar14 || bVar13) {
                bVar13 = fVar18 == DAT_002263fc;
                bVar14 = DAT_002263fc <= fVar18;
              }
              if (!bVar14 || bVar13) {
                fVar18 = local_a0 - *(float *)(iVar6 + 0x34);
                bVar13 = DAT_00226400 == fVar18;
                bVar14 = fVar18 <= DAT_00226400;
                if (!bVar14 || bVar13) {
                  bVar13 = fVar18 == DAT_002263fc;
                  bVar14 = DAT_002263fc <= fVar18;
                }
                if (!bVar14 || bVar13) {
                  fVar18 = local_9c - *(float *)(iVar6 + 0x38);
                  bVar13 = DAT_00226400 == fVar18;
                  bVar14 = fVar18 <= DAT_00226400;
                  if (!bVar14 || bVar13) {
                    bVar13 = fVar18 == DAT_002263fc;
                    bVar14 = DAT_002263fc <= fVar18;
                  }
                  if (!bVar14 || bVar13) {
                    bVar13 = true;
                    goto LAB_002262b4;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar13 = false;
LAB_002262b4:
  if (!bVar13) {
    bVar5 = *(byte *)(iVar6 + 0xa8);
    *(byte *)(iVar6 + 0xa8) = bVar5 | 8;
    fVar18 = DAT_00226408;
    if ((((local_bc == 1.0) && (local_b8 == DAT_00226408 && local_b4 == DAT_00226408)) &&
        (local_b0 == DAT_00226408 && local_ac == 1.0)) &&
       ((local_a8 == DAT_00226408 && local_a4 == DAT_00226408 &&
        (local_a0 == DAT_00226408 && local_9c == 1.0)))) {
      *(float *)(iVar6 + 0x18) = fVar21;
      *(float *)(iVar6 + 0x1c) = fVar18;
      *(float *)(iVar6 + 0x20) = fVar18;
      *(float *)(iVar6 + 0x24) = fVar18;
      *(float *)(iVar6 + 0x28) = fVar21;
      *(float *)(iVar6 + 0x2c) = fVar18;
      *(float *)(iVar6 + 0x30) = fVar18;
      *(float *)(iVar6 + 0x34) = fVar18;
      *(float *)(iVar6 + 0x38) = fVar21;
      bVar5 = bVar5 & 0xfb | 8;
    }
    else {
      func_001151CC((undefined4 *)(iVar6 + 0x18),&local_bc);
      bVar5 = *(byte *)(iVar6 + 0xa8) | 4;
    }
    *(byte *)(iVar6 + 0xa8) = bVar5;
  }
  func_0043625C(*(int **)(*(int *)(param_1 + 0x604) + 0x14),(undefined4 *)(param_1 + 0x3d0));
  func_004ED9C8(*piVar12);
  local_4c[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*piVar12,local_4c);
  puVar8 = DAT_0022640c;
  *(undefined2 *)(*piVar12 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  uVar11 = *puVar8;
  uVar9 = puVar8[1];
  *(int *)(param_1 + 0x43c) = param_1;
  *(undefined4 *)(param_1 + 0x440) = uVar11;
  *(undefined4 *)(param_1 + 0x444) = uVar9;
  *(int *)(*piVar12 + 0x28) = param_1 + 0x438;
  piVar2 = DAT_00226410;
  func_004A7F00(*DAT_00226410,*piVar12,3);
  iVar6 = func_0054D964(param_1,0);
  *(int *)(param_1 + 0x608) = iVar6;
  uVar11 = DAT_002266f8;
  uVar9 = *(undefined4 *)(param_1 + 0x3d0);
  fVar17 = *(float *)(param_1 + 0x3d4);
  fVar15 = *(float *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar6 + 0x60) = DAT_002266f8;
  fVar16 = DAT_00226700;
  fVar18 = DAT_002266fc;
  *(undefined4 *)(*(int *)(param_1 + 0x608) + 0x58) = uVar11;
  *(float *)(*(int *)(param_1 + 0x608) + 0x5c) = fVar21;
  *(float *)(param_1 + 0x61c) = fVar18;
  iVar6 = *(int *)(param_1 + 0x608);
  *(undefined4 *)(iVar6 + 4) = uVar9;
  *(float *)(iVar6 + 8) = fVar17 + fVar16;
  *(float *)(iVar6 + 0xc) = fVar15 - fVar18 * ALBW_AS_F32(uVar22);
  func_004356B4(*(int **)(param_1 + 0x608));
  iVar6 = func_0054D964(param_1,0);
  *(int *)(param_1 + 0x60c) = iVar6;
  uVar10 = *(undefined4 *)(param_1 + 0x3d0);
  fVar15 = *(float *)(param_1 + 0x3d4);
  fVar16 = *(float *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar6 + 0x60) = uVar11;
  fVar18 = DAT_00226708;
  uVar9 = DAT_00226704;
  *(undefined4 *)(*(int *)(param_1 + 0x60c) + 0x58) = uVar11;
  *(undefined4 *)(*(int *)(param_1 + 0x60c) + 0x5c) = uVar9;
  fVar17 = *(float *)(param_1 + 0x61c);
  iVar6 = *(int *)(param_1 + 0x60c);
  *(undefined4 *)(iVar6 + 4) = uVar10;
  *(float *)(iVar6 + 8) = fVar15 + fVar18 + fVar17 * ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
  *(float *)(iVar6 + 0xc) = fVar16 - fVar17 * ALBW_AS_F32(uVar22);
  func_004356B4(*(int **)(param_1 + 0x60c));
  *(undefined2 *)(*(int *)(param_1 + 0x60c) + 0x28) = 0xe5;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  *(undefined4 **)(param_1 + 0x610) = puVar8;
  piVar12 = (int *)(param_1 + 0x610);
  puVar8[6] = *(undefined4 *)(param_1 + 0x60c);
  func_004ED9C8(*(int *)(param_1 + 0x610));
  local_4c[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*piVar12,local_4c);
  *(undefined2 *)(*piVar12 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  func_004A7F00(*piVar2,*piVar12,3);
  iVar6 = func_0054D964(param_1,0);
  *(int *)(param_1 + 0x620) = iVar6;
  uVar9 = *(undefined4 *)(param_1 + 0x3d0);
  fVar16 = *(float *)(param_1 + 0x3d4);
  fVar18 = *(float *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar6 + 0x60) = uVar20;
  uVar11 = DAT_0022670c;
  *(undefined4 *)(*(int *)(param_1 + 0x620) + 0x58) = uVar20;
  *(undefined4 *)(*(int *)(param_1 + 0x620) + 0x5c) = uVar11;
  fVar15 = *(float *)(param_1 + 0x61c);
  iVar6 = *(int *)(param_1 + 0x620);
  *(undefined4 *)(iVar6 + 4) = uVar9;
  *(float *)(iVar6 + 8) = fVar16 + fVar21 + fVar15 * ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
  *(float *)(iVar6 + 0xc) = fVar18 - fVar15 * ALBW_AS_F32(uVar22);
  func_004356B4(*(int **)(param_1 + 0x620));
  *(undefined2 **)(param_1 + 0x688) = *(undefined2 **)(param_1 + 0x3a0);
  local_4c[0] = *(uint *)(param_1 + 0x2cc);
  objStack_c8[0] = uVar1;
  func_0014EB8C(param_1 + 0x624,*(undefined4 *)(param_1 + 0x620),*(undefined2 **)(param_1 + 0x3a0),
                local_4c,*(undefined2 *)(param_1 + 0x54),0,uVar3);
  *(undefined1 *)(param_1 + 0x685) = 0;
  iVar6 = func_0054D964(param_1,0);
  *(int *)(param_1 + 0x614) = iVar6;
  fVar16 = DAT_00226718;
  fVar18 = DAT_00226714;
  fVar21 = DAT_00226710;
  fVar15 = *(float *)(param_1 + 0x3d4);
  fVar17 = *(float *)(param_1 + 0x3d8);
  uVar11 = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar6 + 0x60) = uVar20;
  *(undefined4 *)(*(int *)(param_1 + 0x614) + 0x58) = uVar20;
  *(float *)(*(int *)(param_1 + 0x614) + 0x5c) = fVar21;
  iVar6 = *(int *)(param_1 + 0x614);
  fVar19 = *(float *)(*(int *)(param_1 + 0x598) + 0x5c);
  *(undefined4 *)(iVar6 + 4) = uVar11;
  *(float *)(iVar6 + 8) = fVar15 + fVar21 * fVar18;
  *(float *)(iVar6 + 0xc) = fVar17 - fVar19 * fVar16;
  func_004356B4(*(int **)(param_1 + 0x614));
  *(undefined2 *)(*(int *)(param_1 + 0x614) + 0x28) = 5;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  *(undefined4 **)(param_1 + 0x618) = puVar8;
  puVar8[6] = *(undefined4 *)(param_1 + 0x614);
  func_004ED9C8(*(int *)(param_1 + 0x618));
  local_4c[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x618),local_4c);
  *(undefined2 *)(*(int *)(param_1 + 0x618) + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x754) = 0;
  return;
}

