#include "ghidra_types.h"

extern int func_0056F268(int param_1);
extern int func_0056F2D0(int param_1);
extern int func_0056F33C(int param_1);
extern int DAT_004108ac;

// USA 00410840 <- EU 00410820 (Ghidra, non-matching)
// GLOBAL DAT_004108ac int

int * func_00410840(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 == DAT_004108ac) && (param_2[2] - 0x1000000U < 0x10001)) {
    iVar1 = func_0056F2D0((int)param_2);
    iVar2 = func_0056F268((int)param_2);
    iVar3 = func_0056F33C((int)param_2);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      *param_1 = iVar1 + 8;
      param_1[1] = iVar2 + 8;
      if (iVar3 != 0) {
        param_1[2] = iVar3 + 8;
      }
    }
  }
  return param_1;
}

