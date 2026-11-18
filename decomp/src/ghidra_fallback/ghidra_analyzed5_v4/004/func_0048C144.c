#include "ghidra_types.h"

extern int func_0058FA08();
extern int func_006766E8(int param_1);
extern int func_00676724(int param_1);

// USA 0048C144 <- EU 0048C11C (Ghidra, non-matching)

int func_0048C144(int *param_1)

{
  void *pvVar1;
  
  func_006766E8((int)(param_1 + 1));
  if (*param_1 != 0) {
    func_0058FA08(*param_1);
    *param_1 = 0;
  }
  func_006766E8((int)(param_1 + 1));
  pvVar1 = func_00676724((int)(param_1 + 1));
  return (int)pvVar1 + -4;
}

