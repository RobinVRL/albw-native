#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00540f3c;
extern undefined4 *DAT_00540f40;
extern undefined4 DAT_00540f44;
extern uint *DAT_00540f48;
extern undefined4 *DAT_00540f4c;
extern undefined4 DAT_00540f50;
extern uint *DAT_00540f54;
extern undefined4 *DAT_00540f58;
extern undefined4 DAT_00540f5c;

// USA 00540E84 <- EU 00540E5C (Ghidra, non-matching)
// GLOBAL DAT_00540f3c uint *
// GLOBAL DAT_00540f40 undefined4 *
// GLOBAL DAT_00540f44 undefined4
// GLOBAL DAT_00540f48 uint *
// GLOBAL DAT_00540f4c undefined4 *
// GLOBAL DAT_00540f50 undefined4
// GLOBAL DAT_00540f54 uint *
// GLOBAL DAT_00540f58 undefined4 *
// GLOBAL DAT_00540f5c undefined4

undefined4 func_00540E84(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00540f3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540f3c), iVar1 != 0)) {
    *DAT_00540f40 = DAT_00540f44;
  }
  if (DAT_00540f40 != param_2) {
    if (((*DAT_00540f48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540f48), iVar1 != 0)) {
      *DAT_00540f4c = DAT_00540f50;
    }
    if (DAT_00540f4c != param_2) {
      if (((*DAT_00540f54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540f54), iVar1 != 0)) {
        *DAT_00540f58 = DAT_00540f5c;
      }
      if (DAT_00540f58 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

