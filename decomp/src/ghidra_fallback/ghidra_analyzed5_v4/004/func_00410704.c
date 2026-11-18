#include "ghidra_types.h"

extern int func_0056EC9C(int param_1);
extern int DAT_00410744;

// USA 00410704 <- EU 004106E4 (Ghidra, non-matching)
// GLOBAL DAT_00410744 int

int * func_00410704(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (((param_2 != (int *)0x0) && (*param_2 == DAT_00410744)) && (param_2[2] - 0x1000000U < 0x101))
  {
    *param_1 = (int)param_2;
    iVar1 = func_0056EC9C((int)param_2);
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = iVar1 + 8;
  }
  return param_1;
}

