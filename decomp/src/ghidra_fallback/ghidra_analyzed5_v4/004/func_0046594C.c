#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float DAT_00465a2c;
extern float DAT_00465a30;
extern float DAT_00465a34;
extern float DAT_00465a38;

// USA 0046594C <- EU 00465924 (Ghidra, non-matching)
// GLOBAL DAT_00465a2c float
// GLOBAL DAT_00465a30 float
// GLOBAL DAT_00465a34 float
// GLOBAL DAT_00465a38 float

void func_0046594C(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  #define local_1c (*(float *)(albw_frame + 0x24))
  if (*(int *)(param_1 + 0x204) != 0) {
    if (**(int **)(param_1 + 0x1c) != 0) {
      func_001119F4(auStack_38,(undefined4 *)(*(int *)(param_1 + 0x204) + 0x48));
      fVar4 = DAT_00465a34;
      fVar6 = *(float *)(*(int *)(param_1 + 0x204) + 0x3c);
      fVar10 = *(float *)(*(int *)(param_1 + 0x204) + 0x40) * DAT_00465a2c;
      fVar7 = ((local_1c - fVar10) + DAT_00465a30) - DAT_00465a38;
      iVar8 = (int)fVar7;
      fVar9 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar7) << 0x1e | (uint)(fVar7 <= fVar9) << 0x1d
      ;
      bVar3 = (byte)(uVar1 >> 0x18);
      bVar5 = (bool)(bVar3 >> 6);
      if (!bVar5) {
        uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_00465a34 == fVar7) << 0x1e |
                (uint)(fVar7 <= DAT_00465a34) << 0x1d;
        bVar3 = (byte)(uVar1 >> 0x18);
        bVar5 = (bool)(bVar3 >> 6);
      }
      if ((bool)(bVar3 >> 5 & 1) && !bVar5) {
        iVar8 = iVar8 + -1;
      }
      fVar7 = (float)VectorSignedToFloat(iVar8,(byte)(uVar1 >> 0x15) & 3);
      fVar9 = (local_1c + fVar10 + DAT_00465a30) - DAT_00465a38;
      iVar8 = (int)fVar9;
      fVar10 = (float)VectorSignedToFloat(iVar8,(byte)(uVar1 >> 0x15) & 3);
      uVar2 = uVar1 & 0xfffffff | (uint)(fVar10 == fVar9) << 0x1e | (uint)(fVar9 <= fVar10) << 0x1d;
      bVar3 = (byte)(uVar2 >> 0x18);
      bVar5 = (bool)(bVar3 >> 6);
      if (!bVar5) {
        uVar2 = uVar1 & 0xfffffff | (uint)(DAT_00465a34 == fVar9) << 0x1e |
                (uint)(fVar9 <= DAT_00465a34) << 0x1d;
        bVar3 = (byte)(uVar2 >> 0x18);
        bVar5 = (bool)(bVar3 >> 6);
      }
      uVar1 = uVar2 & 0xfffffff | (uint)(fVar6 <= DAT_00465a34) << 0x1d;
      if ((bool)(bVar3 >> 5 & 1) && !bVar5) {
        iVar8 = iVar8 + -1;
      }
      fVar9 = (float)VectorSignedToFloat(iVar8,(byte)(uVar1 >> 0x15) & 3);
      if (SUB41(uVar1 >> 0x1d,0)) {
        *(float *)(param_1 + 0x134) = fVar6;
        *(float *)(param_1 + 0x13c) = fVar4;
      }
      else {
        *(float *)(param_1 + 0x134) = DAT_00465a34;
        *(float *)(param_1 + 0x13c) = fVar6;
      }
      if (fVar7 < fVar9) {
        *(float *)(param_1 + 0x138) = fVar7;
        *(float *)(param_1 + 0x140) = fVar9;
      }
      else {
        *(float *)(param_1 + 0x138) = fVar9;
        *(float *)(param_1 + 0x140) = fVar7;
      }
    }
    return;
  }
  return;
}

