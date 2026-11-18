#include "ghidra_types.h"

extern int func_003E696C(int *param_1,undefined4 *param_2);

// USA 00407CEC <- EU 00407CCC (Ghidra, non-matching)

undefined4 * func_00407CEC(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
    func_003E696C((int *)(param_1 + 0x18),puVar1);
    return puVar1 + -7;
  }
  return (undefined4 *)0x0;
}

