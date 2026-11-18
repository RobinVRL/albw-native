#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00553a44;
extern undefined4 *DAT_00553a48;
extern undefined4 DAT_00553a4c;
extern uint *DAT_00553a50;
extern undefined4 *DAT_00553a54;
extern undefined4 DAT_00553a58;

// USA 005539D0 <- EU 005539A8 (Ghidra, non-matching)
// GLOBAL DAT_00553a44 uint *
// GLOBAL DAT_00553a48 undefined4 *
// GLOBAL DAT_00553a4c undefined4
// GLOBAL DAT_00553a50 uint *
// GLOBAL DAT_00553a54 undefined4 *
// GLOBAL DAT_00553a58 undefined4

undefined4 func_005539D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00553a44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553a44), iVar1 != 0)) {
    *DAT_00553a48 = DAT_00553a4c;
  }
  if (DAT_00553a48 != param_2) {
    if (((*DAT_00553a50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553a50), iVar1 != 0)) {
      *DAT_00553a54 = DAT_00553a58;
    }
    if (DAT_00553a54 != param_2) {
      return 0;
    }
  }
  return 1;
}

