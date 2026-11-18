#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0055dfc0;
extern undefined4 *DAT_0055dfc4;
extern undefined4 DAT_0055dfc8;
extern uint *DAT_0055dfcc;
extern undefined4 *DAT_0055dfd0;
extern undefined4 DAT_0055dfd4;

// USA 0055DF48 <- EU 0055DF20 (Ghidra, non-matching)
// GLOBAL DAT_0055dfc0 uint *
// GLOBAL DAT_0055dfc4 undefined4 *
// GLOBAL DAT_0055dfc8 undefined4
// GLOBAL DAT_0055dfcc uint *
// GLOBAL DAT_0055dfd0 undefined4 *
// GLOBAL DAT_0055dfd4 undefined4

undefined4 func_0055DF48(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055dfc0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055dfc0), iVar1 != 0)) {
    *DAT_0055dfc4 = DAT_0055dfc8;
  }
  if (DAT_0055dfc4 != param_2) {
    if (((*DAT_0055dfcc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055dfcc), iVar1 != 0)) {
      *DAT_0055dfd0 = DAT_0055dfd4;
    }
    if (DAT_0055dfd0 != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

