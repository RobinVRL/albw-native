#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0054b8e0;
extern undefined4 *DAT_0054b8e4;
extern undefined4 DAT_0054b8e8;
extern uint *DAT_0054b8ec;
extern undefined4 *DAT_0054b8f0;
extern undefined4 DAT_0054b8f4;

// USA 0054B868 <- EU 0054B840 (Ghidra, non-matching)
// GLOBAL DAT_0054b8e0 uint *
// GLOBAL DAT_0054b8e4 undefined4 *
// GLOBAL DAT_0054b8e8 undefined4
// GLOBAL DAT_0054b8ec uint *
// GLOBAL DAT_0054b8f0 undefined4 *
// GLOBAL DAT_0054b8f4 undefined4

undefined4 func_0054B868(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0054b8e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b8e0), iVar1 != 0)) {
    *DAT_0054b8e4 = DAT_0054b8e8;
  }
  if (DAT_0054b8e4 != param_2) {
    if (((*DAT_0054b8ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b8ec), iVar1 != 0)) {
      *DAT_0054b8f0 = DAT_0054b8f4;
    }
    if (DAT_0054b8f0 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

