#include "ghidra_types.h"

extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);

// USA 003E6A04 <- EU 003E69E4 (Ghidra, non-matching)

void func_003E6A04(int *param_1,uint *param_2,uint param_3)

{
  func_001163A0((uint *)(*param_1 + param_1[1]),param_2,param_3);
  param_1[1] = param_1[1] + param_3;
  return;
}

