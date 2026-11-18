#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001329B4(int param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016D37C(int param_1,float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern int func_0051E940(int *param_1,int param_2);
extern float func_00591804(float fparam_0);
extern float fRam0016d798;
extern float fRam0016d79c;
extern float fRam0016d7a0;
extern float fRam0016d7a4;
extern float fRam0016d7a8;
extern float fRam0016d9a8;
extern float fRam0016d9ac;
extern float fRam0016d9bc;
extern undefined4 uRam0016d9a4;
extern undefined4 uRam0016d9b8;
extern float *pfRam0016d9b0;
extern float *pfRam0016d9b4;
extern int *piRam0016d790;
extern int *piRam0016d794;
extern int *piRam0016d7ac;
extern int *piRam0016d7b0;
extern undefined4 *puRam0016d7b4;
extern undefined4 *puRam0016d9a0;
extern float DAT_0016d788;
extern float DAT_0016d78c;

// USA 0016D47C <- EU 0016D47C (Ghidra, non-matching)
// GLOBAL DAT_0016d788 float
// GLOBAL DAT_0016d78c float
// GLOBAL UNK_0016d790 int *
// GLOBAL UNK_0016d794 int *
// GLOBAL UNK_0016d798 float
// GLOBAL UNK_0016d79c float
// GLOBAL UNK_0016d7a0 float
// GLOBAL UNK_0016d7a4 float
// GLOBAL UNK_0016d7a8 float
// GLOBAL UNK_0016d7ac int *
// GLOBAL UNK_0016d7b0 int *
// GLOBAL UNK_0016d7b4 uint *
// GLOBAL UNK_0016d9a0 undefined4 *
// GLOBAL UNK_0016d9a4 undefined4
// GLOBAL UNK_0016d9a8 float
// GLOBAL UNK_0016d9ac float
// GLOBAL UNK_0016d9b0 float *
// GLOBAL UNK_0016d9b4 float *
// GLOBAL UNK_0016d9b8 uint
// GLOBAL UNK_0016d9bc float

void func_0016D47C(int *param_1)

