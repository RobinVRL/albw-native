#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0051f9bc;
extern undefined4 *DAT_0051f9c0;
extern undefined4 DAT_0051f9c4;
extern uint *DAT_0051f9c8;
extern undefined4 *DAT_0051f9cc;
extern undefined4 DAT_0051f9d0;

// USA 0051F944 <- EU 0051F91C (Ghidra, non-matching)
// GLOBAL DAT_0051f9bc uint *
// GLOBAL DAT_0051f9c0 undefined4 *
// GLOBAL DAT_0051f9c4 undefined4
// GLOBAL DAT_0051f9c8 uint *
// GLOBAL DAT_0051f9cc undefined4 *
// GLOBAL DAT_0051f9d0 undefined4

undefined4 func_0051F944(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0051f9bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f9bc), iVar1 != 0)) {
    *DAT_0051f9c0 = DAT_0051f9c4;
  }
  if (DAT_0051f9c0 != param_2) {
    if (((*DAT_0051f9c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f9c8), iVar1 != 0)) {
      *DAT_0051f9cc = DAT_0051f9d0;
    }
    if (DAT_0051f9cc != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

