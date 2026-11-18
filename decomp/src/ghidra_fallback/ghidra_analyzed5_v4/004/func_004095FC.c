#include "ghidra_types.h"

extern int func_00412728(undefined4 *param_1);

// USA 004095FC <- EU 004095DC (Ghidra, non-matching)

int func_004095FC(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_00412728((undefined4 *)(param_1 + 0xc));
  return (int)(puVar1 + -3);
}

