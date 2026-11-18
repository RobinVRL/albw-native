#include "ghidra_types.h"

extern int func_0010AF18(void);
extern int func_003E3E00(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, int param_5);

// USA 003E3B68 <- EU 003E3B48 (Ghidra, non-matching)

undefined4 func_003E3B68(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  
  puVar1 = (uint *)func_0010AF18();
  return func_003E3E00(puVar1,param_1,param_2,param_3,param_4);
}

