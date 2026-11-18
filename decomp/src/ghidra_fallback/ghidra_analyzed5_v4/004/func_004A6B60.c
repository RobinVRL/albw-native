#include "ghidra_types.h"


// USA 004A6B60 <- EU 004A6B38 (Ghidra, non-matching)

char * func_004A6B60(int *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(int *)(param_1[4] + param_2 * 0x44 + 0x3c) + *(int *)(*param_1 + 0x1c));
  if (*pcVar1 == '\0') {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