{
  byte bVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  int *piVar10;
  float *pfVar11;
  float fVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define fStack_50 (*(float *)(albw_frame + 0x0))
  #define iStack_4c (*(int *)(albw_frame + 0x4))
  #define iStack_48 (*(int *)(albw_frame + 0x8))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  fVar17 = DAT_0016d78c;
  fVar16 = DAT_0016d788;
  uVar8 = param_1[7];
  iVar4 = param_1[2];
  if ((uint)param_1[6] < uVar8) {
    uVar7 = param_1[6] + 1;
    param_1[6] = uVar7;
    if (uVar8 != 0 && uVar7 != 0) {
      if (uVar7 < uVar8) {
        fVar16 = ALBW_AS_F32(param_1[8]);
        fVar14 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
        fVar16 = fVar16 / (fVar17 - (fVar14 * fVar16 - fVar16));
        uVar8 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar17) << 0x1f |
                (uint)(fVar16 == fVar17) << 0x1e;
        in_fpscr = uVar8 | (uint)(NAN(fVar16) || NAN(fVar17)) << 0x1c;
        bVar1 = (byte)(uVar8 >> 0x18);
        if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_0016d4f8;
      }
      fVar16 = fVar17;
    }
LAB_0016d4f8:
    uVar8 = (uint)*(byte *)(iVar4 + 0x39);
    fVar14 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat(*(byte *)(param_1 + 4) - uVar8,(byte)(in_fpscr >> 0x15) & 3)
    ;
    *(byte *)(iVar4 + 0x39) = (byte)(int)(fVar14 + fVar19 * fVar16);
    fVar14 = (float)VectorSignedToFloat((uint)*(byte *)(iVar4 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat((uint)*(byte *)((int)param_1 + 0x11) -
                                        (uint)*(byte *)(iVar4 + 0x3a),(byte)(in_fpscr >> 0x15) & 3);
    *(char *)(iVar4 + 0x3a) = (char)(int)(fVar14 + fVar19 * fVar16);
    fVar14 = (float)VectorSignedToFloat((uint)*(byte *)(iVar4 + 0x3b),(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat((uint)*(byte *)((int)param_1 + 0x12) -
                                        (uint)*(byte *)(iVar4 + 0x3b),(byte)(in_fpscr >> 0x15) & 3);
    *(char *)(iVar4 + 0x3b) = (char)(int)(fVar14 + fVar19 * fVar16);
    fVar14 = (float)VectorSignedToFloat((uint)*(byte *)(iVar4 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)VectorSignedToFloat((uint)*(byte *)((int)param_1 + 0x13) -
                                        (uint)*(byte *)(iVar4 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
    fVar16 = ALBW_AS_F32((int)(fVar14 + fVar19 * fVar16));
    *(char *)(iVar4 + 0x3c) = SUB41(fVar16,0);
  }
  bVar13 = *(char *)(iVar4 + 0x3c) != '\0';
  cVar2 = '\0';
  if (bVar13) {
    cVar2 = (char)param_1[0xd];
  }
  bVar13 = bVar13 && cVar2 != '\0';
  *(bool *)((int)param_1 + 0x35) = bVar13;
  func_004CF478(*param_1,(uint)bVar13);
  if (*(char *)(*piRam0016d790 + 0x25) == '\0') {
    iVar4 = *param_1;
    if (*(char *)((int)param_1 + 0x35) == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  else {
    iVar4 = *param_1;
    uVar8 = 0;
  }
  func_004CF864(iVar4,uVar8,0xffffffff,fVar16);
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    return;
  }
  fVar14 = fVar17;
  if (*(char *)((int)param_1 + 0x37) != '\0') {
    iVar4 = func_001329B4(*piRam0016d794);
    if ((*(uint *)(iVar4 + 0x2c8) & 2) == 0) {
      iVar5 = iVar4 + 0x68;
    }
    else {
      iVar5 = iVar4 + 500;
    }
    fVar16 = func_00591804(*(float *)(iVar5 + 0x9c));
    fVar16 = (fRam0016d7a4 * (fVar16 * *(float *)(iVar4 + 0x7f8) - fRam0016d79c)) / fRam0016d7a0 +
             fRam0016d798;
    fVar14 = fVar16;
    if (fVar16 < fVar17) {
      fVar16 = fVar17;
      fVar14 = fVar17;
    }
  }
  bVar13 = *(char *)((int)param_1 + 0x36) == '\0';
  if (bVar13) {
    fVar16 = fVar17;
  }
  if (!bVar13) {
    fVar16 = fRam0016d7a8;
  }
  func_0016D37C(*param_1,fVar16);
  iVar4 = *param_1;
  func_00115D70(&fStack_2c,(float *)(iVar4 + 0x74),fVar14);
  piVar10 = (int *)(*(uint *)(iVar4 + 0x164) | 0x40000000);
  *(int **)(iVar4 + 0x164) = piVar10;
  *(float *)(iVar4 + 0x74) = fStack_2c;
  *(undefined4 *)(iVar4 + 0x78) = uStack_28;
  *(undefined4 *)(iVar4 + 0x7c) = uStack_24;
  pfVar9 = (float *)(param_1 + 10);
  iVar4 = *param_1;
  fStack_50 = *(float *)(iVar4 + 0x8c);
  iStack_4c = *(int *)(iVar4 + 0x9c);
  iStack_48 = *(int *)(iVar4 + 0xac);
  func_00115C70(afStack_38,&fStack_50,pfVar9);
  func_004CEAF0(*param_1);
  param_1[10] = (int)ALBW_AS_U32(fStack_50);
  param_1[0xb] = iStack_4c;
  param_1[0xc] = iStack_48;
  iVar4 = iStack_48;
  if (*(char *)((int)param_1 + 0x36) == '\0') goto LAB_0016d95c;
  if (*piRam0016d7ac == 0) {
LAB_0016d7b8:
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)(*(int *)(*piRam0016d7ac + 0x18) + 0x10c) >> 0x1f) + 1;
    if ((iVar4 != 0) && (*piRam0016d7b0 != 0)) {
      piVar10 = *(int **)(*piRam0016d7b0 + 0x44);
      if (((*puRam0016d7b4 & 1) == 0) && (iVar5 = func_00100174((int *)puRam0016d7b4), iVar5 != 0))
      {
        *puRam0016d9a0 = uRam0016d9a4;
      }
      if ((piVar10 == (int *)0x0) ||
         (iVar5 = (**(code **)(*piVar10 + 8))(piVar10,puRam0016d9a0), iVar5 == 0)) {
        piVar10 = (int *)0x0;
      }
      if (piVar10 != (int *)0x0) goto LAB_0016d7b8;
    }
  }
  fVar16 = fRam0016d9bc;
  uVar8 = uRam0016d9b8;
  pfVar3 = pfRam0016d9b4;
  fVar19 = fVar17 / (fVar14 * fRam0016d9a8);
  afStack_38[0] = afStack_38[0] * fVar19;
  fVar14 = fRam0016d9ac;
  if ((fRam0016d9ac <= afStack_38[0]) && (fVar14 = afStack_38[0], fVar17 < afStack_38[0])) {
    fVar14 = fVar17;
  }
  if (iVar4 == 0) {
    fVar20 = pfRam0016d9b0[-2];
  }
  else {
    fVar20 = *pfRam0016d9b0;
  }
  fStack_30 = fStack_30 * fVar19;
  fVar19 = fRam0016d9ac;
  if ((fRam0016d9ac <= fStack_30) && (fVar19 = fStack_30, fVar17 < fStack_30)) {
    fVar19 = fVar17;
  }
  if (iVar4 == 0) {
    fVar17 = pfRam0016d9b0[-1];
  }
  else {
    fVar17 = pfRam0016d9b0[1];
  }
  pfVar11 = pfRam0016d9b4 + 2;
  puVar6 = (ushort *)**(undefined4 **)(*param_1 + 0x20);
  fVar12 = ALBW_AS_F32((uRam0016d9b8 | uRam0016d9b8 << 10));
  iVar5 = 0;
  do {
    piVar10 = (int *)(iVar5 * 3);
    if (iVar5 == 0) {
      fVar15 = *pfVar3;
    }
    else {
      fVar15 = *pfVar11;
    }
    fVar15 = fVar14 * fVar20 + *(float *)(puVar6 + iVar5 * 0xc + 0x7c) + fVar15;
    if ((int)uVar8 < (int)ALBW_AS_U32(fVar15)) {
      fVar15 = fVar15 - fVar16;
    }
    else if ((uint)ALBW_AS_U32(fVar12) < (uint)ALBW_AS_U32(fVar15)) {
      fVar15 = fVar15 + fVar16;
    }
    if (iVar5 == 0) {
      fVar18 = pfVar3[1];
    }
    else {
      fVar18 = pfVar3[3];
    }
    fVar18 = fVar19 * fVar17 + *(float *)(puVar6 + iVar5 * 0xc + 0x7e) + fVar18;
    if ((int)uVar8 < (int)ALBW_AS_U32(fVar18)) {
      fVar18 = fVar18 - fVar16;
    }
    else if ((uint)ALBW_AS_U32(fVar12) < (uint)ALBW_AS_U32(fVar18)) {
      fVar18 = fVar18 + fVar16;
    }
    iVar4 = iVar5 + 1;
    *(float *)(puVar6 + iVar5 * 0xc + 0x7c) = fVar15;
    *(float *)(puVar6 + iVar5 * 0xc + 0x7e) = fVar18;
    pfVar9 = (float *)(*puVar6 | 0x3000);
    *puVar6 = (ushort)pfVar9;
    iVar5 = iVar4;
  } while (iVar4 < 2);
LAB_0016d95c:
  if ((int *)param_1[3] != (int *)0x0) {
    func_00169A80((int *)param_1[3],iVar4,pfVar9,piVar10);
    func_0051E940(*(int **)(*(int *)(param_1[3] + 0x14) + 4),*param_1);
    func_00168E9C((int *)param_1[3],*param_1,(int *)0x0);
  }
  return;
}

