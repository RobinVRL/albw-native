#include "ghidra_types.h"

extern int func_00408B94(undefined4 *param_1);
extern int func_00413648(int param_1);
extern undefined4 DAT_00409db0;

// USA 00409DAC <- EU 00409D8C (Ghidra, non-matching)
// GLOBAL DAT_00409db0 undefined4

int func_00409DAC(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = func_00408B94(param_1);
  *puVar1 = DAT_00409db0;
  puVar1[0x47] = 0;
  pvVar2 = func_00413648((int)(puVar1 + 0x48));
  return (int)pvVar2 + -0x120;
}

