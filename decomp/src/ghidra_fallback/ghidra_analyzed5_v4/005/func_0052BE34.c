#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0052beac;
extern undefined4 *DAT_0052beb0;
extern undefined4 DAT_0052beb4;
extern uint *DAT_0052beb8;
extern undefined4 *DAT_0052bebc;
extern undefined4 DAT_0052bec0;

// USA 0052BE34 <- EU 0052BE0C (Ghidra, non-matching)
// GLOBAL DAT_0052beac uint *
// GLOBAL DAT_0052beb0 undefined4 *
// GLOBAL DAT_0052beb4 undefined4
// GLOBAL DAT_0052beb8 uint *
// GLOBAL DAT_0052bebc undefined4 *
// GLOBAL DAT_0052bec0 undefined4

undefined4 func_0052BE34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052beac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052beac), iVar1 != 0)) {
    *DAT_0052beb0 = DAT_0052beb4;
  }
  if (DAT_0052beb0 != param_2) {
    if (((*DAT_0052beb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052beb8), iVar1 != 0)) {
      *DAT_0052bebc = DAT_0052bec0;
    }
    if (DAT_0052bebc != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

