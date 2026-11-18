#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004E0CEC(undefined4 param_1,int *param_2,int *param_3);
extern int *DAT_002e095c;
extern float DAT_002e0960;
extern float DAT_002e0964;
extern int *DAT_002e0968;
extern float DAT_002e096c;

// USA 002E0820 <- EU 002E07FC (Ghidra, non-matching)
// GLOBAL DAT_002e095c int *
// GLOBAL DAT_002e0960 float
// GLOBAL DAT_002e0964 float
// GLOBAL DAT_002e0968 int *
// GLOBAL DAT_002e096c float

void func_002E0820(int param_1)

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
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((undefined4 *)(albw_frame + 0x14))
  fVar3 = *(float *)(param_1 + 0x3d0);
  fVar8 = *(float *)(param_1 + 0x3d8);
  iVar1 = *(int *)(param_1 + 0x430);
  if (iVar1 != 0) {
    fVar7 = *(float *)(iVar1 + 0x58) * DAT_002e0960;
    fVar6 = *(float *)(iVar1 + 0x60) * DAT_002e0960;
    uVar2 = **(int **)(*DAT_002e095c + 0x24) + 0x20000000U >> 0x1e;
    if (uVar2 == 0) {
      fVar10 = fVar8 - fVar6;
      fVar4 = fVar3 - fVar7;
      fVar5 = fVar3 + fVar7;
      fVar9 = fVar8 - (fVar6 + DAT_002e0964);
    }
    else if (uVar2 == 1) {
      fVar5 = fVar3 - fVar6;
      fVar9 = fVar8 - fVar6;
      fVar10 = fVar8 + fVar6;
      fVar4 = fVar3 - (fVar7 + DAT_002e0964);
    }
    else if (uVar2 == 2) {
      fVar9 = fVar8 + fVar6;
      fVar4 = fVar3 - fVar7;
      fVar5 = fVar3 + fVar7;
      fVar10 = fVar8 + fVar6 + DAT_002e0964;
    }
    else {
      fVar4 = fVar3;
      fVar5 = fVar3;
      fVar9 = fVar8;
      fVar10 = fVar8;
      if (uVar2 == 3) {
        fVar9 = fVar8 - fVar6;
        fVar10 = fVar8 + fVar6;
        fVar4 = fVar3 + fVar7;
        fVar5 = fVar3 + fVar7 + DAT_002e0964;
      }
    }
    iVar1 = *DAT_002e0968;
    fVar5 = fVar5 - fVar4;
    uVar2 = func_00111A64((uint *)(iVar1 + 0x660));
    fVar10 = fVar10 - fVar9;
    fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    uVar11 = *(undefined4 *)(param_1 + 0x3d4);
    fVar4 = fVar3 * DAT_002e096c * fVar5 + fVar4;
    fVar3 = DAT_002e096c;
    uVar2 = func_00111A64((uint *)(iVar1 + 0x660));
    fVar8 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = fVar8 * fVar3 * fVar10 + fVar9;
    local_2c[0] = *(undefined4 *)(param_1 + 0x2cc);
    local_38 = fVar4;
    uStack_34 = uVar11;
    func_004E0CEC(local_2c,(int *)(param_1 + 0x3d0),(int *)&local_38);
  }
  return;
}

