#include "ghidra_types.h"

extern int DAT_00403338;
extern int DAT_0040333c;

// USA 004032F0 <- EU 004032D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00403338 int
// GLOBAL DAT_0040333c int

int * func_004032F0(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_00403338;
  piVar2 = param_2;
  if (param_5 == 0) {
    piVar2 = *(int **)(param_1 + 0x62c);
  }
  if (param_5 != 0 || piVar2 != param_3) {
    *param_2 = (int)param_3;
    param_2[1] = iVar1;
    param_2 = param_2 + 2;
    *(int **)(param_1 + 0x62c) = param_3;
    if (param_5 != 0) goto LAB_00403318;
  }
  if (*(int *)(param_1 + 0x630) == param_4) {
    return param_2;
  }
LAB_00403318:
  param_2[1] = DAT_0040333c;
  *param_2 = param_4;
  *(int *)(param_1 + 0x630) = param_4;
  return param_2 + 2;
}

