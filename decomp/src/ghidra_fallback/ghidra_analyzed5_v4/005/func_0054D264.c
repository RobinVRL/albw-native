#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 0054D264 <- EU 0054D23C (Ghidra, non-matching)

uint * func_0054D264(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x16c);
  if ((param_3 == 2) < 2) {
    piVar1 = piVar1 + (uint)(param_3 == 2) * 3;
  }
  func_0010E3C4(param_2,(uint *)piVar1[2],*piVar1 << 2);
  return param_2 + *piVar1;
}

