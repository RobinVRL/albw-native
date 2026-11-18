#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00282040(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00605eac;

// USA 00605EAC <- EU 00605E84 (Ghidra, non-matching)
// GLOBAL DAT_00605eac undefined4

undefined4 func_00605EAC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605eac);
  if (puVar1 != (undefined4 *)0x0) {
    return func_00282040(puVar1,param_1);
  }
  return 0;
}

