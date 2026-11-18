#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00552c3c;
extern undefined4 *DAT_00552c40;
extern undefined4 DAT_00552c44;
extern uint *DAT_00552c48;
extern undefined4 *DAT_00552c4c;
extern undefined4 DAT_00552c50;
extern uint *DAT_00552c54;
extern undefined4 *DAT_00552c58;
extern undefined4 DAT_00552c5c;

// USA 00552B84 <- EU 00552B5C (Ghidra, non-matching)
// GLOBAL DAT_00552c3c uint *
// GLOBAL DAT_00552c40 undefined4 *
// GLOBAL DAT_00552c44 undefined4
// GLOBAL DAT_00552c48 uint *
// GLOBAL DAT_00552c4c undefined4 *
// GLOBAL DAT_00552c50 undefined4
// GLOBAL DAT_00552c54 uint *
// GLOBAL DAT_00552c58 undefined4 *
// GLOBAL DAT_00552c5c undefined4

undefined4 func_00552B84(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552c3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552c3c), iVar1 != 0)) {
    *DAT_00552c40 = DAT_00552c44;
  }
  if (DAT_00552c40 != param_2) {
    if (((*DAT_00552c48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552c48), iVar1 != 0)) {
      *DAT_00552c4c = DAT_00552c50;
    }
    if (DAT_00552c4c != param_2) {
      if (((*DAT_00552c54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552c54), iVar1 != 0)) {
        *DAT_00552c58 = DAT_00552c5c;
      }
      if (DAT_00552c58 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

