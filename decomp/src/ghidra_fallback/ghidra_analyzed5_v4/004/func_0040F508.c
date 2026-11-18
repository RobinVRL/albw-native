#include "ghidra_types.h"

extern int func_006766E8(int param_1);
extern int func_00676724(int param_1);

// USA 0040F508 <- EU 0040F4E8 (Ghidra, non-matching)

int func_0040F508(int param_1)

{
  void *pvVar1;
  
  func_006766E8(param_1 + 0x38);
  pvVar1 = func_00676724(param_1 + 0x38);
  return (int)pvVar1 + -0x38;
}

