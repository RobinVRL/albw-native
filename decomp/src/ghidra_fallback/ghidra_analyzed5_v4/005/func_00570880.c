#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005708f4;
extern undefined4 *DAT_005708f8;
extern undefined4 DAT_005708fc;
extern uint *DAT_00570900;
extern undefined4 *DAT_00570904;
extern undefined4 DAT_00570908;

// USA 00570880 <- EU 00570858 (Ghidra, non-matching)
// GLOBAL DAT_005708f4 uint *
// GLOBAL DAT_005708f8 undefined4 *
// GLOBAL DAT_005708fc undefined4
// GLOBAL DAT_00570900 uint *
// GLOBAL DAT_00570904 undefined4 *
// GLOBAL DAT_00570908 undefined4

undefined4 func_00570880(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005708f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005708f4), iVar1 != 0)) {
    *DAT_005708f8 = DAT_005708fc;
  }
  if (DAT_005708f8 != param_2) {
    if (((*DAT_00570900 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570900), iVar1 != 0)) {
      *DAT_00570904 = DAT_00570908;
    }
    if (DAT_00570904 != param_2) {
      return 0;
    }
  }
  return 1;
}

