#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 0048B994 <- EU 0048B96C (Ghidra, non-matching)

void func_0048B994(int param_1,int param_2)

{
  int *piVar1;
  float in_s0;
  
  if (param_2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(param_2 + 0x10);
  }
  if (piVar1[3] != 0) {
    piVar1[3] = 0;
    func_0010F1F8(piVar1,in_s0);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  }
  return;
}

