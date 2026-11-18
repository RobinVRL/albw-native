#include "ghidra_types.h"

extern void func_002AC858(int param_1,float fparam_0);
extern int func_002ACD14(undefined4 *param_1,int param_2,int param_3);
extern int func_004FCEDC(int param_1,float fparam_0);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_005811E8(int *param_1);
extern float DAT_002b0b48;
extern float DAT_002b0b4c;
extern float DAT_002b0b50;
extern float DAT_002b0b54;
extern float DAT_002b0b58;
extern float DAT_002b0b5c;
extern float DAT_002b0b60;
extern float DAT_002b0b64;
extern float DAT_002b0b68;
extern float DAT_002b0b6c;

// USA 002B074C <- EU 002B0728 (Ghidra, non-matching)
// GLOBAL DAT_002b0b48 float
// GLOBAL DAT_002b0b4c float
// GLOBAL DAT_002b0b50 float
// GLOBAL DAT_002b0b54 float
// GLOBAL DAT_002b0b58 float
// GLOBAL DAT_002b0b5c float
// GLOBAL DAT_002b0b60 float
// GLOBAL DAT_002b0b64 float
// GLOBAL DAT_002b0b68 float
// GLOBAL DAT_002b0b6c float

/* WARNING: Removing unreachable block (ram,0x002b073c) */
/* WARNING: Removing unreachable block (ram,0x002b0744) */
/* WARNING: Removing unreachable block (ram,0x002b0af0) */
/* WARNING: Removing unreachable block (ram,0x002b0af8) */
/* WARNING: Removing unreachable block (ram,0x002b0bc4) */
/* WARNING: Removing unreachable block (ram,0x002b0bcc) */
/* WARNING: Removing unreachable block (ram,0x002b0be0) */
/* WARNING: Removing unreachable block (ram,0x002b0bf4) */
/* WARNING: Removing unreachable block (ram,0x002b0b10) */
/* WARNING: Removing unreachable block (ram,0x002b0b24) */
/* WARNING: Removing unreachable block (ram,0x002b0ba0) */
/* WARNING: Removing unreachable block (ram,0x002b0bb0) */
/* WARNING: Removing unreachable block (ram,0x002b0b2c) */
/* WARNING: Removing unreachable block (ram,0x002b0b40) */

