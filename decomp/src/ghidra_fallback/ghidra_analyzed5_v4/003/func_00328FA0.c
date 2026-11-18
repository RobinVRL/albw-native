#include "ghidra_types.h"

extern int func_00329078(int param_1);
extern int func_004F68AC();

// USA 00328FA0 <- EU 00328F7C (Ghidra, non-matching)

void func_00328FA0(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  func_004F68AC(param_1,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0xc9c) == '\0') {
    func_00329078(param_1);
  }
  *(undefined1 *)(param_1 + 0xc9c) = 0;
  return;
}

