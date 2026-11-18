#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051dc38;
extern undefined4 *DAT_0051dc3c;
extern undefined4 DAT_0051dc40;
extern uint *DAT_0051dc44;
extern undefined4 *DAT_0051dc48;
extern undefined4 DAT_0051dc4c;
extern uint *DAT_0051dc50;
extern undefined4 *DAT_0051dc54;
extern undefined4 DAT_0051dc58;
extern uint *DAT_0051dc5c;
extern undefined4 *DAT_0051dc60;
extern undefined4 DAT_0051dc64;

// USA 0051DB3C <- EU 0051DB14 (Ghidra, non-matching)
// GLOBAL DAT_0051dc38 uint *
// GLOBAL DAT_0051dc3c undefined4 *
// GLOBAL DAT_0051dc40 undefined4
// GLOBAL DAT_0051dc44 uint *
// GLOBAL DAT_0051dc48 undefined4 *
// GLOBAL DAT_0051dc4c undefined4
// GLOBAL DAT_0051dc50 uint *
// GLOBAL DAT_0051dc54 undefined4 *
// GLOBAL DAT_0051dc58 undefined4
// GLOBAL DAT_0051dc5c uint *
// GLOBAL DAT_0051dc60 undefined4 *
// GLOBAL DAT_0051dc64 undefined4

undefined4 func_0051DB3C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051dc38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dc38), iVar1 != 0)) {
    *DAT_0051dc3c = DAT_0051dc40;
  }
  if (DAT_0051dc3c != param_2) {
    if (((*DAT_0051dc44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dc44), iVar1 != 0)) {
      *DAT_0051dc48 = DAT_0051dc4c;
    }
    if (DAT_0051dc48 != param_2) {
      if (((*DAT_0051dc50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dc50), iVar1 != 0)) {
        *DAT_0051dc54 = DAT_0051dc58;
      }
      if (DAT_0051dc54 != param_2) {
        if (((*DAT_0051dc5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dc5c), iVar1 != 0))
        {
          *DAT_0051dc60 = DAT_0051dc64;
        }
        if (DAT_0051dc60 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

