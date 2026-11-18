#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00585f30;
extern undefined4 *DAT_00585f34;
extern undefined4 DAT_00585f38;
extern uint *DAT_00585f3c;
extern undefined4 *DAT_00585f40;
extern undefined4 DAT_00585f44;
extern uint *DAT_00585f48;
extern undefined4 *DAT_00585f4c;
extern undefined4 DAT_00585f50;
extern uint *DAT_00585f54;
extern undefined4 *DAT_00585f58;
extern undefined4 DAT_00585f5c;

// USA 00585E34 <- EU 00585E0C (Ghidra, non-matching)
// GLOBAL DAT_00585f30 uint *
// GLOBAL DAT_00585f34 undefined4 *
// GLOBAL DAT_00585f38 undefined4
// GLOBAL DAT_00585f3c uint *
// GLOBAL DAT_00585f40 undefined4 *
// GLOBAL DAT_00585f44 undefined4
// GLOBAL DAT_00585f48 uint *
// GLOBAL DAT_00585f4c undefined4 *
// GLOBAL DAT_00585f50 undefined4
// GLOBAL DAT_00585f54 uint *
// GLOBAL DAT_00585f58 undefined4 *
// GLOBAL DAT_00585f5c undefined4

undefined4 func_00585E34(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00585f30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585f30), iVar1 != 0)) {
    *DAT_00585f34 = DAT_00585f38;
  }
  if (DAT_00585f34 != param_2) {
    if (((*DAT_00585f3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585f3c), iVar1 != 0)) {
      *DAT_00585f40 = DAT_00585f44;
    }
    if (DAT_00585f40 != param_2) {
      if (((*DAT_00585f48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585f48), iVar1 != 0)) {
        *DAT_00585f4c = DAT_00585f50;
      }
      if (DAT_00585f4c != param_2) {
        if (((*DAT_00585f54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585f54), iVar1 != 0))
        {
          *DAT_00585f58 = DAT_00585f5c;
        }
        if (DAT_00585f58 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

