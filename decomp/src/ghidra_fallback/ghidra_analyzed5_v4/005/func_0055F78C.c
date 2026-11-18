#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055f800;
extern undefined4 *DAT_0055f804;
extern undefined4 DAT_0055f808;
extern uint *DAT_0055f80c;
extern undefined4 *DAT_0055f810;
extern undefined4 DAT_0055f814;

// USA 0055F78C <- EU 0055F764 (Ghidra, non-matching)
// GLOBAL DAT_0055f800 uint *
// GLOBAL DAT_0055f804 undefined4 *
// GLOBAL DAT_0055f808 undefined4
// GLOBAL DAT_0055f80c uint *
// GLOBAL DAT_0055f810 undefined4 *
// GLOBAL DAT_0055f814 undefined4

undefined4 func_0055F78C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f800 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f800), iVar1 != 0)) {
    *DAT_0055f804 = DAT_0055f808;
  }
  if (DAT_0055f804 != param_2) {
    if (((*DAT_0055f80c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f80c), iVar1 != 0)) {
      *DAT_0055f810 = DAT_0055f814;
    }
    if (DAT_0055f810 != param_2) {
      return 0;
    }
  }
  return 1;
}

