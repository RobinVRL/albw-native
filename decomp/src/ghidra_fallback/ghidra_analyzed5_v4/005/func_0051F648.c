#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_0051f6c0;
extern undefined4 *DAT_0051f6c4;
extern undefined4 DAT_0051f6c8;
extern uint *DAT_0051f6cc;
extern undefined4 *DAT_0051f6d0;
extern undefined4 DAT_0051f6d4;

// USA 0051F648 <- EU 0051F620 (Ghidra, non-matching)
// GLOBAL DAT_0051f6c0 uint *
// GLOBAL DAT_0051f6c4 undefined4 *
// GLOBAL DAT_0051f6c8 undefined4
// GLOBAL DAT_0051f6cc uint *
// GLOBAL DAT_0051f6d0 undefined4 *
// GLOBAL DAT_0051f6d4 undefined4

undefined4 func_0051F648(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0051f6c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f6c0), iVar1 != 0)) {
    *DAT_0051f6c4 = DAT_0051f6c8;
  }
  if (DAT_0051f6c4 != param_2) {
    if (((*DAT_0051f6cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f6cc), iVar1 != 0)) {
      *DAT_0051f6d0 = DAT_0051f6d4;
    }
    if (DAT_0051f6d0 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

