#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00546d70;
extern undefined4 *DAT_00546d74;
extern undefined4 DAT_00546d78;
extern uint *DAT_00546d7c;
extern undefined4 *DAT_00546d80;
extern undefined4 DAT_00546d84;

// USA 00546CFC <- EU 00546CD4 (Ghidra, non-matching)
// GLOBAL DAT_00546d70 uint *
// GLOBAL DAT_00546d74 undefined4 *
// GLOBAL DAT_00546d78 undefined4
// GLOBAL DAT_00546d7c uint *
// GLOBAL DAT_00546d80 undefined4 *
// GLOBAL DAT_00546d84 undefined4

undefined4 func_00546CFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00546d70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546d70), iVar1 != 0)) {
    *DAT_00546d74 = DAT_00546d78;
  }
  if (DAT_00546d74 != param_2) {
    if (((*DAT_00546d7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546d7c), iVar1 != 0)) {
      *DAT_00546d80 = DAT_00546d84;
    }
    if (DAT_00546d80 != param_2) {
      return 0;
    }
  }
  return 1;
}

