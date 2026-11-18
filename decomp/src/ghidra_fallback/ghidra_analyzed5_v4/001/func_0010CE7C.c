#include "ghidra_types.h"

extern int func_0010DEF0(int param_1,int param_2);
extern int func_0010E2A4(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_0010cec8;
extern int *DAT_0010cecc;

// USA 0010CE7C <- EU 0010CE7C (Ghidra, non-matching)
// GLOBAL DAT_0010cec8 undefined4
// GLOBAL DAT_0010cecc int *

undefined4 * func_0010CE7C(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *extraout_r1;
  undefined4 *puVar2;
  
  *param_1 = DAT_0010cec8;
  param_1[1] = 0;
  piVar1 = DAT_0010cecc;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*piVar1 != 0) {
    piVar1 = func_0010E2A4(*piVar1,param_1);
    puVar2 = extraout_r1;
    if (piVar1 != (int *)0x0) {
      puVar2 = param_1;
    }
    param_1[1] = piVar1;
    if (piVar1 != (int *)0x0) {
      func_0010DEF0((int)piVar1,(int)puVar2);
    }
  }
  return param_1;
}

