#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_003782f0;

// USA 003782D4 <- EU 003782B0 (Ghidra, non-matching)
// GLOBAL DAT_003782f0 undefined4

undefined4 * func_003782D4(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_003782f0;
  puVar1[0x1c] = *(undefined4 *)(puVar1[10] + 0x650);
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  *(undefined1 *)((int)puVar1 + 0x7d) = 0;
  *(undefined1 *)((int)puVar1 + 0x7e) = 0;
  *(undefined1 *)((int)puVar1 + 0x7f) = 0;
  puVar1[0x20] = 0;
  return puVar1;
}

