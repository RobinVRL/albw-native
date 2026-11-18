#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006605D4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00265744;
extern float DAT_00265748;
extern float DAT_0026574c;
extern float DAT_00265750;
extern float DAT_00265754;
extern int DAT_00265758;

// USA 0026567C <- EU 002656A4 (Ghidra, non-matching)
// GLOBAL DAT_00265744 int
// GLOBAL DAT_00265748 float
// GLOBAL DAT_0026574c float
// GLOBAL DAT_00265750 float
// GLOBAL DAT_00265754 float
// GLOBAL DAT_00265758 int

undefined4 func_0026567C(int param_1)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  
  func_0051D2F4((int *)(param_1 + 0x904),*(int *)(param_1 + 1000),DAT_00265744,0x7fffffff,
                DAT_00265748);
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (*(short *)(DAT_00265758 + param_1) < 1) {
      uVar1 = 6;
    }
    else {
      uVar1 = 3;
    }
    return func_006605D4((undefined4 *)(param_1 + 0x918),uVar1);
  }
  fVar3 = *(float *)(param_1 + 0x574);
  if (fVar3 != 0.5) {
    if (DAT_00265750 < DAT_0026574c - fVar3) {
      fVar2 = fVar3 + DAT_00265750;
    }
    else {
      fVar2 = DAT_0026574c;
      if (DAT_0026574c - fVar3 < DAT_00265754) {
        fVar2 = fVar3 - DAT_00265750;
      }
    }
    *(float *)(param_1 + 0x574) = fVar2;
  }
  return 0;
}

