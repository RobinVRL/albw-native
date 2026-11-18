#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00657BD4(undefined4 *param_1,undefined1 param_2);
extern int DAT_001534ac;
extern float DAT_001534b0;
extern float DAT_001534b4;
extern float DAT_001534b8;
extern float DAT_001534bc;
extern int DAT_001534c0;

// USA 00153408 <- EU 0015340C (Ghidra, non-matching)
// GLOBAL DAT_001534ac int
// GLOBAL DAT_001534b0 float
// GLOBAL DAT_001534b4 float
// GLOBAL DAT_001534b8 float
// GLOBAL DAT_001534bc float
// GLOBAL DAT_001534c0 int

undefined4 func_00153408(int param_1)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  
  func_0051D2F4((int *)(param_1 + 0x8f4),*(int *)(param_1 + 1000),DAT_001534ac,0x7fffffff,
                DAT_001534b0);
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(DAT_001534c0 + param_1) < 1) {
      uVar1 = 7;
    }
    else {
      uVar1 = 3;
    }
    return func_00657BD4((undefined4 *)(param_1 + 0x90c),uVar1);
  }
  fVar3 = *(float *)(param_1 + 0x574);
  if (fVar3 != 0.5) {
    if (DAT_001534b8 < DAT_001534b4 - fVar3) {
      fVar2 = fVar3 + DAT_001534b8;
    }
    else {
      fVar2 = DAT_001534b4;
      if (DAT_001534b4 - fVar3 < DAT_001534bc) {
        fVar2 = fVar3 - DAT_001534b8;
      }
    }
    *(float *)(param_1 + 0x574) = fVar2;
  }
  return 0;
}

