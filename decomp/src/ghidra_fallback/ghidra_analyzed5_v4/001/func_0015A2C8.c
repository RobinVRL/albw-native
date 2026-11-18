#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00159E10(int param_1,float *param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0058A7D4(void);
extern int func_00658228(undefined4 *param_1,undefined1 param_2);
extern float DAT_0015a554;
extern float DAT_0015a558;
extern float DAT_0015a55c;
extern float DAT_0015a560;
extern float DAT_0015a564;
extern float DAT_0015a568;
extern int DAT_0015a56c;
extern float DAT_0015a570;
extern float DAT_0015a574;
extern undefined4 DAT_0015a578;

// USA 0015A2C8 <- EU 0015A2CC (Ghidra, non-matching)
// GLOBAL DAT_0015a554 float
// GLOBAL DAT_0015a558 float
// GLOBAL DAT_0015a55c float
// GLOBAL DAT_0015a560 float
// GLOBAL DAT_0015a564 float
// GLOBAL DAT_0015a568 float
// GLOBAL DAT_0015a56c int
// GLOBAL DAT_0015a570 float
// GLOBAL DAT_0015a574 float
// GLOBAL DAT_0015a578 undefined4

undefined4 func_0015A2C8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar15 = DAT_0015a554;
  iVar1 = func_005211F4(param_1,DAT_0015a558,DAT_0015a554);
  fVar11 = DAT_0015a55c;
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 0x968) < *(uint *)(param_1 + 0x96c)) {
      *(uint *)(param_1 + 0x968) = *(uint *)(param_1 + 0x968) + 1;
    }
    else {
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      iVar1 = (int)((ulonglong)uVar4 * 0x28 >> 0x20) + 0x14;
      *(int *)(param_1 + 0x96c) = iVar1;
      if (iVar1 == 0) {
        *(float *)(param_1 + 0x970) = fVar15;
      }
      else {
        fVar12 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x970) = fVar11 / fVar12;
      }
      *(undefined4 *)(param_1 + 0x968) = 0;
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 0x3d0);
      *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0x3d4);
      *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_1 + 0x3d8);
      if (*(char *)(param_1 + 0x974) == '\0') {
        *(undefined4 *)(param_1 + 0x980) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x984) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0x988) = *(undefined4 *)(param_1 + 0x10);
      }
      puVar3 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar3);
      fVar12 = DAT_0015a568;
      fVar10 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      pfVar6 = (float *)(DAT_0015a56c + (uVar4 >> 0x18) * 0x10);
      fVar10 = fVar10 * DAT_0015a560 * fVar11 + DAT_0015a564;
      fVar13 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      fVar14 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x980) =
           *(float *)(param_1 + 0x980) + (*pfVar6 + pfVar6[1] * fVar13 * DAT_0015a568) * fVar10;
      *(float *)(param_1 + 0x988) =
           *(float *)(param_1 + 0x988) + (pfVar6[2] + pfVar6[3] * fVar14 * fVar12) * fVar10;
    }
  }
  else {
    puVar2 = (undefined4 *)func_00520FC0();
    uVar7 = puVar2[1];
    uVar9 = *puVar2;
    *(undefined4 *)(param_1 + 0x988) = puVar2[2];
    *(undefined4 *)(param_1 + 0x984) = uVar7;
    *(undefined4 *)(param_1 + 0x980) = uVar9;
  }
  iVar1 = *(int *)(param_1 + 0x960) - *(int *)(param_1 + 0x95c);
  pfVar6 = (float *)(param_1 + 0x978);
  if (iVar1 < 0x1f) {
    iVar8 = iVar1;
    if (iVar1 < 2) {
      iVar8 = 1;
    }
    fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = *pfVar6 + (fVar15 - *pfVar6) * (fVar11 / fVar12);
  }
  else {
    fVar11 = *pfVar6 + (DAT_0015a570 - *pfVar6) * DAT_0015a574;
  }
  *pfVar6 = fVar11;
  func_00159E10(param_1,(float *)(param_1 + 0x980));
  fVar11 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar11);
  if (*(uint *)(param_1 + 0x95c) < *(uint *)(param_1 + 0x960)) {
    *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) + 1;
    if (*(char *)(param_1 + 0x974) != '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x974) != '\0') {
    return func_00658228((undefined4 *)(param_1 + 0x8bc),3);
  }
  uVar7 = DAT_0015a578;
  if (0x1d < iVar1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x960) = 0x28;
  *(undefined4 *)(param_1 + 0x964) = uVar7;
  *(undefined4 *)(param_1 + 0x95c) = 0;
  return 0;
}

