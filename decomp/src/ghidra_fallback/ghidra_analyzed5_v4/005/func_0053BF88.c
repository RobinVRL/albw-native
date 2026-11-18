#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c040;
extern undefined4 *DAT_0053c044;
extern undefined4 DAT_0053c048;
extern uint *DAT_0053c04c;
extern undefined4 *DAT_0053c050;
extern undefined4 DAT_0053c054;
extern uint *DAT_0053c058;
extern undefined4 *DAT_0053c05c;
extern undefined4 DAT_0053c060;

// USA 0053BF88 <- EU 0053BF60 (Ghidra, non-matching)
// GLOBAL DAT_0053c040 uint *
// GLOBAL DAT_0053c044 undefined4 *
// GLOBAL DAT_0053c048 undefined4
// GLOBAL DAT_0053c04c uint *
// GLOBAL DAT_0053c050 undefined4 *
// GLOBAL DAT_0053c054 undefined4
// GLOBAL DAT_0053c058 uint *
// GLOBAL DAT_0053c05c undefined4 *
// GLOBAL DAT_0053c060 undefined4

undefined4 func_0053BF88(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c040 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c040), iVar1 != 0)) {
    *DAT_0053c044 = DAT_0053c048;
  }
  if (DAT_0053c044 != param_2) {
    if (((*DAT_0053c04c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c04c), iVar1 != 0)) {
      *DAT_0053c050 = DAT_0053c054;
    }
    if (DAT_0053c050 != param_2) {
      if (((*DAT_0053c058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c058), iVar1 != 0)) {
        *DAT_0053c05c = DAT_0053c060;
      }
      if (DAT_0053c05c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

