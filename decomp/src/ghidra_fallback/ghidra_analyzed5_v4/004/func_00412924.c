#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_0040D908(int param_1);
extern int func_0040DA20(int param_1);

// USA 00412924 <- EU 00412904 (Ghidra, non-matching)

void func_00412924(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != param_1 + 1) {
    do {
      piVar2 = (int *)*piVar1;
      func_0040D908((int)(piVar1 + -0x43));
      func_00111EF0(param_1,piVar1);
      func_0040DA20((int)(piVar1 + -0x43));
      piVar1 = piVar2;
    } while (piVar2 != param_1 + 1);
  }
  return;
}

