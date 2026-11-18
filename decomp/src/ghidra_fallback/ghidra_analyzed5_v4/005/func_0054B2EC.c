#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054b3a4;
extern undefined4 *DAT_0054b3a8;
extern undefined4 DAT_0054b3ac;
extern uint *DAT_0054b3b0;
extern undefined4 *DAT_0054b3b4;
extern undefined4 DAT_0054b3b8;
extern uint *DAT_0054b3bc;
extern undefined4 *DAT_0054b3c0;
extern undefined4 DAT_0054b3c4;

// USA 0054B2EC <- EU 0054B2C4 (Ghidra, non-matching)
// GLOBAL DAT_0054b3a4 uint *
// GLOBAL DAT_0054b3a8 undefined4 *
// GLOBAL DAT_0054b3ac undefined4
// GLOBAL DAT_0054b3b0 uint *
// GLOBAL DAT_0054b3b4 undefined4 *
// GLOBAL DAT_0054b3b8 undefined4
// GLOBAL DAT_0054b3bc uint *
// GLOBAL DAT_0054b3c0 undefined4 *
// GLOBAL DAT_0054b3c4 undefined4

undefined4 func_0054B2EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054b3a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b3a4), iVar1 != 0)) {
    *DAT_0054b3a8 = DAT_0054b3ac;
  }
  if (DAT_0054b3a8 != param_2) {
    if (((*DAT_0054b3b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b3b0), iVar1 != 0)) {
      *DAT_0054b3b4 = DAT_0054b3b8;
    }
    if (DAT_0054b3b4 != param_2) {
      if (((*DAT_0054b3bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b3bc), iVar1 != 0)) {
        *DAT_0054b3c0 = DAT_0054b3c4;
      }
      if (DAT_0054b3c0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

