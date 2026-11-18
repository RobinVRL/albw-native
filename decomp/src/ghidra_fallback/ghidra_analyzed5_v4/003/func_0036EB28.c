#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_0036EAF8(undefined4 param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_0036ed04;
extern float DAT_0036ed08;
extern float DAT_0036ed0c;
extern float DAT_0036ed10;
extern float DAT_0036ed14;
extern int DAT_0036ed18;

// USA 0036EB28 <- EU 0036EB04 (Ghidra, non-matching)
// GLOBAL DAT_0036ed04 float
// GLOBAL DAT_0036ed08 float
// GLOBAL DAT_0036ed0c float
// GLOBAL DAT_0036ed10 float
// GLOBAL DAT_0036ed14 float
// GLOBAL DAT_0036ed18 int

/* WARNING: Removing unreachable block (ram,0x0036ec00) */
/* WARNING: Removing unreachable block (ram,0x0036ec08) */
/* WARNING: Removing unreachable block (ram,0x0036ec18) */
/* WARNING: Removing unreachable block (ram,0x0036ecac) */
/* WARNING: Removing unreachable block (ram,0x0036ecb4) */
/* WARNING: Removing unreachable block (ram,0x0036ecc4) */

void func_0036EB28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  fVar8 = func_0036EAF8(param_1,param_2);
  fVar12 = DAT_0036ed08;
  fVar13 = DAT_0036ed04;
  func_0068C794((float *)(param_1 + 0x5c),fVar8,DAT_0036ed0c,DAT_0036ed08,DAT_0036ed04);
  iVar1 = DAT_0036ed18;
  bVar7 = 1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x3d0);
  fVar14 = DAT_0036ed14;
  fVar8 = DAT_0036ed10;
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x3d8);
  do {
    func_004D80A4(local_38,*(int *)(param_1 + 0x48) * uVar6 + *(int *)(param_1 + 0x44),
                  *(float *)(param_1 + 0x5c));
    func_00115C54(local_38,local_38,(float *)(param_1 + 4));
    iVar2 = param_1 + uVar6 * 0xc;
    fVar11 = *(float *)(iVar2 + 0x1c);
    fVar9 = (local_38[0] - fVar11) * fVar8;
    if (fVar9 <= fVar14) {
      fVar9 = -fVar9;
    }
    fVar10 = fVar12;
    if ((fVar12 <= fVar9) && (fVar10 = fVar9, iVar1 < (int)ALBW_AS_U32(fVar9))) {
      fVar10 = fVar13;
    }
    fVar10 = fVar11 + fVar10;
    if ((local_38[0] <= fVar10) || (fVar10 < fVar11)) {
      bVar4 = 1;
      *(float *)(iVar2 + 0x1c) = local_38[0];
    }
    else {
      bVar4 = 0;
      *(float *)(iVar2 + 0x1c) = fVar10;
    }
    pfVar3 = (float *)(iVar2 + 0x24);
    fVar11 = *pfVar3;
    fVar9 = (local_30 - fVar11) * fVar8;
    if (fVar9 <= fVar14) {
      fVar9 = -fVar9;
    }
    fVar10 = fVar12;
    if ((fVar12 <= fVar9) && (fVar10 = fVar9, iVar1 < (int)ALBW_AS_U32(fVar9))) {
      fVar10 = fVar13;
    }
    fVar10 = fVar11 + fVar10;
    if ((local_30 <= fVar10) || (fVar10 < fVar11)) {
      bVar5 = 1;
      *pfVar3 = local_30;
    }
    else {
      bVar5 = 0;
      *pfVar3 = fVar10;
    }
    uVar6 = uVar6 + 1;
    bVar7 = bVar7 & bVar4 & bVar5;
  } while (uVar6 < 3);
  *(byte *)(param_1 + 0x6c) = bVar7;
  return;
}

