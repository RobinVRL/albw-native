#include "ghidra_types.h"

extern int func_00229F58(int param_1,uint param_2);
extern int func_002BDDA4(int param_1);

// USA 002BDD6C <- EU 002BDD48 (Ghidra, non-matching)

undefined4 func_002BDD6C(int param_1)

{
  undefined4 *puVar1;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x2000;
  puVar1 = func_002BDDA4(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00229F58((int)puVar1,(int)*(short *)(param_1 + 0x2e));
  }
  return 0;
}

