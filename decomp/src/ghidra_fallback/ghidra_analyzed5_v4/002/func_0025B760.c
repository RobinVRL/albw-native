// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_0014A124(float fparam_0);
extern int func_001E05E8(int param_1,float fparam_0);

// USA 0025B760 <- EU 0025B788 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_0025B760(int param_1,float fparam_0)

{
  float fparam_0_00;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    fparam_0_00 = func_0014A124(fparam_0);
    return func_001E05E8(*(int *)(param_1 + 0x10),fparam_0_00);
  }
  return 0;
}

