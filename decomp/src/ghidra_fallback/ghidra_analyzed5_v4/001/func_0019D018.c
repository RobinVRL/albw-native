#include "ghidra_types.h"

extern int func_0049AFE4(int param_1,int param_2);
extern undefined4 DAT_004a1538;
extern int *DAT_004a153c;

// USA 0019D018 <- EU 0019D018 (Ghidra, non-matching)
// GLOBAL DAT_004a1538 undefined4
// GLOBAL DAT_004a153c int *

undefined4 * func_004A1520(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_004a153c;
  *param_1 = DAT_004a1538;
  iVar2 = param_1[1];
  if (iVar2 != *piVar1) {
    if (iVar2 != 0) {
      func_0049AFE4(iVar2,(int)param_1);
    }
    param_1[1] = *piVar1;
  }
  return param_1;
}

