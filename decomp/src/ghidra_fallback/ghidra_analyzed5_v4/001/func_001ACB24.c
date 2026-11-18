#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0049BB30(uint *param_1,uint param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float DAT_001ace20;
extern float DAT_001ace24;
extern undefined4 DAT_001ace28;
extern float DAT_001ace2c;
extern float DAT_001ace30;
extern float DAT_001ace34;
extern float DAT_001ace38;
extern float DAT_001ace3c;

// USA 001ACB24 <- EU 001ACB24 (Ghidra, non-matching)
// GLOBAL DAT_001ace20 float
// GLOBAL DAT_001ace24 float
// GLOBAL DAT_001ace28 undefined4
// GLOBAL DAT_001ace2c float
// GLOBAL DAT_001ace30 float
// GLOBAL DAT_001ace34 float
// GLOBAL DAT_001ace38 float
// GLOBAL DAT_001ace3c float

void func_001ACB24(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define auStack_60 ((uint *)(albw_frame + 0x10))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  func_0049BB30(auStack_60,*(int *)(param_1 + 0x99c) + *(int *)(param_1 + 0x92c));
  iVar8 = 1;
  piVar6 = (int *)(param_1 + 0x95c);
  do {
    uVar1 = func_00111A64(auStack_60);
    iVar2 = 1;
    do {
      if (piVar6[iVar2] == ((int)((ulonglong)uVar1 * 3 >> 0x20) + 3 + *piVar6 & 7U)) {
        iVar5 = piVar6[iVar8];
        piVar6[iVar8] = piVar6[iVar2];
        piVar6[iVar2] = iVar5;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  iVar2 = *piVar6;
  uVar1 = func_00111A64(auStack_60);
  iVar8 = 1;
  do {
    if (piVar6[iVar8] == ((int)((ulonglong)uVar1 * 3 >> 0x20) + 3 + iVar2 & 7U)) {
      iVar2 = piVar6[iVar8];
      piVar6[iVar8] = *piVar6;
      *piVar6 = iVar2;
      break;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  fVar11 = DAT_001ace20;
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x918) = *(undefined4 *)(param_1 + 0x3d8);
  local_68 = fVar11;
  local_64 = fVar11;
  func_00115154(&local_64,&local_68,
                *(int *)(param_1 + 0x954) + piVar6[*(short *)(param_1 + 0x32)] * 0x20000000);
  local_50 = local_64 * DAT_001ace24;
  local_48 = local_68 * DAT_001ace24;
  local_4c = fVar11;
  func_00115C54(&local_44,(float *)(param_1 + 8),&local_50);
  uVar4 = DAT_001ace28;
  *(float *)(param_1 + 0x8f8) = local_44;
  *(undefined4 *)(param_1 + 0x8fc) = uStack_40;
  *(undefined4 *)(param_1 + 0x900) = uStack_3c;
  pfVar7 = (float *)(param_1 + 0x904);
  *pfVar7 = fVar11;
  *(undefined4 *)(param_1 + 0x908) = uVar4;
  *(float *)(param_1 + 0x90c) = fVar11;
  puVar3 = (uint *)func_0058A7D4();
  fVar15 = DAT_001ace2c;
  uVar1 = func_00111A64(puVar3);
  fVar9 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = fVar9 * DAT_001ace30 * fVar15 + DAT_001ace34;
  fVar9 = DAT_001ace30;
  fVar16 = DAT_001ace34;
  puVar3 = (uint *)func_0058A7D4();
  fVar13 = DAT_001ace38;
  uVar1 = func_00111A64(puVar3);
  fVar10 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar10 * fVar9 * fVar13 + DAT_001ace3c;
  puVar3 = (uint *)func_0058A7D4();
  uVar1 = func_00111A64(puVar3);
  fVar10 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  local_48 = fVar10 * fVar9 * fVar15 + fVar16;
  local_50 = fVar14;
  local_4c = fVar12;
  func_00115C54(pfVar7,pfVar7,&local_50);
  func_00115C54(pfVar7,pfVar7,(float *)(param_1 + 8));
  *(float *)(param_1 + 0x91c) = fVar11;
  func_004FC07C(param_1,0,0xffffffff,0);
  if (*(int *)(param_1 + 0x9a0) == 0) {
    if (*(short *)(param_1 + 0x30) == 0) {
      uVar4 = 0x2d;
    }
    else {
      uVar4 = 0x50;
    }
  }
  else if (*(int *)(param_1 + 0x9a0) == 1) {
    if (*(short *)(param_1 + 0x30) == 0) {
      uVar4 = 0x30;
    }
    else {
      uVar4 = 0x6e;
    }
  }
  else if (*(short *)(param_1 + 0x30) == 0) {
    uVar4 = 0x34;
  }
  else {
    uVar4 = 0x78;
  }
  *(undefined4 *)(param_1 + 0x9a4) = uVar4;
  iVar8 = (*(int *)(param_1 + 0x930) - *(int *)(param_1 + 0x92c)) * 0x1e + -0x1e +
          *(int *)(param_1 + 0x9a4);
  *(int *)(param_1 + 0x9a4) = iVar8;
  *(int *)(param_1 + 0x924) = iVar8;
  if (iVar8 == 0) {
    *(float *)(param_1 + 0x928) = fVar11;
  }
  else {
    fVar11 = (float)VectorUnsignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x928) = fVar13 / fVar11;
  }
  *(undefined4 *)(param_1 + 0x920) = 0;
  return;
}

