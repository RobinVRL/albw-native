#include "ghidra_types.h"

extern int func_004A1520();
extern int func_004CD668(int param_1,int *param_2);
extern int DAT_005027cc;
extern int *DAT_005027d0;

// USA 002FCDDC <- EU 002FCDB8 (Ghidra, non-matching)
// GLOBAL DAT_005027cc int
// GLOBAL DAT_005027d0 int *

void func_005027C4(int *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_005027d0;
  *param_1 = DAT_005027cc;
  if (*piVar1 != 0) {
    func_004CD668(*piVar1,param_1);
  }
  func_004A1520(param_1);
  return;
}