undefined4 func_002B074C(int param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (*(char *)(*(int *)(param_1 + 0x34) + 0x7fc) == '\x05') {
    iVar9 = 1;
  }
  else {
    iVar9 = 0;
    if (*(char *)(*(int *)(param_1 + 0x34) + 0x848) == '\0') {
      bVar2 = true;
      goto LAB_002b0780;
    }
  }
  bVar2 = false;
LAB_002b0780:
  *(short *)(param_1 + 0x2c0) = *(short *)(param_1 + 0x2c0) + 1;
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
  }
  bVar3 = func_00521018(*(int *)(param_1 + 0x34));
  fVar13 = DAT_002b0b48;
  if (bVar3) {
    func_002AC858(param_1,DAT_002b0b48);
  }
  fVar16 = DAT_002b0b50;
  fVar17 = DAT_002b0b4c;
  if ((*(ushort *)(param_1 + 0x38) & 0x20) != 0) {
    uVar4 = *(uint *)(param_1 + 0x204);
    uVar6 = *(uint *)(param_1 + 0x200);
    if (uVar6 < uVar4) {
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0x200) = uVar6;
    }
    fVar10 = fVar17;
    if ((uVar4 != 0 && uVar6 != 0) && (fVar10 = fVar16, uVar6 < uVar4)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * *(float *)(param_1 + 0x208);
    }
    func_0051D0B0((undefined4 *)(*(int *)(param_1 + 0x34) + 1000),*(undefined4 *)(param_1 + 0x90),
                  *(undefined4 *)(param_1 + 0x218),fVar10);
  }
  if (*(uint *)(param_1 + 500) < *(uint *)(param_1 + 0x1f8)) {
    iVar5 = *(uint *)(param_1 + 0x1f8) - *(uint *)(param_1 + 500);
    iVar8 = iVar5;
    if (iVar5 < 2) {
      iVar8 = 1;
    }
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    fVar10 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3c) =
         *(float *)(param_1 + 0x3c) +
         (*(float *)(param_1 + 0x20c) - *(float *)(param_1 + 0x3c)) * (fVar16 / fVar10);
    *(float *)(param_1 + 0x44) =
         *(float *)(param_1 + 0x44) +
         (*(float *)(param_1 + 0x214) - *(float *)(param_1 + 0x44)) * (fVar16 / fVar11);
  }
  else {
    *(float *)(param_1 + 0x44) = fVar17;
    *(float *)(param_1 + 0x3c) = fVar17;
  }
  if (bVar2) {
    *(undefined1 *)(param_1 + 100) = 1;
    fVar10 = DAT_002b0b54;
    uVar6 = *(uint *)(param_1 + 0x230);
    if (uVar6 == 0) {
      bVar3 = true;
      iVar8 = 0;
      fVar11 = fVar16;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x22c);
      bVar3 = false;
      fVar11 = fVar17;
      if ((uVar4 != 0) && (fVar11 = fVar16, uVar4 < uVar6)) {
        fVar11 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
        fVar11 = fVar11 * *(float *)(param_1 + 0x234);
      }
      iVar8 = uVar6 - uVar4;
    }
    pfVar7 = (float *)(*(int *)(param_1 + 0x34) + 0x4f0);
    fVar12 = *(float *)(*(int *)(param_1 + 0x34) + 0x4c4);
    uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_002b0b58 <= fVar12) << 0x1d;
    fVar18 = fVar16 - fVar11;
    if (!SUB41(uVar6 >> 0x1d,0)) {
      fVar12 = DAT_002b0b58;
    }
    iVar5 = iVar8;
    if (iVar8 < 2) {
      iVar5 = 1;
    }
    fVar14 = fVar12 + DAT_002b0b5c;
    fVar15 = fVar12 + DAT_002b0b60;
    *(float *)(param_1 + 0x5c) = DAT_002b0b54 + fVar18 * fVar13;
    *(float *)(param_1 + 0x58) = fVar16 + (fVar14 / fVar12 - fVar16) * fVar11;
    fVar13 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    *(float *)(param_1 + 0x60) = fVar16 + (fVar15 / fVar12 - fVar16) * fVar11;
    fVar12 = *pfVar7;
    *pfVar7 = fVar12 + (fVar16 - fVar12) * (fVar16 / fVar13);
    iVar5 = iVar8;
    if (iVar8 < 2) {
      iVar5 = 1;
    }
    pfVar7 = (float *)(*(int *)(param_1 + 0x34) + 0x574);
    fVar13 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    fVar12 = *pfVar7;
    *pfVar7 = fVar12 + (*(float *)(*(int *)(param_1 + 0x34) + 0x898) - fVar12) * (fVar16 / fVar13);
    fVar13 = DAT_002b0b68;
    if ((((!bVar3) &&
         (uVar4 = *(uint *)(param_1 + 0x22c), fVar11 = fVar17,
         (int)(*(int *)(param_1 + 0x230) - uVar4) < 2)) &&
        (uVar4 = 2 - (*(int *)(param_1 + 0x230) - uVar4), fVar11 = fVar16, uVar4 != 2)) &&
       ((fVar11 = fVar17, uVar4 != 0 && (fVar11 = fVar16, uVar4 < 2)))) {
      fVar11 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar6 >> 0x15) & 3);
      fVar11 = fVar11 * DAT_002b0b64;
    }
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x238);
    *(float *)(param_1 + 0x74) = fVar11 * fVar13;
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x240) + fVar11 * fVar13;
    iVar5 = func_00520FC0();
    fVar13 = *(float *)(iVar5 + 4) + DAT_002b0b6c;
    fVar11 = *(float *)(*(int *)(param_1 + 0x34) + 0x3d4);
    uVar6 = uVar6 & 0xfffffff | (uint)(fVar11 < fVar13) << 0x1f | (uint)(fVar11 == fVar13) << 0x1e;
    bVar1 = (byte)(uVar6 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar11) || NAN(fVar13))) {
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(uVar6 >> 0x15) & 3);
      *(float *)(*(int *)(param_1 + 0x34) + 0x3d4) = fVar11 + (fVar13 - fVar11) * (fVar16 / fVar12);
    }
    func_004FCEDC(*(int *)(param_1 + 0x34) + 0x5a8,
                  fVar10 * fVar18 * *(float *)(*(int *)(*(int *)(param_1 + 0x34) + 0x2d0) + 0x2c));
  }
  if (*(uint *)(param_1 + 500) < *(uint *)(param_1 + 0x1f8)) {
    *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) + 1;
  }
  if (*(uint *)(param_1 + 0x22c) < *(uint *)(param_1 + 0x230)) {
    *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) + 1;
  }
  if (*(uint *)(param_1 + 500) < *(uint *)(param_1 + 0x1f8)) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(float *)(param_1 + 0x30) = fVar16;
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(float *)(param_1 + 0x30) = fVar17;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x1f8) <= *(uint *)(param_1 + 500)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(float *)(param_1 + 0x30) = fVar17;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (bVar2) {
    if (*(char *)(param_1 + 0x228) == '\0') {
      if (*(uint *)(param_1 + 0x2c) <= *(uint *)(param_1 + 0x28)) {
        *(undefined1 *)(param_1 + 0x228) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 1;
        *(float *)(param_1 + 0x30) = fVar16;
        *(undefined4 *)(param_1 + 0x28) = 0;
        iVar8 = func_005811E8((int *)(param_1 + 0x2b8));
        if (((iVar8 != 0) && (iVar8 = *(int *)(param_1 + 0x2b8), iVar8 != 0)) &&
           (*(int *)(iVar8 + 0x1c) == *(int *)(param_1 + 700))) {
          iVar5 = *(int *)(iVar8 + 0x20);
          if (((iVar5 != 0) && (*(int *)(iVar8 + 0x24) == *(int *)(iVar5 + 0xc))) &&
             (0 < *(int *)(iVar5 + 4))) {
            *(undefined1 *)(iVar5 + 0x280) = 1;
          }
          *(uint *)(iVar8 + 0x3c) = *(uint *)(iVar8 + 0x3c) & 0xfffffffb | 8;
        }
      }
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x21c);
      uVar4 = *(uint *)(param_1 + 0x220);
      if (uVar6 < uVar4) {
        uVar6 = uVar6 + 1;
        *(uint *)(param_1 + 0x21c) = uVar6;
      }
      *(uint *)(param_1 + 0x2c) = (uint)(uVar4 > uVar6);
      if (uVar4 <= uVar6) {
        *(float *)(param_1 + 0x30) = fVar17;
      }
      else {
        *(float *)(param_1 + 0x30) = fVar16;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return func_002ACD14((undefined4 *)param_1,iVar9,0);
}

