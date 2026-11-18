#include "ghidra_types.h"

extern int func_0010DB90(void);
extern int func_0010DEF0(int param_1,int param_2);
extern int func_0010E2A4(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_0010db1c;
extern int *DAT_0010db20;

// USA 0010DA7C <- EU 0010DA7C (Ghidra, non-matching)
// GLOBAL DAT_0010db1c undefined4
// GLOBAL DAT_0010db20 int *

undefined4 * func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  *param_1 = DAT_0010db1c;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)0x0) {
    if ((param_3 == 0) || (param_3 == 1)) {
      if (*DAT_0010db20 == 0) {
        return param_1;
      }
      piVar1 = func_0010E2A4(*DAT_0010db20,param_1);
      param_1[1] = piVar1;
    }
    else {
      if (param_3 == 2) {
        return param_1;
      }
      if (param_3 != 3) {
        return param_1;
      }
      if (*DAT_0010db20 == 0) {
        return param_1;
      }
      piVar1 = (int *)func_0010DB90();
      param_1[1] = piVar1;
    }
    if (piVar1 == (int *)0x0) {
      return param_1;
    }
  }
  func_0010DEF0((int)piVar1,(int)param_1);
  return param_1;
}

