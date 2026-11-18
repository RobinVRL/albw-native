#include "ghidra_types.h"

extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float DAT_00200a8c;
extern int DAT_00200a90;

// USA 00200A3C <- EU 00200A3C (Ghidra, non-matching)
// GLOBAL DAT_00200a8c float
// GLOBAL DAT_00200a90 int

undefined4 func_00200A3C(int param_1)

{
  float fparam_0;
  undefined1 uVar1;
  
  fparam_0 = DAT_00200a8c;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    *(float *)(param_1 + 0x4e4) = DAT_00200a8c;
    *(float *)(param_1 + 0x4e8) = fparam_0;
    *(float *)(param_1 + 0x4ec) = fparam_0;
    if (*(short *)(DAT_00200a90 + param_1) < 1) {
      uVar1 = 7;
    }
    else {
      uVar1 = 0;
    }
    return func_0065D120((undefined4 *)(param_1 + 0x8dc),uVar1,fparam_0);
  }
  return 0;
}

