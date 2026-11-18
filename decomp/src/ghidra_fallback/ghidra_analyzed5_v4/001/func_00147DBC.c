#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0024F10C(int param_1);
extern int func_0024F308(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,float fparam_0, float fparam_1);
extern int func_0024FE90(int param_1);
extern int func_002507AC(int param_1,int param_2);
extern int func_00250A30(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,float fparam_0, float fparam_1,float fparam_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0065794C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0014830c;
extern undefined4 *DAT_00148310;
extern int DAT_00148314;
extern uint *DAT_00148318;
extern undefined4 DAT_0014831c;
extern undefined4 *DAT_00148320;
extern float DAT_00148324;
extern float DAT_00148328;
extern uint DAT_0014832c;
extern float DAT_00148330;
extern float DAT_00148334;
extern uint DAT_00148338;
extern uint *DAT_0014833c;
extern undefined4 *DAT_00148340;

// USA 00147DBC <- EU 00147DBC (Ghidra, non-matching)
// GLOBAL DAT_0014830c int *
// GLOBAL DAT_00148310 undefined4 *
// GLOBAL DAT_00148314 int
// GLOBAL DAT_00148318 uint *
// GLOBAL DAT_0014831c undefined4
// GLOBAL DAT_00148320 undefined4 *
// GLOBAL DAT_00148324 float
// GLOBAL DAT_00148328 float
// GLOBAL DAT_0014832c uint
// GLOBAL DAT_00148330 float
// GLOBAL DAT_00148334 float
// GLOBAL DAT_00148338 uint
// GLOBAL DAT_0014833c uint *
// GLOBAL DAT_00148340 undefined4 *

undefined4 func_00147DBC(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  float fVar18;
  float fparam_1;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fparam_0;
  longlong lVar23;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b4 (*(float *)(albw_frame + 0xc))
  #define uStack_b0 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_ac (*(float *)(albw_frame + 0x14))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c ((float *)(albw_frame + 0x24))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x34))
  #define fStack_88 (*(float *)(albw_frame + 0x38))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define fStack_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(float *)(albw_frame + 0x58))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(float *)(albw_frame + 0x64))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(float *)(albw_frame + 0x6c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x70))
  #define fStack_4c (*(float *)(albw_frame + 0x74))
  puVar6 = DAT_00148310;
  piVar8 = DAT_0014830c;
  if (*(char *)(param_1 + 0x2d7) == '\0') {
    puVar3 = (undefined4 *)
             func_005841A8(*DAT_0014830c,*DAT_00148310,*(int **)(DAT_00148314 + *DAT_0014830c));
    uVar2 = DAT_0014831c;
    puVar15 = DAT_00148318;
    puVar13 = *(undefined4 **)(*piVar8 + 0x3dbc8);
    for (; puVar3 != puVar13; puVar3 = (undefined4 *)func_005841A8(*piVar8,*puVar6,puVar3 + 1)) {
      puVar12 = (undefined4 *)*puVar3;
      if (((*puVar15 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00148318), iVar4 != 0)) {
        *DAT_00148320 = uVar2;
      }
      if ((puVar12 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar12)(puVar12,DAT_00148320), iVar4 == 0)) {
        puVar12 = (undefined4 *)0x0;
      }
      if (puVar12 != (undefined4 *)0x0) {
        func_002507AC((int)puVar12,(uint)(*(int *)(param_1 + 0x4a8) == 0));
      }
    }
    puVar14 = (uint *)(param_1 + 0x4ac);
    if (*(char *)(param_1 + 0x440) != '\0') {
      uVar11 = 0;
      do {
        puVar5 = puVar14;
        if (uVar11 < 0x10) {
          puVar5 = puVar14 + uVar11;
        }
        puVar6 = (undefined4 *)func_0052FBA0(*piVar8 + 0x3dbbc,*puVar5);
        if (((*puVar15 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00148318), iVar4 != 0)) {
          *DAT_00148320 = uVar2;
        }
        if ((puVar6 == (undefined4 *)0x0) ||
           (iVar4 = (**(code **)*puVar6)(puVar6,DAT_00148320), iVar4 == 0)) {
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar6 == (undefined4 *)0x0) break;
        func_0024FE90((int)puVar6);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < 0x10);
    }
    func_00115154(&local_a0,local_9c,*(uint *)(param_1 + 1000));
    uVar19 = (ulonglong)DAT_0014832c;
    if (*(short *)(param_1 + 0x49c) == 0) {
      uVar11 = 0;
      if (0 < *(short *)(param_1 + 0x4a4)) {
        fVar21 = DAT_00148328;
        fVar22 = DAT_00148324;
        do {
          local_80 = local_a0 * fVar22;
          local_78 = local_9c[0] * fVar22;
          fVar18 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
          local_7c = fVar21;
          func_00115D70(&local_68,&local_80,fVar18);
          local_b4 = local_68;
          uStack_b0 = uStack_64;
          fStack_ac = local_60;
          func_00115C54(&local_74,(float *)(param_1 + 0x484),&local_b4);
          uVar7 = func_0024F308(*(undefined4 *)(param_1 + 0x4a8),&local_74,uVar11 * 10,
                                (int)*(char *)(param_1 + 0x4a3),fVar22,ALBW_AS_F32(uVar19));
          if (*(int *)(param_1 + 0x4a8) != 0) {
            puVar6 = (undefined4 *)func_0052FBA0(*piVar8 + 0x3dbbc,uVar7);
            if (((*DAT_0014833c & 1) == 0) &&
               (iVar4 = func_00100174((int *)DAT_0014833c), iVar4 != 0)) {
              *DAT_00148340 = uVar2;
            }
            if ((puVar6 == (undefined4 *)0x0) ||
               (iVar4 = (**(code **)*puVar6)(puVar6,DAT_00148340), iVar4 == 0)) {
              puVar6 = (undefined4 *)0x0;
            }
            if (puVar6 != (undefined4 *)0x0) {
              func_0024F10C((int)puVar6);
            }
          }
          piVar9 = (int *)(param_1 + 0x56c);
          if (uVar11 < 0x10) {
            piVar9 = (int *)(param_1 + 0x56c) + uVar11 * 2;
          }
          iVar4 = *piVar9;
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == piVar9[1])) {
            iVar10 = *(int *)(iVar4 + 0x20);
            if ((iVar10 != 0) &&
               ((*(int *)(iVar4 + 0x24) == *(int *)(iVar10 + 0xc) && (0 < *(int *)(iVar10 + 4))))) {
              *(undefined1 *)(iVar10 + 0x280) = 1;
            }
            *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xfffffffb | 8;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)*(short *)(param_1 + 0x4a4));
      }
      *(undefined1 *)(param_1 + 0x2d7) = 1;
      return 0;
    }
    uVar11 = 0;
    if (-1 < *(short *)(param_1 + 0x49c)) {
      lVar23 = (ulonglong)DAT_00148338 << 0x20;
      fVar21 = DAT_00148328;
      fVar22 = DAT_00148324;
      fVar18 = DAT_00148334;
      fparam_0 = DAT_00148330;
      do {
        local_78 = local_a0 * fVar22;
        local_70 = local_9c[0] * fVar22;
        fVar16 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
        fparam_1 = fVar22;
        local_74 = fVar21;
        func_00115D70(&local_b4,&local_78,fVar16);
        local_90 = local_b4;
        uStack_8c = uStack_b0;
        fStack_88 = fStack_ac;
        func_00115C54(&fStack_6c,(float *)(param_1 + 0x484),&local_90);
        fVar16 = fparam_1;
        if (((int)*(short *)(param_1 + 0x49c) - 1U == uVar11) &&
           (*(char *)(param_1 + 0x4a0) != '\0')) {
          lVar23 = CONCAT44((int)((ulonglong)lVar23 >> 0x20),fVar21);
          local_60 = local_a0 * fparam_1;
          local_58 = local_9c[0] * fparam_1;
          fVar20 = fparam_1;
          local_5c = fVar21;
          func_00115D88(&local_54,&local_60,fparam_0);
          local_b4 = local_54;
          uStack_b0 = uStack_50;
          fStack_ac = fStack_4c;
          func_00115C70(&fStack_6c,&fStack_6c,&local_b4);
          fVar16 = ALBW_AS_F32(lVar23);
          uVar7 = in_fpscr & 0xfffffff | (uint)(local_a0 < fVar16) << 0x1f |
                  (uint)(local_a0 == fVar16) << 0x1e;
          in_fpscr = uVar7 | (uint)(NAN(local_a0) || NAN(fVar16)) << 0x1c;
          bVar1 = (byte)(uVar7 >> 0x18);
          fVar17 = local_a0;
          if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar17 = -local_a0;
          }
          fVar16 = fVar18;
          if ((int)ALBW_AS_U32(fVar17) < 0x3f000001) {
            fparam_1 = fVar18;
            fVar16 = fVar20;
          }
        }
        puVar15 = puVar14;
        if (uVar11 < 0x10) {
          puVar15 = puVar14 + uVar11;
        }
        uVar7 = func_00250A30(*(undefined4 *)(param_1 + 0x2cc),&fStack_6c,uVar11 * 10,
                              (int)*(char *)(param_1 + 0x4a3),fVar16,fparam_1,
                              ALBW_AS_F32(((ulonglong)lVar23 >> 0x20)));
        piVar8 = (int *)(param_1 + 0x4ec);
        if (uVar11 < 0x10) {
          piVar8 = (int *)(param_1 + 0x4ec) + uVar11 * 2;
        }
        *puVar15 = uVar7;
        iVar4 = *piVar8;
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == piVar8[1])) {
          iVar10 = *(int *)(iVar4 + 0x20);
          if ((iVar10 != 0) &&
             ((*(int *)(iVar4 + 0x24) == *(int *)(iVar10 + 0xc) && (0 < *(int *)(iVar10 + 4))))) {
            *(undefined1 *)(iVar10 + 0x280) = 1;
          }
          *(uint *)(iVar4 + 0x3c) = *(uint *)(iVar4 + 0x3c) & 0xfffffffb | 8;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)*(short *)(param_1 + 0x49c));
    }
    func_0065794C((undefined4 *)(param_1 + 0x43c),1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

