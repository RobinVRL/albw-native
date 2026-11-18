#include "ghidra_types.h"


// USA 003B4310 <- EU 003B42EC (Ghidra, non-matching)

undefined4 func_003B4310(int *param_1)

{
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
                    /* WARNING: Could not recover jumptable at 0x003b431c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,0,1);
}

