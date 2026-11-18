#include "ghidra_types.h"

extern int func_001510A4();
extern int DAT_00164af0;

// USA 00164AD8 <- EU 00164ADC (Ghidra, non-matching)
// GLOBAL DAT_00164af0 int

undefined4 func_00164AD8(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_00164af0 + 0x84;
  *param_1 = DAT_00164af0;
  param_1[200] = iVar1;
  return func_001510A4(param_1);
}

