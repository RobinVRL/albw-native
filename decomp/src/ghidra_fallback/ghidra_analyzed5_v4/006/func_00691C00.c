#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00691c74;
extern undefined4 *DAT_00691c78;
extern undefined4 DAT_00691c7c;
extern uint *DAT_00691c80;
extern undefined4 *DAT_00691c84;
extern undefined4 DAT_00691c88;

// USA 00691C00 <- EU 00691BD8 (Ghidra, non-matching)
// GLOBAL DAT_00691c74 uint *
// GLOBAL DAT_00691c78 undefined4 *
// GLOBAL DAT_00691c7c undefined4
// GLOBAL DAT_00691c80 uint *
// GLOBAL DAT_00691c84 undefined4 *
// GLOBAL DAT_00691c88 undefined4

undefined4 func_00691C00(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00691c74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00691c74), iVar1 != 0)) {
    *DAT_00691c78 = DAT_00691c7c;
  }
  if (DAT_00691c78 != param_2) {
    if (((*DAT_00691c80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00691c80), iVar1 != 0)) {
      *DAT_00691c84 = DAT_00691c88;
    }
    if (DAT_00691c84 != param_2) {
      return 0;
    }
  }
  return 1;
}

