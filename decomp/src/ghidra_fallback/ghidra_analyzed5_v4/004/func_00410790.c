#include "ghidra_types.h"

extern int func_0056F15C(int param_1);
extern int func_0056F1C4(int param_1);
extern int DAT_0041080c;
extern int DAT_00410810;
extern int DAT_00410814;

// USA 00410790 <- EU 00410770 (Ghidra, non-matching)
// GLOBAL DAT_0041080c int
// GLOBAL DAT_00410810 int
// GLOBAL DAT_00410814 int

undefined4 * func_00410790(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  *(char *)(param_1 + 2) = (char)param_3;
  *param_1 = 0;
  if (((param_3 == 0) && (*param_2 == DAT_0041080c)) && (param_2[2] + 0xfe000000U < 0x10001)) {
    piVar1 = (int *)func_0056F1C4((int)param_2);
    piVar2 = (int *)func_0056F15C((int)param_2);
    if (((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) &&
       ((*piVar1 == DAT_00410810 && (*piVar2 == DAT_00410814)))) {
      param_1[1] = piVar2 + 2;
      *param_1 = piVar1 + 2;
    }
  }
  return param_1;
}

