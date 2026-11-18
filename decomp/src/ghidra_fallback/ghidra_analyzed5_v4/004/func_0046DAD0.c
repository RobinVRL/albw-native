#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern float DAT_0046dbac;
extern float DAT_0046dbb0;
extern float DAT_0046dbb4;
extern float DAT_0046dbb8;

// USA 0046DAD0 <- EU 0046DAA8 (Ghidra, non-matching)
// GLOBAL DAT_0046dbac float
// GLOBAL DAT_0046dbb0 float
// GLOBAL DAT_0046dbb4 float
// GLOBAL DAT_0046dbb8 float

void func_0046DAD0(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((float *)(albw_frame + 0x0))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  bVar2 = *(int *)(param_1 + 0xb0) != 0;
  iVar1 = param_1;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xac);
  }
  bVar3 = iVar1 != 0;
  if (bVar2 && bVar3) {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  if ((!bVar2 || !bVar3) || iVar1 == 0) {
    fVar6 = (*(float *)(param_1 + 0x150) - *(float *)(param_1 + 0x148)) * DAT_0046dbb8;
    fVar4 = (*(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x150)) * DAT_0046dbac;
    *(float *)(param_1 + 0x148) = fVar4 - fVar6;
    *(float *)(param_1 + 0x150) = fVar4 + fVar6;
    return;
  }
  fVar6 = DAT_0046dbac;
  func_001119F4(local_40,(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x48));
  fVar4 = *(float *)(*(int *)(param_1 + 0xb0) + 0x3c) * local_40[0] * fVar6;
  fVar6 = *(float *)(*(int *)(param_1 + 0xb0) + 0x40) * local_2c * fVar6;
  fVar5 = (local_34 - fVar4) + DAT_0046dbb0;
  local_34 = local_34 + fVar4 + DAT_0046dbb0;
  fVar4 = (local_24 - fVar6) + DAT_0046dbb4;
  local_24 = local_24 + fVar6 + DAT_0046dbb4;
  if (local_34 <= fVar5) {
    *(float *)(param_1 + 0x148) = local_34;
    *(float *)(param_1 + 0x150) = fVar5;
  }
  else {
    *(float *)(param_1 + 0x148) = fVar5;
    *(float *)(param_1 + 0x150) = local_34;
  }
  if (fVar4 < local_24) {
    *(float *)(param_1 + 0x14c) = fVar4;
    *(float *)(param_1 + 0x154) = local_24;
  }
  else {
    *(float *)(param_1 + 0x14c) = local_24;
    *(float *)(param_1 + 0x154) = fVar4;
  }
  return;
}

