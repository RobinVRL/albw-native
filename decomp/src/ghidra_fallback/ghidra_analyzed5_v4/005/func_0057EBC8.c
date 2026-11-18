#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057ec3c;
extern undefined4 *DAT_0057ec40;
extern undefined4 DAT_0057ec44;
extern uint *DAT_0057ec48;
extern undefined4 *DAT_0057ec4c;
extern undefined4 DAT_0057ec50;

// USA 0057EBC8 <- EU 0057EBA0 (Ghidra, non-matching)
// GLOBAL DAT_0057ec3c uint *
// GLOBAL DAT_0057ec40 undefined4 *
// GLOBAL DAT_0057ec44 undefined4
// GLOBAL DAT_0057ec48 uint *
// GLOBAL DAT_0057ec4c undefined4 *
// GLOBAL DAT_0057ec50 undefined4

undefined4 func_0057EBC8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057ec3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ec3c), iVar1 != 0)) {
    *DAT_0057ec40 = DAT_0057ec44;
  }
  if (DAT_0057ec40 != param_2) {
    if (((*DAT_0057ec48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ec48), iVar1 != 0)) {
      *DAT_0057ec4c = DAT_0057ec50;
    }
    if (DAT_0057ec4c != param_2) {
      return 0;
    }
  }
  return 1;
}

