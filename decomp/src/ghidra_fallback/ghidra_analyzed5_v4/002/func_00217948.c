#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_0021795c;

// USA 00217948 <- EU 00217948 (Ghidra, non-matching)
// GLOBAL DAT_0021795c int

undefined4 func_00217948(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0021795c + 0x84;
  *param_1 = DAT_0021795c;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

