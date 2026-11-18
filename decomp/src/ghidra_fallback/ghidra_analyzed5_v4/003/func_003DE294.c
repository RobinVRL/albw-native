#include "ghidra_types.h"

extern int func_001080D4(int *param_1);
extern byte *DAT_003de2ac;

// USA 003DE294 <- EU 003DE274 (Ghidra, non-matching)
// GLOBAL DAT_003de2ac byte *

undefined4 func_003DE294(void)

{
  byte *pbVar1;
  
  pbVar1 = DAT_003de2ac;
  if ((*DAT_003de2ac & DAT_003de2ac[1]) != 0) {
    DAT_003de2ac[3] = 1;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    coproc_moveto_Data_Synchronization(0);
    return func_001080D4((int *)(pbVar1 + 8));
  }
  return 0;
}

