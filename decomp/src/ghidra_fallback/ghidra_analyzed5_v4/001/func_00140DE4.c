#include "ghidra_types.h"

extern int func_0013FC48(int param_1);
extern int func_00657580(undefined4 *param_1,undefined1 param_2);
extern float DAT_00140e60;
extern float DAT_00140e64;

// USA 00140DE4 <- EU 00140DE4 (Ghidra, non-matching)
// GLOBAL DAT_00140e60 float
// GLOBAL DAT_00140e64 float

undefined4 func_00140DE4(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x3d4);
  if (*(float *)(param_1 + 0x510) - DAT_00140e60 <= fVar1) {
    if (*(float *)(param_1 + 0x36c) <= fVar1) {
      if (*(float *)(param_1 + 0x510) + DAT_00140e64 < fVar1) {
        return func_00657580((undefined4 *)(param_1 + 0x460),1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x4f8) == 0) {
      return func_0013FC48(param_1);
    }
    func_00657580((undefined4 *)(param_1 + 0x460),2);
  }
  return 0;
}

