#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0018FBA8(undefined4 *param_1,uint *param_2);

// USA 00603694 <- EU 0060366C (Ghidra, non-matching)

undefined4 func_00603694(uint *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)func_0010BAB4(0x580);
  if (puVar1 != (undefined4 *)0x0) {
    return func_0018FBA8(puVar1,param_1);
  }
  return 0;
}

