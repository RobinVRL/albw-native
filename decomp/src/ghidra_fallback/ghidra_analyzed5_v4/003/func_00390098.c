#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001E8348(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00588F08(int param_1);
extern int *DAT_003902e4;
extern int *DAT_003902e8;
extern float DAT_003902ec;
extern float DAT_003902f0;
extern float DAT_003902f4;
extern float DAT_003902f8;
extern float DAT_003902fc;
extern int DAT_00390300;
extern float DAT_00390304;
extern float DAT_00390308;
extern float DAT_0039030c;
extern undefined4 *DAT_00390310;

// USA 00390098 <- EU 00390074 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003902e4 int *
// GLOBAL DAT_003902e8 int *
// GLOBAL DAT_003902ec float
// GLOBAL DAT_003902f0 float
// GLOBAL DAT_003902f4 float
// GLOBAL DAT_003902f8 float
// GLOBAL DAT_003902fc float
// GLOBAL DAT_00390300 int
// GLOBAL DAT_00390304 float
// GLOBAL DAT_00390308 float
// GLOBAL DAT_0039030c float
// GLOBAL DAT_00390310 undefined4 *

void func_00390098(int param_1,float *param_2)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define fStack_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  fVar15 = DAT_003902f4;
  fVar19 = DAT_003902f0;
  fVar14 = DAT_003902ec;
  iVar12 = *DAT_003902e4;
  iVar11 = *(int *)(param_1 + 0x4c0);
  iVar13 = *DAT_003902e8;
  iVar10 = *(int *)(iVar12 + 0x18);
  piVar7 = DAT_003902e4;
  if (iVar11 == 0) {
    iVar6 = 1;
    iVar8 = 0;
    iVar9 = 0x32;
    *(int *)(param_1 + 0x4c8) = DAT_003902e8[1] - *(int *)(iVar10 + 0x1a8);
    fVar18 = fVar19;
    do {
      iVar4 = iVar8 * iVar6;
      fVar17 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 / 2;
      fVar16 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = in_fpscr & 0xfffffff;
      in_fpscr = uVar1 | (uint)(fVar19 <= fVar16 * fVar14 * fVar17 * fVar15) << 0x1d;
      fVar17 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = fVar16 * fVar14 * fVar17 * fVar15;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar16 = -fVar16;
      }
      iVar9 = iVar9 + -1;
      fVar18 = fVar16 + fVar18;
    } while (iVar9 != 0);
    fVar15 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = uVar1 | (uint)(fVar15 < fVar19) << 0x1f | (uint)(fVar15 == fVar19) << 0x1e;
    in_fpscr = uVar1 | (uint)(NAN(fVar15) || NAN(fVar19)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar15 = -fVar15;
    }
    iVar6 = (int)((DAT_003902fc - fVar18 * DAT_003902f8) / fVar15);
    piVar7 = (int *)(iVar6 + 100);
    *(int *)(param_1 + 0x4c4) = iVar6;
    *(int **)(param_1 + 0x4c4) = piVar7;
  }
  if (0x95 < iVar11) {
    piVar7 = *(int **)(param_1 + 0x4c4);
  }
  iVar6 = 0;
  piVar3 = (int *)(iVar11 + -0x96);
  if (iVar11 >= 0x96) {
    piVar3 = piVar7;
  }
  if ((int)piVar3 < 0 == (iVar11 < 0x96 && SBORROW4(iVar11,0x96))) {
    fVar15 = (float)VectorSignedToFloat(iVar11 + -0x96,(byte)(in_fpscr >> 0x15) & 3);
    if (((int)ALBW_AS_U32(fVar15) < DAT_00390300) ||
       (fVar18 = (float)VectorSignedToFloat(piVar7,(byte)(in_fpscr >> 0x15) & 3),
       (int)ALBW_AS_U32((fVar18 - fVar15)) < DAT_00390300)) {
      fVar18 = fVar15;
      if (DAT_00390300 <= (int)ALBW_AS_U32(fVar15)) {
        fVar18 = (float)VectorSignedToFloat(piVar7,(byte)(in_fpscr >> 0x15) & 3);
      }
      fVar16 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
      if (DAT_00390300 <= (int)ALBW_AS_U32(fVar15)) {
        fVar18 = fVar18 - fVar15;
      }
      fVar18 = (float)VectorSignedToFloat((int)((fVar18 + DAT_00390304) * fVar18 * DAT_00390308),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar13 = (int)(fVar16 * fVar18 * fVar14);
    }
    fVar14 = (float)VectorSignedToFloat(piVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 == fVar15) << 0x1e;
    if (SUB41(uVar1 >> 0x1e,0)) {
      iVar13 = 0;
      *(undefined4 *)(param_1 + 0x4c4) = 0xffffffff;
    }
    fVar14 = (float)VectorSignedToFloat(iVar13,(byte)(uVar1 >> 0x15) & 3);
    fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x4c8),(byte)(uVar1 >> 0x15) & 3);
    iVar6 = (int)(fVar14 * fVar15 * DAT_0039030c);
  }
  pfVar5 = (float *)func_00588F08(iVar12);
  local_34 = *pfVar5;
  fStack_30 = pfVar5[1];
  local_2c = pfVar5[2];
  func_00115C54(&local_34,&local_34,param_2);
  local_60 = *DAT_00390310;
  uStack_5c = DAT_00390310[1];
  uStack_54 = DAT_00390310[3];
  uStack_50 = DAT_00390310[4];
  uStack_4c = DAT_00390310[5];
  uStack_48 = DAT_00390310[6];
  local_38 = DAT_00390310[10];
  local_58 = *(int *)(iVar10 + 0x1a8) + iVar6;
  local_44 = fVar19;
  local_40 = fVar19;
  local_3c = fVar19;
  func_001E8348(iVar10,&local_34,&local_60);
  *(int *)(param_1 + 0x4c0) = *(int *)(param_1 + 0x4c0) + 1;
  return;
}

