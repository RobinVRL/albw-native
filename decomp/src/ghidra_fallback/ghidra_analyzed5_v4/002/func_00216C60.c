#include "ghidra_types.h"

extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00521078(int param_1);
extern float func_0058AA40(int param_1);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern int DAT_00216cd8;

// USA 00216C60 <- EU 00216C60 (Ghidra, non-matching)
// GLOBAL DAT_00216cd8 int

uint func_00216C60(int param_1)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = func_0058AA40(param_1);
  fVar3 = *(float *)(param_1 + 0xa44) * fVar3 * fVar3 + *(float *)(param_1 + 0xa48) * fVar3 +
          *(float *)(param_1 + 0xa4c);
  *(float *)(param_1 + 0xa3c) = fVar3;
  if ((fVar3 <= *(float *)(param_1 + 0x3d4)) && (bVar1 = func_00521078(param_1), bVar1)) {
    bVar1 = func_0051D27C((int *)(param_1 + 1000),*(int *)(param_1 + 0xa64),DAT_00216cd8);
    return (uint)bVar1;
  }
  uVar2 = func_0065D9FC((undefined4 *)(param_1 + 0x8bc),9);
  return uVar2;
}

