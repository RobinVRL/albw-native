#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00653E44(undefined4 *param_1);
extern uint *DAT_0055cd7c;
extern undefined4 *DAT_0055cd80;
extern undefined4 DAT_0055cd84;
extern uint *DAT_0055cd88;
extern undefined4 *DAT_0055cd8c;
extern undefined4 DAT_0055cd90;

// USA 0055CD04 <- EU 0055CCDC (Ghidra, non-matching)
// GLOBAL DAT_0055cd7c uint *
// GLOBAL DAT_0055cd80 undefined4 *
// GLOBAL DAT_0055cd84 undefined4
// GLOBAL DAT_0055cd88 uint *
// GLOBAL DAT_0055cd8c undefined4 *
// GLOBAL DAT_0055cd90 undefined4

undefined4 func_0055CD04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055cd7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cd7c), iVar1 != 0)) {
    *DAT_0055cd80 = DAT_0055cd84;
  }
  if (DAT_0055cd80 != param_2) {
    if (((*DAT_0055cd88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cd88), iVar1 != 0)) {
      *DAT_0055cd8c = DAT_0055cd90;
    }
    if (DAT_0055cd8c != param_2) {
      uVar2 = func_00653E44(param_2);
      return uVar2;
    }
  }
  return 1;
}

