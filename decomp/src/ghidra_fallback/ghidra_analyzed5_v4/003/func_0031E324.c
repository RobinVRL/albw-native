#include "ghidra_types.h"

extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0054D04C(int param_1,float *param_2,float *param_3,int *param_4,int *param_5);
extern int func_0058E2B8(int *param_1);
extern float DAT_0031e4b0;
extern uint DAT_0031e4b4;

// USA 0031E324 <- EU 0031E300 (Ghidra, non-matching)
// GLOBAL DAT_0031e4b0 float
// GLOBAL DAT_0031e4b4 uint

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 func_0031E324(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  fVar10 = DAT_0031e4b0;
  objStack_28[0] = (uint)&local_24;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  *(float *)(param_1 + 0x28) = fVar10;
  local_24 = 0;
  local_20 = *(float *)(*(int *)(param_1 + 0x14) + 0x118) + *(float *)(param_1 + 0x30);
  fStack_1c = *(float *)(*(int *)(param_1 + 0x14) + 0x11c) + *(float *)(param_1 + 0x34);
  if (*(int *)(param_2 + 4) == 0x3f800000) {
    return func_0054D04C(param_1,&local_20,(float *)(param_1 + 0x24),(int *)(param_1 + 0x2c),
                  (int *)objStack_28[0]);
  }
  uVar5 = in_fpscr & 0xfffffff | (uint)(local_20 == fVar10) << 0x1e;
  *(float *)(param_1 + 0x24) = fVar10;
  if (!SUB41(uVar5 >> 0x1e,0)) {
    func_0054D04C(param_1,&local_20,(float *)(param_1 + 0x24),(int *)(param_1 + 0x2c),
                  (int *)objStack_28[0]);
    if (local_24 < 0) {
      objStack_28[0] = local_24 + 0x40000000;
      uVar1 = func_0058E2B8((int *)objStack_28);
    }
    else {
      objStack_28[0] = local_24 + 0xc0000000;
      uVar1 = func_0058E2B8((int *)objStack_28);
    }
    uVar3 = DAT_0031e4b4;
    uVar4 = *(uint *)(DAT_0031e4b4 + 0xc);
    if (uVar1 < uVar4) {
      uVar3 = *(uint *)(DAT_0031e4b4 + 0x10);
    }
    else {
      *(float *)(param_1 + 0x24) = fVar10;
    }
    if (uVar1 < uVar4 && uVar3 < uVar1) {
      fVar9 = (float)VectorUnsignedToFloat(uVar1,(byte)(uVar5 >> 0x15) & 3);
      fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(uVar5 >> 0x15) & 3);
      fVar6 = fVar10;
      if (fVar7 != fVar8) {
        fVar6 = (fVar9 - fVar7) / (fVar8 - fVar7);
      }
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * fVar6;
    }
    if (local_20 <= fVar10) {
      *(float *)(param_1 + 0x28) = -*(float *)(param_1 + 0x24);
      iVar2 = func_004904CC(*(float *)(param_2 + 8),*(float *)(param_2 + 0x10));
      iVar2 = iVar2 + -0x40000000;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
      iVar2 = func_004904CC(*(float *)(param_2 + 8),*(float *)(param_2 + 0x10));
      iVar2 = iVar2 + 0x40000000;
    }
    *(int *)(param_1 + 0x2c) = iVar2;
  }
  *(float *)(param_1 + 0x30) = fVar10;
  *(float *)(param_1 + 0x34) = fVar10;
  return 0;
}

