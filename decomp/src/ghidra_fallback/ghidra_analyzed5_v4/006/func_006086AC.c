#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_003382D4(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_006086ac;

// USA 006086AC <- EU 00608684 (Ghidra, non-matching)
// GLOBAL DAT_006086ac undefined4

undefined4 func_006086AC(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006086ac);
  if (puVar1 != (undefined4 *)0x0) {
    return func_003382D4(puVar1,param_1);
  }
  return 0;
}

