#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00631550(undefined4 *param_1);
extern uint *DAT_0055cf4c;
extern undefined4 *DAT_0055cf50;
extern undefined4 DAT_0055cf54;
extern uint *DAT_0055cf58;
extern undefined4 *DAT_0055cf5c;
extern undefined4 DAT_0055cf60;

// USA 0055CED4 <- EU 0055CEAC (Ghidra, non-matching)
// GLOBAL DAT_0055cf4c uint *
// GLOBAL DAT_0055cf50 undefined4 *
// GLOBAL DAT_0055cf54 undefined4
// GLOBAL DAT_0055cf58 uint *
// GLOBAL DAT_0055cf5c undefined4 *
// GLOBAL DAT_0055cf60 undefined4

undefined4 func_0055CED4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055cf4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cf4c), iVar1 != 0)) {
    *DAT_0055cf50 = DAT_0055cf54;
  }
  if (DAT_0055cf50 != param_2) {
    if (((*DAT_0055cf58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cf58), iVar1 != 0)) {
      *DAT_0055cf5c = DAT_0055cf60;
    }
    if (DAT_0055cf5c != param_2) {
      uVar2 = func_00631550(param_2);
      return uVar2;
    }
  }
  return 1;
}

