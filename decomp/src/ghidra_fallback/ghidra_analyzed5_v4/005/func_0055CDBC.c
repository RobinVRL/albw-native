#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00653E44(undefined4 *param_1);
extern uint *DAT_0055ce34;
extern undefined4 *DAT_0055ce38;
extern undefined4 DAT_0055ce3c;
extern uint *DAT_0055ce40;
extern undefined4 *DAT_0055ce44;
extern undefined4 DAT_0055ce48;

// USA 0055CDBC <- EU 0055CD94 (Ghidra, non-matching)
// GLOBAL DAT_0055ce34 uint *
// GLOBAL DAT_0055ce38 undefined4 *
// GLOBAL DAT_0055ce3c undefined4
// GLOBAL DAT_0055ce40 uint *
// GLOBAL DAT_0055ce44 undefined4 *
// GLOBAL DAT_0055ce48 undefined4

undefined4 func_0055CDBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055ce34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ce34), iVar1 != 0)) {
    *DAT_0055ce38 = DAT_0055ce3c;
  }
  if (DAT_0055ce38 != param_2) {
    if (((*DAT_0055ce40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ce40), iVar1 != 0)) {
      *DAT_0055ce44 = DAT_0055ce48;
    }
    if (DAT_0055ce44 != param_2) {
      uVar2 = func_00653E44(param_2);
      return uVar2;
    }
  }
  return 1;
}

