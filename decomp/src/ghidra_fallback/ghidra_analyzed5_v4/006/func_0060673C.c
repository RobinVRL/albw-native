#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0029EEB8(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060673c;

// USA 0060673C <- EU 00606714 (Ghidra, non-matching)
// GLOBAL DAT_0060673c undefined4

undefined4 func_0060673C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060673c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0029EEB8(puVar1,param_1);
  }
  return 0;
}

