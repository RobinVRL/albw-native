/* USA 0016DAD0 (EU 0016DAD0): the generated Ghidra text did not compile (a float moved into a
 * local Ghidra typed int*: "(int *)pfVar10[0xc]"), so the function was a tripwire stub. Fixed as
 * a bit copy (the EU code copies the word); rest unchanged. Confidence: medium (the rest of
 * this large float-heavy function is unreviewed Ghidra output).
 * BOOT_LOG 160av: the model's bounding sphere / box (+0xD0..+0xF4: centre, radius, min, max) were
 * stored as `param_1[i] = <float>` into an undefined4 array - a VALUE conversion (radius 1.3 -> the
 * integer 1). Now bit copies (ALBW_AS_U32), as in the converted text and the ARM (vstr). With radius
 * bits 0x00000001 (a denormal) the scene registration 004CE0BC (`0 < radius`) failed for models
 * without a culling flag: Link's wall painting (merged into a wall) was never drawn. */
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174();
extern int func_00103CBC(char *param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C8C(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern int func_0056613C(int param_1,int *param_2,int *param_3);
extern int func_00566350(int *param_1,int param_2,byte *param_3,int param_4,int param_5);
extern int func_00566A28(int *param_1,int param_2,uint *param_3,int param_4,int param_5,int *param_6);
extern int func_0058BAF0(int param_1,int param_2);
extern undefined4 DAT_0016e324;
extern int *DAT_0016e328;
extern float DAT_0016e32c;
extern undefined4 DAT_0016e330;
extern undefined *DAT_0016e334;
extern undefined4 *DAT_0016e338;
extern uint DAT_0016e33c;
extern undefined4 DAT_0016e340;
extern uint DAT_0016e344;
extern float DAT_0016e348;
extern uint *DAT_0016e34c;
extern undefined4 *DAT_0016e350;

// USA 0016DAD0 <- EU 0016DAD0 (Ghidra, non-matching)
// GLOBAL DAT_0016e324 undefined4
// GLOBAL DAT_0016e328 int *
// GLOBAL DAT_0016e32c float
// GLOBAL DAT_0016e330 undefined4
// GLOBAL DAT_0016e334 undefined *
// GLOBAL DAT_0016e338 undefined4 *
// GLOBAL DAT_0016e33c uint
// GLOBAL DAT_0016e340 undefined4
// GLOBAL DAT_0016e344 uint
// GLOBAL DAT_0016e348 float
// GLOBAL DAT_0016e34c uint *
// GLOBAL DAT_0016e350 undefined4 *

void func_0016DAD0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                  int param_5)

{
  ushort uVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int *piVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint unaff_r7;
  float *pfVar21;
  uint *unaff_r8;
  undefined1 uVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar29;
  undefined8 uVar28;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  undefined1 uVar38;
  float *pfVar39;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 ((float *)(albw_frame + 0x8))
  #define local_68 (*(int * *)(albw_frame + 0x68))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define fStack_60 (*(float *)(albw_frame + 0x70))
  #define local_5c (*(int *)(albw_frame + 0x74))
  #define aiStack_58 ((int *)(albw_frame + 0x78))
  param_1[2] = param_5;
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined4 *)(param_5 + 0x90) = param_4;
  local_5c = 3;
  func_0056613C(param_1[2],param_1 + 0x13,&local_5c);
  local_68 = param_1 + 0x13;
  piVar23 = (int *)0x0;
  do {
    puVar16 = param_1 + (int)piVar23 * 3 + 3;
    piVar6 = param_2;
    if (param_2 == (int *)0x0) {
      piVar6 = (int *)func_0010DB90();
    }
    local_64 = ALBW_AS_F32((**(code **)(*piVar6 + 0x18))(piVar6,param_1[0x13],4));
    iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,param_1[0x14],4);
    func_00566A28(aiStack_58,param_1[2],puVar16,(int)ALBW_AS_U32(local_64),iVar7,local_68);
    uVar20 = 0;
    if (puVar16[1] != 0) {
      do {
        uVar11 = uVar20 + 1;
        puVar8 = (ushort *)(*puVar16 + uVar20 * 0x154);
        uVar1 = *puVar8;
        if ((uVar1 & 1) == 0) {
          *puVar8 = uVar1 & 0xfeff;
        }
        uVar20 = uVar11;
      } while (uVar11 < puVar16[1]);
    }
    piVar23 = (int *)((int)piVar23 + 1);
    puVar16[2] = 0xffffffff;
  } while ((int)piVar23 < 2);
  param_1[9] = param_1 + 3;
  piVar6 = param_2;
  if (param_2 == (int *)0x0) {
    piVar6 = (int *)func_0010DB90();
  }
  iVar7 = (**(code **)(*piVar6 + 0x18))(piVar6,param_1[0x15],4);
  func_00566350(aiStack_58,param_1[2],(byte *)(param_1 + 10),iVar7,(int)local_68);
  iVar7 = *DAT_0016e328;
  uVar20 = (uint)*(ushort *)(param_1[2] + 0x38);
  if ((uVar20 != 0) && (iVar9 = func_0010CEE0(uVar20 << 2,param_2,4), iVar9 != 0)) {
    param_1[0x2c] = iVar9;
    param_1[0x2b] = uVar20;
  }
  uVar20 = 0;
  if (*(short *)(param_1[2] + 0x38) != 0) {
    do {
      iVar9 = uVar20 * 0xb;
      uVar11 = param_1[0x2b];
      if (uVar11 <= uVar20) {
        piVar23 = (int *)param_1[0x2c];
      }
      if (uVar20 < uVar11) {
        iVar9 = param_1[0x2c];
      }
      if (uVar20 < uVar11) {
        piVar23 = (int *)(iVar9 + uVar20 * 4);
      }
      iVar9 = func_0058BAF0(iVar7,*(int *)(*(int *)(*(int *)(param_1[2] + 0x34) + uVar20 * 0x2c) + 8
                                          ));
      *piVar23 = iVar9;
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(ushort *)(param_1[2] + 0x38));
  }
  uVar20 = (uint)*(ushort *)(param_1[2] + 0x38);
  if ((uVar20 != 0) && (iVar7 = func_0010CEE0(uVar20,param_2,4), iVar7 != 0)) {
    param_1[0x2e] = iVar7;
    param_1[0x2d] = uVar20;
  }
  uVar20 = param_1[0x2d];
  if (0 < (int)uVar20) {
    uVar11 = uVar20 & 1;
    if (uVar11 == 1) {
      *(undefined1 *)param_1[0x2e] = 1;
    }
    uVar14 = (uint)(uVar11 == 1);
    for (; (int)uVar11 < (int)uVar20; uVar11 = uVar11 + 2) {
      *(undefined1 *)(param_1[0x2e] + uVar14) = 1;
      *(undefined1 *)(param_1[0x2e] + uVar14 + 1) = 1;
      uVar14 = uVar14 + 2;
    }
  }
  uVar20 = (uint)*(ushort *)(param_1[2] + 0x38);
  if ((uVar20 != 0) && (iVar7 = func_0010CEE0(uVar20,param_2,4), iVar7 != 0)) {
    param_1[0x30] = iVar7;
    param_1[0x2f] = uVar20;
  }
  uVar20 = param_1[0x2f];
  if (0 < (int)uVar20) {
    uVar11 = uVar20 & 1;
    if (uVar11 == 1) {
      *(undefined1 *)param_1[0x30] = 0;
    }
    uVar14 = (uint)(uVar11 == 1);
    for (; (int)uVar11 < (int)uVar20; uVar11 = uVar11 + 2) {
      *(undefined1 *)(param_1[0x30] + uVar14) = 0;
      *(undefined1 *)(param_1[0x30] + uVar14 + 1) = 0;
      uVar14 = uVar14 + 2;
    }
  }
  uVar20 = (uint)*(ushort *)(param_1[2] + 0x38);
  if ((uVar20 != 0) && (iVar7 = func_0010CEE0(uVar20 << 2,param_2,4), iVar7 != 0)) {
    param_1[0x3f] = iVar7;
    param_1[0x3e] = uVar20;
  }
  uVar20 = 0;
  if (0 < (int)param_1[0x2d]) {
    do {
      puVar15 = (undefined4 *)param_1[0x3f];
      uVar38 = 1;
      if (uVar20 < (uint)param_1[0x3e]) {
        puVar15 = puVar15 + uVar20;
      }
      uVar22 = 0;
      uVar11 = 0;
      *puVar15 = *(undefined4 *)(*(int *)(*(int *)(param_1[2] + 0x34) + uVar20 * 0x2c) + 0xd0);
      iVar7 = *(int *)(*(int *)(param_1[2] + 0x34) + uVar20 * 0x2c);
      puVar16 = *(uint **)(iVar7 + 0xd0);
      puVar19 = puVar16 + *(int *)(iVar7 + 0xcc);
      if (puVar16 == puVar19) {
        bVar2 = false;
        puVar17 = puVar16;
      }
      else {
        unaff_r7 = puVar16[1] & 0xffff;
        bVar2 = true;
        puVar17 = puVar16 + ((puVar16[1] << 4) >> 0x18) + 2;
        if (puVar19 <= puVar16 + ((puVar16[1] << 4) >> 0x18) + 2) {
          puVar17 = puVar19;
        }
        unaff_r8 = puVar16;
        if ((puVar17 != puVar19) && (((int)puVar17 - (int)puVar16) * 0x20000000 < 0)) {
          puVar17 = puVar17 + 1;
        }
      }
      uVar4 = 0;
      uVar5 = 1;
      if (bVar2) {
        do {
          uVar38 = uVar5;
          uVar22 = uVar4;
          if ((unaff_r7 & 0xffff) == 0x104) {
            uVar11 = uVar11 | 2;
            if ((*unaff_r8 & 1) != 0) {
              uVar22 = 1;
            }
          }
          else if (((unaff_r7 & 0xffff) == 0x107) &&
                  (uVar11 = uVar11 | 1, (*unaff_r8 & 0x1000) != 0)) {
            uVar38 = 0;
          }
          if (uVar11 == 3) break;
          if (puVar17 == puVar19) {
            puVar18 = puVar17;
            bVar2 = false;
          }
          else {
            unaff_r7 = puVar17[1] & 0xffff;
            puVar18 = puVar17 + ((puVar17[1] << 4) >> 0x18) + 2;
            if (puVar19 <= puVar17 + ((puVar17[1] << 4) >> 0x18) + 2) {
              puVar18 = puVar19;
            }
            unaff_r8 = puVar17;
            bVar2 = true;
            if ((puVar18 != puVar19) &&
               (bVar2 = true, ((int)puVar18 - (int)puVar16) * 0x20000000 < 0)) {
              puVar18 = puVar18 + 1;
            }
          }
          puVar17 = puVar18;
          uVar4 = uVar22;
          uVar5 = uVar38;
        } while (bVar2);
      }
      puVar12 = (undefined1 *)param_1[0x2e];
      if (uVar20 < (uint)param_1[0x2d]) {
        puVar12 = puVar12 + uVar20;
      }
      *puVar12 = uVar38;
      puVar12 = (undefined1 *)param_1[0x30];
      if (uVar20 < (uint)param_1[0x2f]) {
        puVar12 = puVar12 + uVar20;
      }
      uVar20 = uVar20 + 1;
      *puVar12 = uVar22;
    } while ((int)uVar20 < (int)param_1[0x2d]);
  }
  uVar28 = CONCAT44(DAT_0016e330,DAT_0016e32c);
  bVar2 = false;
  uVar33 = CONCAT44(DAT_0016e330,DAT_0016e330);
  fVar30 = DAT_0016e32c;
  fVar31 = DAT_0016e32c;
  func_00100118((int)local_c8,DAT_0016e334,0xc,8);
  uVar20 = DAT_0016e33c;
  puVar15 = DAT_0016e338;
  uVar11 = 0;
  if (*(int *)(param_1[2] + 0x44) != 0) {
    uVar37 = (ulonglong)DAT_0016e344;
    fVar26 = DAT_0016e348;
    uVar35 = DAT_0016e340;
    do {
      iVar7 = *(int *)(param_1[2] + 0x40) + uVar11 * 0x38;
      iVar9 = *(int *)(iVar7 + 0x34);
      if (iVar9 == 0) break;
      puVar16 = (uint *)*puVar15;
      uVar14 = func_00103CBC((char *)puVar16);
      uVar14 = func_00564ABC((short *)(iVar9 + 4),puVar16,uVar14);
      if (uVar14 != uVar20) {
        pfVar10 = *(float **)(**(int **)(iVar7 + 0x34) + uVar14 * 0xc + 8);
        local_68 = *(int **)&pfVar10[0xc];   /* bit copy of the float (Vec3 x) */
        local_64 = pfVar10[0xd];
        fStack_60 = pfVar10[0xe];
        pfVar39 = pfVar10 + 3;
        if (((*DAT_0016e34c & 1) == 0) &&
           (iVar7 = func_00100174((int *)DAT_0016e34c), puVar3 = DAT_0016e350, iVar7 != 0)) {
          puVar13 = DAT_0016e350 + 7;
          *DAT_0016e350 = uVar35;
          puVar3[1] = uVar35;
          puVar3[2] = uVar35;
          uVar36 = (undefined4)uVar37;
          puVar3[3] = uVar36;
          puVar3[4] = uVar35;
          puVar3[5] = uVar35;
          puVar3[6] = uVar36;
          *puVar13 = uVar35;
          puVar3[8] = uVar36;
          puVar3[9] = uVar35;
          puVar3[10] = uVar35;
          puVar3[0xb] = uVar36;
          puVar3[0xc] = uVar35;
          puVar3[0xd] = uVar36;
          puVar3[0xe] = uVar35;
          puVar3[0xf] = uVar36;
          puVar3[0x10] = uVar36;
          puVar3[0x11] = uVar35;
          puVar3[0x12] = uVar36;
          puVar3[0x13] = uVar36;
          puVar3[0x14] = uVar36;
          puVar3[0x15] = uVar35;
          puVar3[0x16] = uVar36;
          puVar3[0x17] = uVar36;
        }
        func_00115D70((float *)&local_68,(float *)&local_68,fVar26);
        puVar3 = DAT_0016e350;
        iVar7 = 0;
        do {
          pfVar21 = local_c8 + iVar7 * 3;
          func_00115C8C(pfVar21,(float *)(puVar3 + iVar7 * 3),(float *)&local_68);
          func_00115CE4(pfVar21,pfVar39,pfVar21);
          func_00115C54(pfVar21,pfVar21,pfVar10);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        iVar7 = 0;
        do {
          iVar9 = iVar7 + 1;
          fVar24 = local_c8[iVar7 * 3];
          fVar25 = local_c8[iVar7 * 3 + 1];
          if (fVar24 < fVar30) {
            fVar30 = fVar24;
          }
          fVar27 = local_c8[iVar7 * 3 + 2];
          if (fVar25 < fVar31) {
            fVar31 = fVar25;
          }
          fVar29 = ALBW_AS_F32(((ulonglong)uVar28 >> 0x20));
          if (fVar27 < ALBW_AS_F32(uVar28)) {
            uVar28 = CONCAT44(fVar29,fVar27);
          }
          if (fVar29 <= fVar24) {
            uVar28 = CONCAT44(fVar24,(int)uVar28);
          }
          fVar24 = ALBW_AS_F32(((ulonglong)uVar33 >> 0x20));
          if (ALBW_AS_F32(uVar33) <= fVar25) {
            uVar33 = CONCAT44(fVar24,fVar25);
          }
          if (fVar24 <= fVar27) {
            uVar33 = CONCAT44(fVar27,(int)uVar33);
          }
          iVar7 = iVar9;
        } while (iVar9 < 8);
        bVar2 = true;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1[2] + 0x44));
    if (bVar2) {
      fVar29 = ALBW_AS_F32(((ulonglong)uVar28 >> 0x20));
      fVar27 = ALBW_AS_F32(uVar28);
      fVar34 = ALBW_AS_F32(((ulonglong)uVar33 >> 0x20));
      fVar32 = ALBW_AS_F32(uVar33);
      param_1[0x36] = ALBW_AS_U32((fVar27 + fVar34) * fVar26);
      param_1[0x34] = ALBW_AS_U32((fVar30 + fVar29) * fVar26);
      param_1[0x35] = ALBW_AS_U32((fVar31 + fVar32) * fVar26);
      fVar25 = (fVar29 - fVar30) * fVar26;
      fVar24 = (fVar32 - fVar31) * fVar26;
      fVar26 = (fVar34 - fVar27) * fVar26;
      if (fVar24 < fVar25) {
        fVar24 = fVar25;
      }
      if (fVar24 <= fVar26) {
        fVar24 = fVar26;
      }
      param_1[0x37] = ALBW_AS_U32(fVar24);
      param_1[0x38] = ALBW_AS_U32(fVar30);
      param_1[0x39] = ALBW_AS_U32(fVar31);
      param_1[0x3a] = ALBW_AS_U32(fVar27);
      param_1[0x3b] = ALBW_AS_U32(fVar29);
      param_1[0x3c] = ALBW_AS_U32(fVar32);
      param_1[0x3d] = ALBW_AS_U32(fVar34);
    }
  }
  return;
}

