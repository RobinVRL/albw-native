#include "ghidra_types.h"

extern int func_0048C098(int param_1,undefined4 param_2,int param_3);
extern int func_0048C11C(int param_1,undefined4 param_2,int param_3);

// USA 0049BC70 <- EU 0049BC48 (Ghidra, non-matching)

undefined4 func_0049BC70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 3 || iVar1 == 4) {
    return 0;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x78) = 2;
  }
  if (param_2 != 0) {
    return func_0048C098(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x70),0);
  }
  return func_0048C11C(param_1 + 0x1c,*(undefined4 *)(param_1 + 0x70),0);
}

