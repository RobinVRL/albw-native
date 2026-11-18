#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float DAT_002d4bf0;
extern int *DAT_002d4bf4;
extern int *DAT_002d4bf8;
extern int *DAT_002d4bfc;
extern float DAT_002d4c00;
extern float DAT_002d4c04;
extern float DAT_002d4c08;

// USA 002D4AA8 <- EU 002D4A84 (Ghidra, non-matching)
// GLOBAL DAT_002d4bf0 float
// GLOBAL DAT_002d4bf4 int *
// GLOBAL DAT_002d4bf8 int *
// GLOBAL DAT_002d4bfc int *
// GLOBAL DAT_002d4c00 float
// GLOBAL DAT_002d4c04 float
// GLOBAL DAT_002d4c08 float

undefined4 func_002D4AA8(int *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4,float fparam_5,float fparam_6,float fparam_7,float fparam_8)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ushort *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  int *piVar13;
  int *piVar14;
  
  if ((char)param_1[0xe] == '\0') {
    uVar6 = *(uint *)(param_1[7] + (char)param_1[1] * 8 + 4);
    piVar9 = (int *)(param_1[7] + (char)param_1[1] * 8);
    if ((uVar6 & 1) != 0) {
      piVar9 = (int *)(*piVar9 + *(int *)(param_1[5] + ((int)uVar6 >> 1)));
    }
    (*(code *)*piVar9)();
    iVar7 = *param_1;
    *param_1 = iVar7 + 1;
    if (param_1[4] != 0) {
      fVar11 = (float)VectorUnsignedToFloat(iVar7 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[4],1,fVar11);
    }
  }
  fVar5 = DAT_002d4c08;
  fVar4 = DAT_002d4c04;
  fVar11 = DAT_002d4c00;
  piVar3 = DAT_002d4bfc;
  piVar2 = DAT_002d4bf8;
  piVar9 = DAT_002d4bf4;
  piVar14 = (int *)ALBW_PTR_BITS((fparam_0 * DAT_002d4bf0));
  puVar10 = (ushort *)**(undefined4 **)(param_1[9] + 0x20);
  uVar6 = 0x200000 - (int)DAT_002d4bf4;
  iVar7 = 1;
  do {
    piVar13 = piVar2;
    if ((piVar14 <= piVar9) && (piVar13 = piVar14, 0x3f800000 < (int)piVar14)) {
      piVar13 = piVar3;
    }
    fVar12 = fVar11;
    if (iVar7 != 1) {
      fVar12 = fVar4;
    }
    fVar12 = *(float *)(puVar10 + iVar7 * 0xc + 0x7c) + ALBW_AS_F32(piVar13) * fVar12;
    if ((int)uVar6 < (int)ALBW_AS_U32(fVar12)) {
      fVar12 = fVar12 - fVar5;
    }
    else if ((uVar6 | 0x80000000) < (uint)ALBW_AS_U32(fVar12)) {
      fVar12 = fVar12 + fVar5;
    }
    iVar8 = iVar7 + 1;
    *(float *)(puVar10 + iVar7 * 0xc + 0x7c) = fVar12;
    uVar1 = *puVar10;
    *puVar10 = (ushort)(uVar1 | 0x6000);
    iVar7 = iVar8;
  } while (iVar8 < 3);
  if ((char)param_1[1] != '\0') {
    func_00169A80((int *)param_1[10],puVar10,uVar1 | 0x6000,piVar9);
    return func_00168E9C((int *)param_1[10],param_1[9],(int *)0x0);
  }
  return 0;
}

