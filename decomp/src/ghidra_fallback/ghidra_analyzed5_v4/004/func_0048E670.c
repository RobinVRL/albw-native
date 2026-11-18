#include "ghidra_types.h"


// USA 0048E670 <- EU 0048E648 (Ghidra, non-matching)

undefined4 func_0048E670(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x38))(param_1,param_2,*(code **)(*param_1 + 0x38),param_4,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  (**(code **)(*param_1 + 0x44))(param_1,param_2);
  (**(code **)(*param_1 + 0x3c))(param_1,param_2,*param_3);
  return (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3 + 2);
}

