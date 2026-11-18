#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern float *DAT_00548e4c;

// USA 00548E40 <- EU 00548E18 (Ghidra, non-matching)
// GLOBAL DAT_00548e4c float *

undefined4 func_00548E40(int param_1,float *param_2)

{
  func_00115CA8(param_2,(float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                                 *(int *)(param_1 + 0xb84) * 0x30),DAT_00548e4c);
  return 1;
}

