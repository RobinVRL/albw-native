#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float DAT_0036cef4;
extern float DAT_0036cef8;

// USA 0036CE40 <- EU 0036CE1C (Ghidra, non-matching)
// GLOBAL DAT_0036cef4 float
// GLOBAL DAT_0036cef8 float

undefined4 func_0036CE40(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_r2;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = 0;
  fVar8 = DAT_0036cef4;
  if (0 < *param_1) {
    do {
      if (uVar1 < (uint)param_1[1]) {
        in_r2 = *(uint *)(param_1[3] + uVar1 * 4);
      }
      else {
        in_r2 = 0;
      }
      uVar1 = uVar1 + 1;
      fVar8 = *(float *)(in_r2 + 4) + fVar8;
    } while ((int)uVar1 < *param_1);
  }
  fVar9 = DAT_0036cef4;
  uVar1 = func_00111A64(param_2);
  iVar3 = *param_1;
  uVar4 = 0;
  uVar2 = 0;
  fVar7 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (0 < iVar3) {
    in_r2 = param_1[1];
  }
  fVar8 = fVar7 * DAT_0036cef8 * fVar8;
  if (0 < iVar3) {
    do {
      if (uVar2 < in_r2) {
        iVar5 = *(int *)(param_1[3] + uVar2 * 4);
      }
      else {
        iVar5 = 0;
      }
      fVar8 = fVar8 - *(float *)(iVar5 + 4);
      if (uVar2 < in_r2) {
        puVar6 = *(undefined4 **)(param_1[3] + uVar2 * 4);
      }
      else {
        puVar6 = (undefined4 *)0x0;
      }
      uVar4 = *puVar6;
    } while ((fVar9 <= fVar8) && (uVar2 = uVar2 + 1, (int)uVar2 < iVar3));
  }
  return uVar4;
}

