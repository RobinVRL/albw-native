#include "ghidra_types.h"

extern int func_003FDD44(undefined4 *param_1);
extern int func_003FE194(undefined4 *param_1);
extern undefined4 DAT_003ff284;

// USA 003FF260 <- EU 003FF240 (Ghidra, non-matching)
// GLOBAL DAT_003ff284 undefined4

undefined4 * func_003FF260(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = func_003FE194(param_1);
  *puVar1 = DAT_003ff284;
  puVar1 = func_003FDD44(puVar1 + 1);
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = puVar1 + 9;
  puVar1[10] = puVar1 + 9;
  puVar1[0xb] = 0;
  puVar1[0xc] = puVar1 + 0xc;
  puVar1[0xd] = puVar1 + 0xc;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  return puVar1 + -1;
}

