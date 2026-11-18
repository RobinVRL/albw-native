#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_0057c96c;
extern undefined4 *DAT_0057c970;
extern undefined4 DAT_0057c974;

// USA 0057C940 <- EU 0057C918 (Ghidra, non-matching)
// GLOBAL DAT_0057c96c uint *
// GLOBAL DAT_0057c970 undefined4 *
// GLOBAL DAT_0057c974 undefined4

void func_0057C940(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057c96c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c96c), iVar1 != 0)) {
    *DAT_0057c970 = DAT_0057c974;
  }
  if (DAT_0057c970 != param_2) {
    func_004B9748(param_2);
  }
  return;
}

