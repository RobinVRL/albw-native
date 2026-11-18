#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001CBA18(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060418c;

// USA 0060418C <- EU 00604164 (Ghidra, non-matching)
// GLOBAL DAT_0060418c undefined4

undefined4 func_0060418C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060418c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_001CBA18(puVar1,param_1);
  }
  return 0;
}

