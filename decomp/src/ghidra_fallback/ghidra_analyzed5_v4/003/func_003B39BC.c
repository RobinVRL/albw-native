#include "ghidra_types.h"


// USA 003B39BC <- EU 003B3998 (Ghidra, non-matching)

undefined4 func_003B39BC(int *param_1)

{
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
                    /* WARNING: Could not recover jumptable at 0x003b39c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,0,1);
}

