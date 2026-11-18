#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0031A324(int param_1);

// USA 0031A0A8 <- EU 0031A084 (Ghidra, non-matching)

undefined4 func_0031A0A8(int param_1,int param_2)

{
  func_0014E138(param_1,param_2);
  if ((param_2 == 0) && (*(char *)(param_1 + 0x424) == '\x03')) {
    return func_0031A324(param_1);
  }
  return 0;
}

