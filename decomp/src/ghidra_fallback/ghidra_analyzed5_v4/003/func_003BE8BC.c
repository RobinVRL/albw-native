#include "ghidra_types.h"


// USA 003BE8BC <- EU 003BE898 (Ghidra, non-matching)

undefined4 func_003BE8BC(int *param_1)

{
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
                    /* WARNING: Could not recover jumptable at 0x003be8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,5,1);
}

