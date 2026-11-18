#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_005507b0;
extern undefined4 *DAT_005507b4;
extern undefined4 DAT_005507b8;
extern uint *DAT_005507bc;
extern undefined4 *DAT_005507c0;
extern undefined4 DAT_005507c4;

// USA 00550738 <- EU 00550710 (Ghidra, non-matching)
// GLOBAL DAT_005507b0 uint *
// GLOBAL DAT_005507b4 undefined4 *
// GLOBAL DAT_005507b8 undefined4
// GLOBAL DAT_005507bc uint *
// GLOBAL DAT_005507c0 undefined4 *
// GLOBAL DAT_005507c4 undefined4

undefined4 func_00550738(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005507b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005507b0), iVar1 != 0)) {
    *DAT_005507b4 = DAT_005507b8;
  }
  if (DAT_005507b4 != param_2) {
    if (((*DAT_005507bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005507bc), iVar1 != 0)) {
      *DAT_005507c0 = DAT_005507c4;
    }
    if (DAT_005507c0 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

