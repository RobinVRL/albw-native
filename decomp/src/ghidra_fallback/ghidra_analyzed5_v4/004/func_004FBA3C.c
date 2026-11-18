#include "ghidra_types.h"

extern undefined4 DAT_004fbc70;
extern float DAT_004fbc74;
extern undefined4 DAT_004fbc78;
extern undefined4 DAT_004fbc7c;
extern undefined4 DAT_004fbc80;
extern undefined4 DAT_004fbc84;
extern undefined4 DAT_004fbc88;
extern undefined4 DAT_004fbc8c;
extern undefined4 DAT_004fbc90;
extern undefined4 DAT_004fbc94;

// USA 004FBA3C <- EU 004FBA14 (Ghidra, non-matching)
// GLOBAL DAT_004fbc70 undefined4
// GLOBAL DAT_004fbc74 float
// GLOBAL DAT_004fbc78 undefined4
// GLOBAL DAT_004fbc7c undefined4
// GLOBAL DAT_004fbc80 undefined4
// GLOBAL DAT_004fbc84 undefined4
// GLOBAL DAT_004fbc88 undefined4
// GLOBAL DAT_004fbc8c undefined4
// GLOBAL DAT_004fbc90 undefined4
// GLOBAL DAT_004fbc94 undefined4

void func_004FBA3C(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  uVar8 = DAT_004fbc8c;
  uVar6 = DAT_004fbc88;
  uVar5 = DAT_004fbc84;
  uVar4 = DAT_004fbc80;
  uVar3 = DAT_004fbc7c;
  uVar2 = DAT_004fbc78;
  fVar1 = DAT_004fbc74;
  uVar10 = DAT_004fbc70;
  if (param_3 == 1) {
switchD_004fba3c_caseD_1:
    *(undefined4 *)(param_1 + 0x6bc) = 0x16;
    *(undefined4 *)(param_1 + 0x6c0) = uVar10;
    *(undefined4 *)(param_1 + 0x6b8) = 0;
    return;
  }
  if (param_3 == 3) {
switchD_004fba3c_caseD_2:
    *(undefined4 *)(param_1 + 0x6c8) = 0x32;
    *(undefined4 *)(param_1 + 0x6cc) = uVar2;
    *(undefined4 *)(param_1 + 0x6c4) = 0;
    return;
  }
  if (param_3 == 2) {
    *(undefined4 *)(param_1 + 0x728) = 0x2d;
    *(undefined4 *)(param_1 + 0x72c) = uVar3;
    *(undefined4 *)(param_1 + 0x724) = 0;
    return;
  }
  switch(param_2) {
  default:
    return;
  case 1:
    goto switchD_004fba3c_caseD_1;
  case 2:
    goto switchD_004fba3c_caseD_2;
  case 5:
    *(undefined4 *)(param_1 + 0x680) = 0x3c;
    *(undefined4 *)(param_1 + 0x684) = uVar8;
    *(undefined4 *)(param_1 + 0x67c) = 0;
    iVar7 = (int)*(short *)(param_1 + 0x786);
    if (iVar7 < 0) {
      iVar7 = 0x16;
    }
    if (iVar7 == 0) {
      uVar8 = DAT_004fbc90;
    }
    *(int *)(param_1 + 0x68c) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x690) = uVar8;
    }
    else {
      fVar9 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x690) = fVar1 / fVar9;
    }
    *(undefined4 *)(param_1 + 0x688) = 0;
    uVar10 = DAT_004fbc94;
    *(undefined4 *)(param_1 + 0x6a4) = 0x20;
    *(undefined4 *)(param_1 + 0x6a8) = uVar10;
    *(undefined4 *)(param_1 + 0x6a0) = 0;
    iVar7 = (int)*(short *)(param_1 + 0x788);
    if (iVar7 < 0) {
      iVar7 = 0x16;
    }
    if (iVar7 == 0) {
      uVar10 = DAT_004fbc90;
    }
    *(int *)(param_1 + 0x698) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)(param_1 + 0x69c) = uVar10;
    }
    else {
      fVar9 = (float)VectorUnsignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x69c) = fVar1 / fVar9;
    }
    *(undefined4 *)(param_1 + 0x694) = 0;
    return;
  case 6:
    *(undefined4 *)(param_1 + 0x6b0) = 0x1e;
    *(undefined4 *)(param_1 + 0x6b4) = uVar6;
    *(undefined4 *)(param_1 + 0x6ac) = 0;
    return;
  case 8:
    *(undefined4 *)(param_1 + 0x6f8) = 0x32;
    *(undefined4 *)(param_1 + 0x6fc) = uVar2;
    *(undefined4 *)(param_1 + 0x6f4) = 0;
    return;
  case 9:
    *(undefined4 *)(param_1 + 0x704) = 0x18;
    *(undefined4 *)(param_1 + 0x708) = uVar4;
    *(undefined4 *)(param_1 + 0x700) = 0;
    return;
  case 0xb:
    *(undefined4 *)(param_1 + 0x6d4) = 0x46;
    *(undefined4 *)(param_1 + 0x6d8) = uVar5;
    *(undefined4 *)(param_1 + 0x6d0) = 0;
    return;
  case 0xc:
    *(undefined4 *)(param_1 + 0x6ec) = 0x32;
    *(undefined4 *)(param_1 + 0x6f0) = uVar2;
    *(undefined4 *)(param_1 + 0x6e8) = 0;
    return;
  case 0xd:
    *(undefined4 *)(param_1 + 0x6e0) = 0x16;
    *(undefined4 *)(param_1 + 0x6e4) = uVar10;
    *(undefined4 *)(param_1 + 0x6dc) = 0;
    return;
  case 0xe:
    *(undefined4 *)(param_1 + 0x71c) = 0x32;
    *(undefined4 *)(param_1 + 0x720) = uVar2;
    *(undefined4 *)(param_1 + 0x718) = 0;
    return;
  }
}

