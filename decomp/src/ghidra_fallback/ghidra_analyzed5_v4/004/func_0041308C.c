#include "ghidra_types.h"

extern int func_0010DECC(undefined4 *param_1);
extern undefined4 DAT_004130a8;
extern int DAT_004130ac;

// USA 0041308C <- EU 0041306C (Ghidra, non-matching)
// GLOBAL DAT_004130a8 undefined4
// GLOBAL DAT_004130ac int

undefined4 * func_0041308C(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = DAT_004130a8;
  param_1[1] = 0;
  param_1[2] = 0;
  piVar2 = func_0010DECC(param_1 + 3);
  iVar1 = DAT_004130ac;
  *piVar2 = DAT_004130ac + 0x20;
  piVar2[-3] = iVar1;
  *(undefined1 *)(piVar2 + 0x95) = 0;
  *(undefined1 *)((int)piVar2 + 0x255) = 1;
  return piVar2 + -3;
}

