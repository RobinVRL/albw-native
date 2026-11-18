#include "ghidra_types.h"

extern int func_0041CAE4(int param_1,undefined1 param_2,float fparam_0);
extern float func_0056D544(int param_1,int param_2);
extern float DAT_00418f2c;
extern float DAT_00418f30;
extern float DAT_00418f34;
extern float DAT_00418f38;
extern float DAT_00418f3c;

// USA 00418D38 <- EU 00418D18 (Ghidra, non-matching)
// GLOBAL DAT_00418f2c float
// GLOBAL DAT_00418f30 float
// GLOBAL DAT_00418f34 float
// GLOBAL DAT_00418f38 float
// GLOBAL DAT_00418f3c float

void func_00418D38(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float *pfVar6;
  char cVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((byte *)(albw_frame + 0x8))
  #define local_50 ((float *)(albw_frame + 0x10))
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x91);
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x14);
    fVar15 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x18);
    if (uVar2 < 2) {
      fVar11 = (float)VectorSignedToFloat(uVar2 - 0x3f,(byte)(in_fpscr >> 0x15) & 3);
    }
    else {
      fVar11 = (float)VectorSignedToFloat(uVar2 - 0x40,(byte)(in_fpscr >> 0x15) & 3);
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x92);
    fVar11 = *(float *)(param_1 + 0x1c) +
             *(float *)(param_1 + 0x60) * (DAT_00418f2c + fVar11 * DAT_00418f34);
    if (uVar2 < 0x40) {
      fVar12 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 * DAT_00418f34;
    }
    else {
      fVar12 = (float)VectorUnsignedToFloat(uVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      fVar12 = fVar12 * DAT_00418f38;
    }
    cVar1 = *(char *)(param_1 + 0x2c);
    cVar7 = *(char *)(param_1 + 0x97);
    if (cVar1 != -1) {
      cVar7 = cVar1;
    }
    fVar16 = *(float *)(param_1 + 0x20) + DAT_00418f2c + fVar12;
    fVar13 = (float)VectorSignedToFloat(*(byte *)(param_1 + 0x96) - 0x40,
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar2 = 0;
    fVar12 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0x98),(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = *(float *)(param_1 + 0x24) + fVar13 * DAT_00418f38;
    fVar12 = fVar12 * DAT_00418f3c;
    if (cVar1 != -1) {
      fVar12 = *(float *)(param_1 + 0x28);
    }
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x93),(byte)(in_fpscr >> 0x15) & 3);
    local_58[0] = *(byte *)(param_1 + 0x94);
    local_58[1] = *(undefined1 *)(param_1 + 0x95);
    fVar14 = *(float *)(param_1 + 0x30) + (fVar9 * DAT_00418f3c - DAT_00418f30);
    fVar9 = DAT_00418f2c;
    fVar17 = DAT_00418f3c;
    do {
      pfVar6 = local_50 + uVar2;
      *pfVar6 = fVar9;
      fVar10 = (float)VectorUnsignedToFloat((uint)local_58[uVar2],(byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar9 + fVar10 * fVar17;
      fVar10 = func_0056D544(param_1,uVar2 & 0xff);
      uVar2 = uVar2 + 1;
      *pfVar6 = fVar10 + *pfVar6;
    } while ((int)uVar2 < 2);
    *(undefined1 *)(*(int *)(param_1 + 0x9c) + 400) = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x191) = *(undefined1 *)(param_1 + 0x35);
    *(int *)(*(int *)(param_1 + 0x9c) + 0x138) = (int)uVar18;
    *(float *)(*(int *)(param_1 + 0x9c) + 0x13c) = fVar15;
    *(float *)(*(int *)(param_1 + 0x9c) + 0x140) = fVar11;
    *(float *)(*(int *)(param_1 + 0x9c) + 0x148) = fVar13;
    func_0041CAE4(*(int *)(param_1 + 0x9c),cVar7,fVar12);
    *(float *)(*(int *)(param_1 + 0x9c) + 0x150) = fVar14;
    *(float *)(*(int *)(param_1 + 0x9c) + 0x154) = local_50[0];
    *(float *)(*(int *)(param_1 + 0x9c) + 0x158) = local_50[1];
    *(float *)(*(int *)(param_1 + 0x9c) + 0x144) = fVar16;
    iVar3 = *(int *)(param_1 + 0x9c);
    uVar8 = *(undefined4 *)(param_1 + 0x84);
    uVar4 = *(undefined4 *)(param_1 + 0x78);
    uVar5 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(iVar3 + 0xb4) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(iVar3 + 0xb8) = uVar8;
    *(undefined4 *)(iVar3 + 0xac) = uVar4;
    *(undefined4 *)(iVar3 + 0xb0) = uVar5;
  }
  return;
}

