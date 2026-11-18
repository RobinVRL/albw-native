#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005469bc;
extern undefined4 *DAT_005469c0;
extern undefined4 DAT_005469c4;
extern uint *DAT_005469c8;
extern undefined4 *DAT_005469cc;
extern undefined4 DAT_005469d0;

// USA 00546948 <- EU 00546920 (Ghidra, non-matching)
// GLOBAL DAT_005469bc uint *
// GLOBAL DAT_005469c0 undefined4 *
// GLOBAL DAT_005469c4 undefined4
// GLOBAL DAT_005469c8 uint *
// GLOBAL DAT_005469cc undefined4 *
// GLOBAL DAT_005469d0 undefined4

undefined4 func_00546948(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005469bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005469bc), iVar1 != 0)) {
    *DAT_005469c0 = DAT_005469c4;
  }
  if (DAT_005469c0 != param_2) {
    if (((*DAT_005469c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005469c8), iVar1 != 0)) {
      *DAT_005469cc = DAT_005469d0;
    }
    if (DAT_005469cc != param_2) {
      return 0;
    }
  }
  return 1;
}

