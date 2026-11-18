#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0051E6AC(int param_1);
extern int func_00522E00(int param_1);
extern float DAT_0016bfe0;
extern float DAT_0016bfe4;
extern float DAT_0016bfe8;
extern int *DAT_0016bfec;
extern float DAT_0016bff0;
extern float DAT_0016bff4;
extern float DAT_0016bff8;
extern float DAT_0016bffc;
extern float DAT_0016c000;

// USA 0016BCBC <- EU 0016BCBC (Ghidra, non-matching)
// GLOBAL DAT_0016bfe0 float
// GLOBAL DAT_0016bfe4 float
// GLOBAL DAT_0016bfe8 float
// GLOBAL DAT_0016bfec int *
// GLOBAL DAT_0016bff0 float
// GLOBAL DAT_0016bff4 float
// GLOBAL DAT_0016bff8 float
// GLOBAL DAT_0016bffc float
// GLOBAL DAT_0016c000 float

void func_0016BCBC(int param_1,float *param_2,float *param_3,int *param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define fStack_48 (*(float *)(albw_frame + 0x18))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  iVar5 = 0xc;
  uVar6 = *(uint *)(*(int *)(*(int *)(*(int *)(*param_4 + 0xc) + param_4[100] * 4) + 0x18) +
                   param_4[0x65] * 0x3c + 0xc);
  if ((uVar6 >> 0x10 & 0x20) == 0) {
    uVar4 = func_00522E00(param_1);
    iVar5 = extraout_r1;
  }
  else if ((*(int *)(param_1 + 0xf74) == 0) ||
          (iVar3 = *(int *)(*(int *)(param_1 + 0xf74) + 0x14), iVar3 == 0)) {
    uVar4 = 3;
  }
  else {
    uVar4 = *(uint *)(iVar3 + 4);
  }
  piVar7 = (int *)(param_1 + 0x284);
  if (uVar4 < 0x33) {
    piVar7 = (int *)(param_1 + 0x284 + uVar4 * 0x38);
  }
  if (*(int *)*piVar7 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int *)*piVar7)[2];
  }
  iVar8 = param_1 + 0x284;
  if (uVar4 < 0x33) {
    iVar8 = param_1 + 0x284 + uVar4 * 0x38;
  }
  piVar7 = (int *)(param_1 + 0x284);
  if (uVar4 < 0x33) {
    piVar7 = (int *)(param_1 + 0x284 + uVar4 * 0x38);
  }
  fVar11 = DAT_0016bfe0;
  fVar16 = DAT_0016bfe4;
  fVar13 = DAT_0016bfe0;
  if (*piVar7 != 0) {
    cVar1 = *(char *)(iVar3 + 0x28);
    fVar10 = DAT_0016bfe8;
    if (cVar1 == '\t') {
      if ((*(uint *)(*(int *)(*(int *)(*(int *)(*param_4 + 0xc) + param_4[100] * 4) + 0x18) +
                    iVar5 + param_4[0x65] * 0x3c) >> 0x10 & 0x40) == 0) {
        fVar14 = *(float *)(param_1 + 0xf88);
      }
      else {
        iVar5 = func_0051E6AC(*DAT_0016bfec);
        fVar14 = *(float *)(iVar5 + 8) * *(float *)(iVar3 + 0x40) +
                 *(float *)(iVar5 + 0x18) * *(float *)(iVar3 + 0x44) +
                 *(float *)(iVar5 + 0x28) * *(float *)(iVar3 + 0x48);
      }
    }
    else {
      fVar14 = DAT_0016bfe8;
      if (cVar1 == '\n' || cVar1 == '\v') {
        iVar5 = func_0051E6AC(*DAT_0016bfec);
        fVar13 = *(float *)(iVar5 + 8);
        fVar14 = *(float *)(iVar5 + 0x18);
        fVar15 = *(float *)(iVar5 + 0x28);
        func_00115C70(&local_4c,param_3,(float *)(iVar3 + 0x1c));
        local_58 = local_4c;
        fStack_54 = fStack_48;
        fStack_50 = fStack_44;
        func_00115DC8(&local_58);
        fVar14 = fVar13 * local_58 + fVar14 * fStack_54 + fVar15 * fStack_50;
      }
    }
    uVar4 = in_fpscr & 0xfffffff;
    in_fpscr = uVar4 | (uint)(fVar14 == DAT_0016bff0) << 0x1e |
               (uint)(DAT_0016bff0 <= fVar14) << 0x1d;
    bVar2 = (byte)(in_fpscr >> 0x18);
    fVar13 = fVar10;
    if (((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) &&
       (uVar4 = uVar4 | (uint)(fVar14 < fVar16) << 0x1f,
       in_fpscr = uVar4 | (uint)(NAN(fVar14) || NAN(fVar16)) << 0x1c, fVar13 = fVar16,
       (byte)(uVar4 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1))) {
      fVar13 = (fVar16 * (fVar14 - DAT_0016bff0)) / DAT_0016bff4 + fVar10;
    }
  }
  fVar14 = DAT_0016c000;
  fVar10 = DAT_0016bffc;
  if (*(int *)(param_1 + 0xf74) == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0xf74) + 0x20);
    uVar4 = 0;
    if (iVar5 != 0) {
      uVar4 = *(uint *)(iVar5 + 4);
    }
    if (iVar5 != 0 && uVar4 != 0) {
      uVar4 = 1;
      goto LAB_0016beec;
    }
  }
  fVar16 = *(float *)(param_1 + 0xf7c);
LAB_0016beec:
  if ((uVar4 & (uVar6 >> 0x10 & 0x80) != 0) != 0) {
    fVar16 = DAT_0016bff8;
    fVar13 = fVar11;
  }
  bVar9 = uVar4 == 0;
  fVar15 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x34),(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = DAT_0016bffc;
  if (bVar9) {
    fVar11 = *(float *)(param_1 + 0xf80);
  }
  *param_2 = (*(float *)(iVar8 + 0x18) + (fVar15 + fVar12 * fVar11) * fVar13 * DAT_0016c000) *
             fVar16 * *param_2;
  fVar15 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x35),(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x39),(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = fVar10;
  if (bVar9) {
    fVar11 = *(float *)(param_1 + 0xf80);
  }
  param_2[1] = (*(float *)(iVar8 + 0x1c) + (fVar15 + fVar12 * fVar11) * fVar13 * fVar14) * fVar16 *
               param_2[1];
  if (bVar9) {
    fVar10 = *(float *)(param_1 + 0xf80);
  }
  fVar11 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x36),(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar3 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
  param_2[2] = (*(float *)(iVar8 + 0x20) + (fVar11 + fVar15 * fVar10) * fVar13 * fVar14) * fVar16 *
               param_2[2];
  return;
}

