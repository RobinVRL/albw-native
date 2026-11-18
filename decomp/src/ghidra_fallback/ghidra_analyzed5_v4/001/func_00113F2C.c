#include "ghidra_types.h"

extern float DAT_00114108;

// USA 00113F2C <- EU 00113F2C (Ghidra, non-matching)
// GLOBAL DAT_00114108 float

undefined4 func_00113F2C(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  uint uVar10;
  
  fVar4 = DAT_00114108;
  uVar8 = 0;
  iVar5 = *(int *)(param_1 + 0xd8);
  fVar14 = *(float *)(iVar5 + 0x374);
  uVar6 = *(uint *)(iVar5 + 0x188);
  bVar11 = fVar14 == DAT_00114108;
  uVar1 = (uVar6 & 4) >> 2;
  uVar2 = (uVar6 & 0x100) >> 8;
  if (bVar11) {
    fVar14 = *(float *)(iVar5 + 0x378);
  }
  uVar3 = (uVar6 & 0x200) >> 9;
  uVar6 = (uVar6 & 0x2000) >> 0xd;
  if (bVar11 && fVar14 == DAT_00114108) {
    bVar11 = false;
    if (*(float *)(iVar5 + 0x38c) == DAT_00114108) {
      bVar11 = *(float *)(iVar5 + 0x390) == DAT_00114108;
    }
    bVar12 = false;
    if (bVar11) {
      bVar12 = *(float *)(iVar5 + 0x3a4) == DAT_00114108;
    }
    if (bVar12) goto LAB_00113fa8;
  }
  uVar8 = 1;
LAB_00113fa8:
  fVar14 = *(float *)(iVar5 + 0x304);
  iVar7 = *(int *)(iVar5 + 0x300);
  bVar11 = false;
  if (fVar14 == DAT_00114108) {
    fVar14 = *(float *)(iVar5 + 0x308);
    bVar11 = fVar14 == DAT_00114108;
  }
  if (bVar11) {
    fVar14 = *(float *)(iVar5 + 0x30c);
  }
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  bVar11 = !bVar11 || fVar14 != fVar4;
  bVar12 = iVar7 != 0x3f800000;
  bVar13 = *(int *)(param_1 + 200) == 2;
  if ((uVar1 & ~uVar2 & ~uVar3) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 1;
  }
  if ((uVar2 & ~uVar1 & ~uVar3) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 2;
  }
  uVar10 = uVar3 & ~(uVar1 | uVar2);
  uVar9 = (undefined1)uVar10;
  if (uVar10 != 0) {
    uVar9 = 3;
  }
  if (uVar10 != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = uVar9;
  }
  if ((uVar2 & uVar1 & ~uVar3) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 4;
  }
  if ((uVar1 & ~uVar2 & uVar3) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 5;
  }
  if ((uVar3 & uVar2 & ~uVar1) != 0) {
    *(undefined1 *)(param_1 + 0x2a9) = 6;
  }
  *(undefined1 *)(param_1 + 0x2aa) = 0;
  if ((uVar6 & ~uVar8) != 0) {
    *(undefined1 *)(param_1 + 0x2aa) = 1;
  }
  if ((uVar8 & ~uVar6) != 0) {
    *(undefined1 *)(param_1 + 0x2aa) = 2;
  }
  if ((uVar8 & uVar6) != 0) {
    *(undefined1 *)(param_1 + 0x2aa) = 3;
  }
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  if ((bool)(bVar11 & ~bVar12 & ~bVar13)) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
  }
  if ((bool)(bVar12 & ~bVar11 & ~bVar13)) {
    *(undefined1 *)(param_1 + 0x2a8) = 0;
  }
  if ((bool)(bVar13 & ~(bVar11 || bVar12))) {
    *(undefined1 *)(param_1 + 0x2a8) = 1;
  }
  if ((bool)((bVar11 && bVar12) & ~bVar13)) {
    *(undefined1 *)(param_1 + 0x2a8) = 4;
  }
  if ((bool)(bVar11 & ~bVar12 & bVar13)) {
    *(undefined1 *)(param_1 + 0x2a8) = 5;
  }
  if ((bool)(bVar12 & ~bVar11 & bVar13)) {
    *(undefined1 *)(param_1 + 0x2a8) = 6;
  }
  if (bVar13 && (bVar11 && bVar12)) {
    *(bool *)(param_1 + 0x2a8) = bVar13 && (bVar11 && bVar12) || bVar13;
  }
  *(undefined1 *)(param_1 + 0x2ab) = 0;
  *(undefined1 *)(param_1 + 0x2ac) = 0;
  *(undefined1 *)(param_1 + 0x2ad) = 0;
  if ((*(uint *)(iVar5 + 0x188) & 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x2ab) = 1;
  }
  if ((*(uint *)(iVar5 + 0x188) & 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x2ac) = 1;
  }
  if ((*(uint *)(iVar5 + 0x188) & 0x40) != 0) {
    *(undefined1 *)(param_1 + 0x2ad) = 1;
  }
  return (undefined4)param_1;
}

