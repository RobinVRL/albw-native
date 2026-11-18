#include "ghidra_types.h"

extern int func_001DFFC4(int param_1,float fparam_0,float fparam_1);
extern float DAT_004eb354;

// USA 004EB36C <- EU 004EB344 (Ghidra, non-matching)
// GLOBAL DAT_004eb354 float

undefined4 func_004EB36C(int param_1,float fparam_0)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x88);
  if (iVar1 != 0) {
    return func_001DFFC4(iVar1,fparam_0,DAT_004eb354);
  }
  return 0;
}

