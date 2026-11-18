#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00528cb8;
extern undefined4 *DAT_00528cbc;
extern undefined4 DAT_00528cc0;
extern uint *DAT_00528cc4;
extern undefined4 *DAT_00528cc8;
extern undefined4 DAT_00528ccc;
extern uint *DAT_00528cd0;
extern undefined4 *DAT_00528cd4;
extern undefined4 DAT_00528cd8;
extern uint *DAT_00528cdc;
extern undefined4 *DAT_00528ce0;
extern undefined4 DAT_00528ce4;

// USA 00528BBC <- EU 00528B94 (Ghidra, non-matching)
// GLOBAL DAT_00528cb8 uint *
// GLOBAL DAT_00528cbc undefined4 *
// GLOBAL DAT_00528cc0 undefined4
// GLOBAL DAT_00528cc4 uint *
// GLOBAL DAT_00528cc8 undefined4 *
// GLOBAL DAT_00528ccc undefined4
// GLOBAL DAT_00528cd0 uint *
// GLOBAL DAT_00528cd4 undefined4 *
// GLOBAL DAT_00528cd8 undefined4
// GLOBAL DAT_00528cdc uint *
// GLOBAL DAT_00528ce0 undefined4 *
// GLOBAL DAT_00528ce4 undefined4

undefined4 func_00528BBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00528cb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528cb8), iVar1 != 0)) {
    *DAT_00528cbc = DAT_00528cc0;
  }
  if (DAT_00528cbc != param_2) {
    if (((*DAT_00528cc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528cc4), iVar1 != 0)) {
      *DAT_00528cc8 = DAT_00528ccc;
    }
    if (DAT_00528cc8 != param_2) {
      if (((*DAT_00528cd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528cd0), iVar1 != 0)) {
        *DAT_00528cd4 = DAT_00528cd8;
      }
      if (DAT_00528cd4 != param_2) {
        if (((*DAT_00528cdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528cdc), iVar1 != 0))
        {
          *DAT_00528ce0 = DAT_00528ce4;
        }
        if (DAT_00528ce0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

