#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00520c50;
extern undefined4 *DAT_00520c54;
extern undefined4 DAT_00520c58;
extern uint *DAT_00520c5c;
extern undefined4 *DAT_00520c60;
extern undefined4 DAT_00520c64;
extern uint *DAT_00520c68;
extern undefined4 *DAT_00520c6c;
extern undefined4 DAT_00520c70;

// USA 00520B98 <- EU 00520B70 (Ghidra, non-matching)
// GLOBAL DAT_00520c50 uint *
// GLOBAL DAT_00520c54 undefined4 *
// GLOBAL DAT_00520c58 undefined4
// GLOBAL DAT_00520c5c uint *
// GLOBAL DAT_00520c60 undefined4 *
// GLOBAL DAT_00520c64 undefined4
// GLOBAL DAT_00520c68 uint *
// GLOBAL DAT_00520c6c undefined4 *
// GLOBAL DAT_00520c70 undefined4

undefined4 func_00520B98(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00520c50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520c50), iVar1 != 0)) {
    *DAT_00520c54 = DAT_00520c58;
  }
  if (DAT_00520c54 != param_2) {
    if (((*DAT_00520c5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520c5c), iVar1 != 0)) {
      *DAT_00520c60 = DAT_00520c64;
    }
    if (DAT_00520c60 != param_2) {
      if (((*DAT_00520c68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520c68), iVar1 != 0)) {
        *DAT_00520c6c = DAT_00520c70;
      }
      if (DAT_00520c6c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

