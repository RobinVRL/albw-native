#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00577820;
extern undefined4 *DAT_00577824;
extern undefined4 DAT_00577828;
extern uint *DAT_0057782c;
extern undefined4 *DAT_00577830;
extern undefined4 DAT_00577834;
extern uint *DAT_00577838;
extern undefined4 *DAT_0057783c;
extern undefined4 DAT_00577840;

// USA 00577768 <- EU 00577740 (Ghidra, non-matching)
// GLOBAL DAT_00577820 uint *
// GLOBAL DAT_00577824 undefined4 *
// GLOBAL DAT_00577828 undefined4
// GLOBAL DAT_0057782c uint *
// GLOBAL DAT_00577830 undefined4 *
// GLOBAL DAT_00577834 undefined4
// GLOBAL DAT_00577838 uint *
// GLOBAL DAT_0057783c undefined4 *
// GLOBAL DAT_00577840 undefined4

undefined4 func_00577768(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00577820 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577820), iVar1 != 0)) {
    *DAT_00577824 = DAT_00577828;
  }
  if (DAT_00577824 != param_2) {
    if (((*DAT_0057782c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057782c), iVar1 != 0)) {
      *DAT_00577830 = DAT_00577834;
    }
    if (DAT_00577830 != param_2) {
      if (((*DAT_00577838 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577838), iVar1 != 0)) {
        *DAT_0057783c = DAT_00577840;
      }
      if (DAT_0057783c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

