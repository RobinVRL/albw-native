#include "ghidra_types.h"


// USA 0032178C <- EU 00321768 (Ghidra, non-matching)

undefined4 func_0032178C(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (param_2 < 0x11) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x54) + param_2 * 0x10);
                    /* WARNING: Could not recover jumptable at 0x00321784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)*puVar1)(puVar1,param_3);
  }
  return 0;
}

