#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float DAT_004e2630;
extern float DAT_004e2634;
extern float DAT_004e2638;
extern float DAT_004e263c;

// USA 004E25B8 <- EU 004E2590 (Ghidra, non-matching)
// GLOBAL DAT_004e2630 float
// GLOBAL DAT_004e2634 float
// GLOBAL DAT_004e2638 float
// GLOBAL DAT_004e263c float

undefined4 func_004E25B8(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  
  fVar1 = DAT_004e2634;
  fVar4 = *(float *)(param_1 + 0x504) * DAT_004e2630;
  *(float *)(param_1 + 0x504) = fVar4;
  fVar4 = fVar4 * fVar1;
  iVar3 = *(int *)(param_1 + 1000);
  if (*(char *)(param_1 + 0x4e0) == '\0') {
    uVar5 = func_00114608((uint)ALBW_AS_U32(fVar4),param_2);
    iVar2 = (int)uVar5;
  }
  else {
    uVar5 = func_00114608((uint)ALBW_AS_U32(fVar4),param_2);
    iVar2 = -(int)uVar5;
  }
  *(int *)(param_1 + 1000) = iVar3 + iVar2;
  fVar1 = DAT_004e263c;
  fVar4 = *(float *)(param_1 + 0x3e0) - DAT_004e2638;
  *(float *)(param_1 + 0x3e0) = fVar4;
  if (fVar4 < fVar1) {
    fVar4 = fVar1;
  }
  *(float *)(param_1 + 0x3e0) = fVar4;
  func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),(float *)(param_1 + 0x4f0));
  return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
}

