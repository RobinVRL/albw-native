#include "ghidra_types.h"

extern float DAT_00436230;
extern float DAT_00436234;
extern float *DAT_00436238;

// USA 0043610C <- EU 004360EC (Ghidra, non-matching)
// GLOBAL DAT_00436230 float
// GLOBAL DAT_00436234 float
// GLOBAL DAT_00436238 float *

undefined4 func_0043610C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  
  pfVar3 = DAT_00436238;
  fVar2 = DAT_00436234;
  fVar1 = DAT_00436230;
  fVar7 = *param_2 - *(float *)(param_1 + 4);
  bVar5 = DAT_00436234 == fVar7;
  bVar6 = fVar7 <= DAT_00436234;
  if (!bVar6 || bVar5) {
    bVar5 = fVar7 == DAT_00436230;
    bVar6 = DAT_00436230 <= fVar7;
  }
  if (bVar6 && !bVar5) {
LAB_00436164:
    bVar5 = false;
  }
  else {
    fVar7 = param_2[1] - *(float *)(param_1 + 8);
    bVar5 = DAT_00436234 == fVar7;
    bVar6 = fVar7 <= DAT_00436234;
    if (!bVar6 || bVar5) {
      bVar5 = fVar7 == DAT_00436230;
      bVar6 = DAT_00436230 <= fVar7;
    }
    if (bVar6 && !bVar5) goto LAB_00436164;
    fVar7 = param_2[2] - *(float *)(param_1 + 0xc);
    bVar5 = DAT_00436234 == fVar7;
    bVar6 = fVar7 <= DAT_00436234;
    if (!bVar6 || bVar5) {
      bVar5 = fVar7 == DAT_00436230;
      bVar6 = DAT_00436230 <= fVar7;
    }
    if (bVar6 && !bVar5) goto LAB_00436164;
    bVar5 = true;
  }
  if (bVar5) {
    return (undefined4)param_1;
  }
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) | 8;
  fVar7 = *param_2 - *pfVar3;
  bVar5 = fVar2 == fVar7;
  bVar6 = fVar7 <= fVar2;
  if (!bVar6 || bVar5) {
    bVar5 = fVar7 == fVar1;
    bVar6 = fVar1 <= fVar7;
  }
  if (!bVar6 || bVar5) {
    fVar7 = param_2[1] - pfVar3[1];
    bVar5 = fVar2 == fVar7;
    bVar6 = fVar7 <= fVar2;
    if (!bVar6 || bVar5) {
      bVar5 = fVar7 == fVar1;
      bVar6 = fVar1 <= fVar7;
    }
    if (!bVar6 || bVar5) {
      fVar7 = param_2[2] - pfVar3[2];
      bVar5 = fVar2 == fVar7;
      bVar6 = fVar7 <= fVar2;
      if (!bVar6 || bVar5) {
        bVar5 = fVar7 == fVar1;
        bVar6 = fVar1 <= fVar7;
      }
      if (!bVar6 || bVar5) {
        *(float *)(param_1 + 4) = *pfVar3;
        *(float *)(param_1 + 8) = pfVar3[1];
        *(float *)(param_1 + 0xc) = pfVar3[2];
        bVar4 = *(byte *)(param_1 + 0xa8) & 0xfd;
        goto LAB_00436228;
      }
    }
  }
  *(float *)(param_1 + 4) = *param_2;
  *(float *)(param_1 + 8) = param_2[1];
  *(float *)(param_1 + 0xc) = param_2[2];
  bVar4 = *(byte *)(param_1 + 0xa8) | 2;
LAB_00436228:
  *(byte *)(param_1 + 0xa8) = bVar4;
  return (undefined4)param_1;
}

