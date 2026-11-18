#include "ghidra_types.h"

extern int func_0010A938(int *param_1);
extern int func_0010C0C0(int *param_1);

// USA 0010C0F8 <- EU 0010C0F8 (Ghidra, non-matching)

undefined4 func_0010C0F8(int param_1,int *param_2)

{
  int iVar1;
  
  func_0010C0C0((int *)(param_1 + 0xc));
  if ((int *)*param_2 == param_2) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    if (*(int **)(param_1 + 8) == param_2) {
      *(int *)(param_1 + 8) = (*(int **)(param_1 + 8))[1];
    }
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
  }
  param_2[1] = 0;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return func_0010A938((int *)(param_1 + 0xc));
}

