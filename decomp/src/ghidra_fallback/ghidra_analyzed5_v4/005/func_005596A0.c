#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559714;
extern undefined4 *DAT_00559718;
extern undefined4 DAT_0055971c;
extern uint *DAT_00559720;
extern undefined4 *DAT_00559724;
extern undefined4 DAT_00559728;

// USA 005596A0 <- EU 00559678 (Ghidra, non-matching)
// GLOBAL DAT_00559714 uint *
// GLOBAL DAT_00559718 undefined4 *
// GLOBAL DAT_0055971c undefined4
// GLOBAL DAT_00559720 uint *
// GLOBAL DAT_00559724 undefined4 *
// GLOBAL DAT_00559728 undefined4

undefined4 func_005596A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559714 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559714), iVar1 != 0)) {
    *DAT_00559718 = DAT_0055971c;
  }
  if (DAT_00559718 != param_2) {
    if (((*DAT_00559720 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559720), iVar1 != 0)) {
      *DAT_00559724 = DAT_00559728;
    }
    if (DAT_00559724 != param_2) {
      return 0;
    }
  }
  return 1;
}

