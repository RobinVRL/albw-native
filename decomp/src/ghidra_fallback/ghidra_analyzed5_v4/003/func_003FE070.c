#include "ghidra_types.h"

extern int func_0040445C(undefined4 param_1);
extern int func_00420C9C(undefined4 *param_1);

// USA 003FE070 <- EU 003FE050 (Ghidra, non-matching)

int * func_003FE070(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0xb] != '\0') {
    iVar1 = *param_1;
    *(undefined1 *)(param_1 + 0xb) = 0;
    func_00420C9C(param_1);
    if (iVar1 != 0) {
      func_0040445C(iVar1);
    }
  }
  if ((char)param_1[10] != '\0') {
    func_00420C9C(param_1);
  }
  return param_1;
}

