#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b040;
extern undefined4 *DAT_0052b044;
extern undefined4 DAT_0052b048;
extern uint *DAT_0052b04c;
extern undefined4 *DAT_0052b050;
extern undefined4 DAT_0052b054;
extern uint *DAT_0052b058;
extern undefined4 *DAT_0052b05c;
extern undefined4 DAT_0052b060;

// USA 0052AF88 <- EU 0052AF60 (Ghidra, non-matching)
// GLOBAL DAT_0052b040 uint *
// GLOBAL DAT_0052b044 undefined4 *
// GLOBAL DAT_0052b048 undefined4
// GLOBAL DAT_0052b04c uint *
// GLOBAL DAT_0052b050 undefined4 *
// GLOBAL DAT_0052b054 undefined4
// GLOBAL DAT_0052b058 uint *
// GLOBAL DAT_0052b05c undefined4 *
// GLOBAL DAT_0052b060 undefined4

undefined4 func_0052AF88(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b040 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b040), iVar1 != 0)) {
    *DAT_0052b044 = DAT_0052b048;
  }
  if (DAT_0052b044 != param_2) {
    if (((*DAT_0052b04c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b04c), iVar1 != 0)) {
      *DAT_0052b050 = DAT_0052b054;
    }
    if (DAT_0052b050 != param_2) {
      if (((*DAT_0052b058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b058), iVar1 != 0)) {
        *DAT_0052b05c = DAT_0052b060;
      }
      if (DAT_0052b05c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

