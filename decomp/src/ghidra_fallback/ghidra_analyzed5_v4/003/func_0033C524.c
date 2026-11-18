#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001EA96C();
extern void func_002C1540(int param_1,float fparam_0);
extern int func_002C15CC(int param_1,float fparam_0);
extern int func_0049F5FC(undefined4 *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_0033c904;
extern float DAT_0033c908;
extern undefined4 *DAT_0033c90c;
extern undefined4 DAT_0033c910;
extern undefined4 DAT_0033c914;
extern float DAT_0033c918;
extern undefined4 DAT_0033c91c;
extern float DAT_0033c920;
extern int *DAT_0033c924;
extern float DAT_0033c928;
extern float DAT_0033c92c;
extern undefined4 *DAT_0033c930;
extern int DAT_0033c9f8;
extern undefined4 DAT_0033c9fc;

// USA 0033C524 <- EU 0033C500 (Ghidra, non-matching)
// GLOBAL DAT_0033c904 float
// GLOBAL DAT_0033c908 float
// GLOBAL DAT_0033c90c undefined4 *
// GLOBAL DAT_0033c910 undefined4
// GLOBAL DAT_0033c914 undefined4
// GLOBAL DAT_0033c918 float
// GLOBAL DAT_0033c91c undefined4
// GLOBAL DAT_0033c920 float
// GLOBAL DAT_0033c924 int *
// GLOBAL DAT_0033c928 float
// GLOBAL DAT_0033c92c float
// GLOBAL DAT_0033c930 undefined4 *
// GLOBAL DAT_0033c9f8 int
// GLOBAL DAT_0033c9fc undefined4

undefined4 func_0033C524(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 extraout_r1;
  float fVar6;
  float fVar7;
  int *in_r3;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_d8;
  float fVar18;
  float fVar19;
  float fVar20;
  float fparam_0;
  float fVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_f0 (*(float *)(albw_frame + 0x0))
  #define local_ec (*(undefined4 *)(albw_frame + 0x4))
  #define local_e8 (*(float *)(albw_frame + 0x8))
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 (*(float *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define local_cc (*(float *)(albw_frame + 0x24))
  #define local_c8 (*(float *)(albw_frame + 0x28))
  #define local_c4 (*(float *)(albw_frame + 0x2c))
  #define local_c0 (*(float *)(albw_frame + 0x30))
  #define local_bc (*(undefined4 *)(albw_frame + 0x34))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_ac (*(undefined4 *)(albw_frame + 0x44))
  #define local_a8 (*(float *)(albw_frame + 0x48))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_9c (*(undefined4 *)(albw_frame + 0x54))
  #define local_98 (*(float *)(albw_frame + 0x58))
  #define local_94 (*(float *)(albw_frame + 0x5c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x60))
  #define local_8c (*(undefined4 *)(albw_frame + 0x64))
  #define local_88 (*(undefined4 *)(albw_frame + 0x68))
  #define local_84 (*(float *)(albw_frame + 0x6c))
  #define local_80 (*(float *)(albw_frame + 0x70))
  #define local_7c (*(undefined4 *)(albw_frame + 0x74))
  #define local_78 (*(undefined4 *)(albw_frame + 0x78))
  #define local_74 (*(undefined1 * *)(albw_frame + 0x7c))
  #define auStack_70 ((undefined1 *)(albw_frame + 0x80))
  #define local_60 (*(undefined4 *)(albw_frame + 0x90))
  #define local_5c (*(undefined1 *)(albw_frame + 0x94))
  #define local_5b (*(undefined1 *)(albw_frame + 0x95))
  #define local_5a (*(undefined1 *)(albw_frame + 0x96))
  #define local_59 (*(undefined1 *)(albw_frame + 0x97))
  #define local_58 (*(undefined4 *)(albw_frame + 0x98))
  #define local_54 (*(int *)(albw_frame + 0x9c))
  #define local_50 (*(int *)(albw_frame + 0xa0))
  piVar5 = DAT_0033c924;
  fparam_0 = DAT_0033c920;
  fVar7 = DAT_0033c918;
  fVar6 = DAT_0033c908;
  fVar20 = DAT_0033c904;
  fVar18 = ALBW_AS_F32(((ulonglong)in_d8 >> 0x20));
  pfVar8 = (float *)(param_1 + 0x444);
  if (*(char *)(param_1 + 0x45d) == '\0') {
    *(undefined1 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x3d8);
    *(float *)(param_1 + 0x450) = *(float *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x3d8);
    *pfVar8 = *(float *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(param_1 + 0x470) = 0;
    iVar3 = *(int *)(param_1 + 0x43c);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 1;
      return func_004CF478(*(int *)(param_1 + 0x43c),0);
    }
  }
  else {
    fVar17 = *(float *)(param_1 + 0x464);
    bVar12 = *(char *)(param_1 + 0x410) == '\x03';
    if (bVar12) {
      fVar18 = *(float *)(param_1 + 0x518);
    }
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar17 < DAT_0033c904) << 0x1f |
            (uint)(fVar17 == DAT_0033c904) << 0x1e;
    uVar13 = uVar4 | (uint)(NAN(fVar17) || NAN(DAT_0033c904)) << 0x1c;
    if (bVar12) {
      local_bc = *(undefined4 *)(param_1 + 0x51c);
    }
    else {
      fVar18 = *(float *)(param_1 + 0x3dc);
      local_bc = *(undefined4 *)(param_1 + 0x3e0);
    }
    cVar2 = *(char *)(param_1 + 0x45c);
    bVar14 = (byte)(uVar4 >> 0x18);
    bVar11 = (bool)(bVar14 >> 6 & 1);
    local_a8 = DAT_0033c904;
    local_98 = DAT_0033c908;
    local_94 = DAT_0033c908;
    local_8c = 0;
    local_88 = 0;
    local_80 = DAT_0033c908;
    local_74 = auStack_70;
    local_5c = 0;
    local_5b = 0;
    local_78 = 4;
    local_7c = 0;
    local_5a = 0;
    local_60 = 0;
    local_59 = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_b8 = *DAT_0033c90c;
    local_b4 = DAT_0033c90c[1];
    local_b0 = DAT_0033c90c[2];
    bVar12 = bVar14 >> 7 != ((byte)(uVar13 >> 0x1c) & 1);
    local_90 = DAT_0033c910;
    local_a4 = DAT_0033c91c;
    local_a0 = DAT_0033c914;
    local_9c = DAT_0033c914;
    local_84 = DAT_0033c918;
    piVar9 = (int *)(param_1 + 0x440);
    local_ac = DAT_0033c910;
    if (cVar2 == '\0') {
      fVar17 = *(float *)(param_1 + 0x3d0);
      uVar22 = *(undefined4 *)(param_1 + 0x3d4);
      fVar19 = *(float *)(param_1 + 0x3d8);
      local_e4 = DAT_0033c908;
      local_e0 = DAT_0033c904;
      local_dc = DAT_0033c904;
      local_d8 = DAT_0033c904;
      local_d4 = DAT_0033c908;
      local_d0 = DAT_0033c904;
      local_cc = DAT_0033c904;
      local_c8 = DAT_0033c904;
      local_c4 = DAT_0033c908;
      local_f0 = fVar17;
      local_ec = uVar22;
      local_e8 = fVar19;
    }
    else {
      local_88 = *(undefined4 *)(param_1 + 0x43c);
      iVar3 = *(int *)(param_1 + 0x440);
      local_e4 = *(float *)(iVar3 + 0x3b4c);
      local_e0 = *(float *)(iVar3 + 0x3b50);
      local_dc = *(float *)(iVar3 + 0x3b54);
      local_d8 = *(float *)(iVar3 + 0x3b58);
      local_d4 = *(float *)(iVar3 + 0x3b5c);
      local_d0 = *(float *)(iVar3 + 0x3b60);
      local_cc = *(float *)(iVar3 + 0x3b64);
      local_c8 = *(float *)(iVar3 + 0x3b68);
      local_c4 = *(float *)(iVar3 + 0x3b6c);
      local_54 = *piVar9 + 0x3ba4;
      local_50 = *piVar9 + 0x3ba8;
      iVar3 = *piVar9;
      fVar17 = *(float *)(iVar3 + 0x3b40);
      uVar22 = *(undefined4 *)(iVar3 + 0x3b44);
      fVar19 = *(float *)(iVar3 + 0x3b48);
    }
    local_c0 = fVar18;
    if (*(char *)(param_1 + 0x470) != '\0') {
      *(undefined1 *)(param_1 + 0x470) = 0;
      uVar4 = func_00111A64((uint *)(*piVar5 + 0x660));
      fVar15 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar13 >> 0x15) & 3);
      fVar17 = fVar17 + (fVar15 * DAT_0033c928 * fVar7 + fparam_0) * DAT_0033c92c;
      fVar15 = DAT_0033c928;
      fVar21 = DAT_0033c92c;
      uVar4 = func_00111A64((uint *)(*DAT_0033c924 + 0x660));
      fVar16 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar13 >> 0x15) & 3);
      fVar19 = fVar19 + (fVar16 * fVar15 * fVar7 + fparam_0) * fVar21;
    }
    bVar14 = (byte)(uVar13 >> 0x18);
    local_f0 = fVar17;
    local_ec = uVar22;
    local_e8 = fVar19;
    if (*(int *)(param_1 + 0x43c) != 0) {
      if (bVar11 || bVar12) {
        fparam_0 = fVar6;
      }
      func_002C1540(*(int *)(param_1 + 0x43c),fparam_0);
      fVar7 = fVar20;
      if (!bVar11 && !bVar12) {
        fVar7 = fVar6;
      }
      func_002C15CC(*(int *)(param_1 + 0x43c),fVar7);
      uVar22 = 0;
      *(uint *)(*(int *)(param_1 + 0x43c) + 0x164) =
           *(uint *)(*(int *)(param_1 + 0x43c) + 0x164) & 0xfffffffe;
      func_004CF478(*(int *)(param_1 + 0x43c),1);
      if (*(int **)(param_1 + 0x438) != (int *)0x0) {
        func_00169A80(*(int **)(param_1 + 0x438),extraout_r1,uVar22,in_r3);
        func_00168E9C(*(int **)(param_1 + 0x438),*(int *)(param_1 + 0x43c),(int *)0x0);
      }
      func_004CEAF0(*(int *)(param_1 + 0x43c));
    }
    func_001EA96C(*(undefined4 *)(param_1 + 0x440),&local_f0);
    iVar10 = *piVar9;
    iVar3 = 0;
    piVar5 = (int *)*DAT_0033c930;
    if (0 < *piVar5) {
      do {
        piVar9 = *(int **)(piVar5[2] + iVar3 * 4);
        iVar3 = iVar3 + 1;
        *piVar9 = piVar5[3];
        piVar5[3] = (int)piVar9;
      } while (iVar3 < *piVar5);
    }
    *piVar5 = 0;
    iVar3 = 0;
    if (0 < piVar5[5]) {
      do {
        piVar9 = *(int **)(piVar5[7] + iVar3 * 4);
        iVar3 = iVar3 + 1;
        *piVar9 = piVar5[8];
        piVar5[8] = (int)piVar9;
      } while (iVar3 < piVar5[5]);
    }
    piVar5[5] = 0;
    piVar5[10] = 0;
    func_0049F5FC((undefined4 *)(iVar10 + 8));
    func_0049F5FC((undefined4 *)(iVar10 + 0x18));
    cVar1 = *(char *)(*(int *)(param_1 + 0x440) + 0x3bae);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x470) = 1;
      *(undefined1 *)(param_1 + 0x45c) = 0;
      if (cVar2 == '\0') {
        *(float *)(param_1 + 0x450) = *(float *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x3d8);
        *pfVar8 = *(float *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(param_1 + 0x3d8);
        return 0;
      }
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)(param_1 + 0x470) = 1;
    }
    else {
      fVar6 = *(float *)(param_1 + 0x444);
      fVar7 = *(float *)(param_1 + 0x44c);
      *(undefined1 *)(param_1 + 0x45c) = 1;
      bVar12 = cVar2 == '\0';
      if (!bVar12) {
        bVar14 = (byte)(((uint)(fVar18 == fVar20) << 0x1e) >> 0x18);
      }
      *(float *)(param_1 + 0x450) = *pfVar8;
      *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x448);
      *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x44c);
      iVar3 = *(int *)(param_1 + 0x440);
      *pfVar8 = *(float *)(iVar3 + 0x3b40);
      *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(iVar3 + 0x3b44);
      fVar18 = *(float *)(iVar3 + 0x3b48);
      if (!bVar12) {
        bVar12 = (bool)(bVar14 >> 6 & 1);
      }
      *(float *)(param_1 + 0x44c) = fVar18;
      if ((!bVar12) &&
         (fVar6 = fVar6 - *pfVar8, fVar7 = fVar7 - fVar18,
         (int)ALBW_AS_U32(SQRT(fVar6 * fVar6 + fVar7 * fVar7)) < DAT_0033c9f8)) {
        *(undefined4 *)(param_1 + 0x460) = DAT_0033c9fc;
      }
    }
  }
  return 0;
}

