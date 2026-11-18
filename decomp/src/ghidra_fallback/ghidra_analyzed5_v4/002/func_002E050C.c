#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00188BE4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, float fparam_0);
extern int func_004905E0(float fparam_0);
extern int *DAT_002e07dc;
extern float DAT_002e07e0;
extern float DAT_002e07e4;
extern float DAT_002e07e8;
extern int *DAT_002e07ec;
extern float DAT_002e07f0;
extern float DAT_002e07f4;

// USA 002E050C <- EU 002E04E8 (Ghidra, non-matching)
// GLOBAL DAT_002e07dc int *
// GLOBAL DAT_002e07e0 float
// GLOBAL DAT_002e07e4 float
// GLOBAL DAT_002e07e8 float
// GLOBAL DAT_002e07ec int *
// GLOBAL DAT_002e07f0 float
// GLOBAL DAT_002e07f4 float

void func_002E050C(int param_1)

{
  int iVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define fStack_50 (*(float *)(albw_frame + 0x0))
  #define fStack_4c (*(float *)(albw_frame + 0x4))
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define fStack_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define fStack_28 (*(float *)(albw_frame + 0x28))
  fVar3 = *(float *)(param_1 + 0x3d0);
  fVar8 = *(float *)(param_1 + 0x3d8);
  iVar1 = *(int *)(param_1 + 0x430);
  if (iVar1 != 0) {
    fVar6 = *(float *)(iVar1 + 0x58) * DAT_002e07e0;
    fVar7 = *(float *)(iVar1 + 0x60) * DAT_002e07e0;
    uVar2 = **(int **)(*DAT_002e07dc + 0x24) + 0x20000000U >> 0x1e;
    if (uVar2 == 0) {
      fVar4 = fVar3 - fVar6;
      fVar5 = fVar3 + fVar6;
      fVar10 = fVar8 - (fVar7 + DAT_002e07e4);
      fVar9 = fVar8 - (fVar7 + DAT_002e07e4 + DAT_002e07e4);
    }
    else if (uVar2 == 1) {
      fVar9 = fVar8 - fVar7;
      fVar10 = fVar8 + fVar7;
      fVar5 = fVar3 - (fVar6 + DAT_002e07e4);
      fVar4 = fVar3 - (fVar6 + DAT_002e07e4 + DAT_002e07e4);
    }
    else if (uVar2 == 2) {
      fVar4 = fVar3 - fVar6;
      fVar5 = fVar3 + fVar6;
      fVar10 = fVar8 + fVar7 + DAT_002e07e8;
      fVar9 = fVar8 + fVar7 + DAT_002e07e4;
    }
    else {
      fVar4 = fVar3;
      fVar5 = fVar3;
      fVar9 = fVar8;
      fVar10 = fVar8;
      if (uVar2 == 3) {
        fVar9 = fVar8 - fVar7;
        fVar10 = fVar8 + fVar7;
        fVar5 = fVar3 + fVar6 + DAT_002e07e8;
        fVar4 = fVar3 + fVar6 + DAT_002e07e4;
      }
    }
    fStack_3c = *(float *)(param_1 + 0x3d0);
    uStack_34 = *(undefined4 *)(param_1 + 0x3d8);
    iVar1 = *DAT_002e07ec;
    fVar5 = fVar5 - fVar4;
    fStack_38 = *(float *)(param_1 + 0x3d4) + DAT_002e07e4;
    uVar2 = func_00111A64((uint *)(iVar1 + 0x660));
    fVar10 = fVar10 - fVar9;
    fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar11 = *(undefined4 *)(param_1 + 0x3d4);
    fVar4 = fVar3 * DAT_002e07f0 * fVar5 + fVar4;
    fVar3 = DAT_002e07f0;
    uVar2 = func_00111A64((uint *)(iVar1 + 0x660));
    fVar8 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fStack_28 = fVar8 * fVar3 * fVar10 + fVar9;
    fStack_30 = fVar4;
    uStack_2c = uVar11;
    func_00115C70(&fStack_50,&fStack_30,&fStack_3c);
    fVar3 = SQRT(fStack_50 * fStack_50 + fStack_48 * fStack_48);
    func_00115C70(&fStack_4c,&fStack_30,&fStack_3c);
    if (fStack_44 == DAT_002e07f4 && fStack_4c == DAT_002e07f4) {
      iVar1 = 0;
    }
    else if (fStack_44 < DAT_002e07f4) {
      if (fStack_4c < DAT_002e07f4) {
        if (fStack_4c < fStack_44) {
          iVar1 = func_004905E0(fStack_44 / fStack_4c);
          iVar1 = -0x40000000 - iVar1;
        }
        else {
          iVar1 = func_004905E0(fStack_4c / fStack_44);
          iVar1 = iVar1 + -0x80000000;
        }
      }
      else {
        fStack_44 = -fStack_44;
        if (fStack_44 < fStack_4c) {
          iVar1 = func_004905E0(fStack_44 / fStack_4c);
          iVar1 = iVar1 + 0x40000000;
        }
        else {
          iVar1 = func_004905E0(fStack_4c / fStack_44);
          iVar1 = -0x80000000 - iVar1;
        }
      }
    }
    else if (fStack_4c < DAT_002e07f4) {
      fStack_4c = -fStack_4c;
      if (fStack_44 < fStack_4c) {
        iVar1 = func_004905E0(fStack_44 / fStack_4c);
        iVar1 = iVar1 + -0x40000000;
      }
      else {
        iVar1 = func_004905E0(fStack_4c / fStack_44);
        iVar1 = -iVar1;
      }
    }
    else if (fStack_44 < fStack_4c) {
      iVar1 = func_004905E0(fStack_44 / fStack_4c);
      iVar1 = 0x40000000 - iVar1;
    }
    else {
      iVar1 = func_004905E0(fStack_4c / fStack_44);
    }
    func_00188BE4(&fStack_3c,iVar1,3,*(undefined4 *)(param_1 + 0x2cc),fVar3);
  }
  return;
}

