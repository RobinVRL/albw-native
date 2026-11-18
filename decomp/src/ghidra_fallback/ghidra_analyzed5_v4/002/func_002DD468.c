#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_002dd46c;

// USA 002DD468 <- EU 002DD444 (Ghidra, non-matching)
// GLOBAL DAT_002dd46c undefined4

undefined4 * func_002DD468(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar1 = DAT_002dd46c;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0xffffffff;
  *puVar2 = uVar1;
  *(undefined1 *)(puVar2 + 0x1e) = 0;
  return puVar2;
}

