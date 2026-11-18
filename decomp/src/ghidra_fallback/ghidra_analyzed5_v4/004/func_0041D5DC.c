#include "ghidra_types.h"


// USA 0041D5DC <- EU 0041D5BC (Ghidra, non-matching)

int func_0041D5DC(int param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + param_2);
  if (*pcVar1 == -2) {
    param_2 = param_2 + 3;
    *param_3 = CONCAT11(pcVar1[1],pcVar1[2]) | 1;
  }
  else {
    *param_3 = 1;
  }
  return param_2;
}

