#include "ghidra_types.h"

extern int func_0011529C(float *param_1,float *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern float DAT_0036d324;

// USA 0036D100 <- EU 0036D0DC (Ghidra, non-matching)
// GLOBAL DAT_0036d324 float

void func_0036D100(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0x74) != '\0') {
    if (*(char *)(param_1 + 0x75) == '\0') {
      func_0011529C(afStack_40,(float *)(param_1 + 8));
      func_0011549C((float *)(param_1 + 0x50),(float *)(param_1 + 0x2c),afStack_40);
    }
    else {
      fVar3 = *(float *)(param_1 + 8);
      fVar2 = *(float *)(param_1 + 0x2c);
      fVar16 = *(float *)(param_1 + 0x44);
      fVar6 = *(float *)(param_1 + 0xc);
      fVar10 = *(float *)(param_1 + 0x14);
      fVar11 = *(float *)(param_1 + 0x18);
      fVar12 = *(float *)(param_1 + 0x20);
      fVar13 = *(float *)(param_1 + 0x24);
      fVar14 = *(float *)(param_1 + 0x38);
      fVar15 = *(float *)(param_1 + 0x3c);
      fVar9 = *(float *)(param_1 + 0x48);
      fVar4 = *(float *)(param_1 + 0x30);
      fVar17 = *(float *)(param_1 + 0x28);
      fVar7 = *(float *)(param_1 + 0x40);
      fVar18 = *(float *)(param_1 + 0x10);
      fVar5 = *(float *)(param_1 + 0x4c);
      fVar19 = *(float *)(param_1 + 0x1c);
      fVar8 = *(float *)(param_1 + 0x34);
      *(float *)(param_1 + 100) = fVar14 * fVar12 + fVar15 * fVar13 + fVar7 * fVar17;
      *(float *)(param_1 + 0x68) = fVar16 * fVar3 + fVar9 * fVar6 + fVar5 * fVar18;
      *(float *)(param_1 + 0x6c) = fVar16 * fVar10 + fVar9 * fVar11 + fVar5 * fVar19;
      *(float *)(param_1 + 0x70) = fVar16 * fVar12 + fVar9 * fVar13 + fVar5 * fVar17;
      *(float *)(param_1 + 0x50) = fVar2 * fVar3 + fVar4 * fVar6 + fVar8 * fVar18;
      *(float *)(param_1 + 0x54) = fVar2 * fVar10 + fVar4 * fVar11 + fVar8 * fVar19;
      *(float *)(param_1 + 0x58) = fVar2 * fVar12 + fVar4 * fVar13 + fVar8 * fVar17;
      *(float *)(param_1 + 0x5c) = fVar14 * fVar3 + fVar15 * fVar6 + fVar7 * fVar18;
      *(float *)(param_1 + 0x60) = fVar14 * fVar10 + fVar15 * fVar11 + fVar7 * fVar19;
    }
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  fVar3 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x58);
  if (fVar3 == DAT_0036d324 && fVar2 == DAT_0036d324) {
    iVar1 = 0;
  }
  else if (fVar3 < DAT_0036d324) {
    if (fVar2 < DAT_0036d324) {
      if (fVar2 < fVar3) {
        iVar1 = func_004905E0(fVar3 / fVar2);
        iVar1 = -0x40000000 - iVar1;
      }
      else {
        iVar1 = func_004905E0(fVar2 / fVar3);
        iVar1 = iVar1 + -0x80000000;
      }
    }
    else {
      fVar3 = -fVar3;
      if (fVar3 < fVar2) {
        iVar1 = func_004905E0(fVar3 / fVar2);
        iVar1 = iVar1 + 0x40000000;
      }
      else {
        iVar1 = func_004905E0(fVar2 / fVar3);
        iVar1 = -0x80000000 - iVar1;
      }
    }
  }
  else if (fVar2 < DAT_0036d324) {
    fVar2 = -fVar2;
    if (fVar3 < fVar2) {
      iVar1 = func_004905E0(fVar3 / fVar2);
      iVar1 = iVar1 + -0x40000000;
    }
    else {
      iVar1 = func_004905E0(fVar2 / fVar3);
      iVar1 = -iVar1;
    }
  }
  else if (fVar3 < fVar2) {
    iVar1 = func_004905E0(fVar3 / fVar2);
    iVar1 = 0x40000000 - iVar1;
  }
  else {
    iVar1 = func_004905E0(fVar2 / fVar3);
  }
  *param_2 = iVar1;
  return;
}

