#include "ghidra_types.h"

extern int func_004A1520();
extern int func_004CD668(int param_1,int *param_2);
extern undefined4 DAT_005027cc;
extern int *DAT_005027d0;

// USA 005027C0 <- EU 00502798 (Ghidra, non-matching)
// GLOBAL DAT_005027cc undefined4
// GLOBAL DAT_005027d0 int *

undefined4 func_005027C0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_005027d0;
  *param_1 = DAT_005027cc;
  if (*piVar1 != 0) {
    func_004CD668(*piVar1,param_1);
  }
  return func_004A1520(param_1);
}

