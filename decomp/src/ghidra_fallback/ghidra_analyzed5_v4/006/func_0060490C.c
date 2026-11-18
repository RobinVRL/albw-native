#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0021807C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0060490c;

// USA 0060490C <- EU 006048E4 (Ghidra, non-matching)
// GLOBAL DAT_0060490c undefined4

undefined4 func_0060490C(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_0060490c);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0021807C(puVar1,param_1);
  }
  return 0;
}

