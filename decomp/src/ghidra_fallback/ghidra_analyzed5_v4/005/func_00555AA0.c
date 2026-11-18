#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00555b58;
extern undefined4 *DAT_00555b5c;
extern undefined4 DAT_00555b60;
extern uint *DAT_00555b64;
extern undefined4 *DAT_00555b68;
extern undefined4 DAT_00555b6c;
extern uint *DAT_00555b70;
extern undefined4 *DAT_00555b74;
extern undefined4 DAT_00555b78;

// USA 00555AA0 <- EU 00555A78 (Ghidra, non-matching)
// GLOBAL DAT_00555b58 uint *
// GLOBAL DAT_00555b5c undefined4 *
// GLOBAL DAT_00555b60 undefined4
// GLOBAL DAT_00555b64 uint *
// GLOBAL DAT_00555b68 undefined4 *
// GLOBAL DAT_00555b6c undefined4
// GLOBAL DAT_00555b70 uint *
// GLOBAL DAT_00555b74 undefined4 *
// GLOBAL DAT_00555b78 undefined4

undefined4 func_00555AA0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00555b58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555b58), iVar1 != 0)) {
    *DAT_00555b5c = DAT_00555b60;
  }
  if (DAT_00555b5c != param_2) {
    if (((*DAT_00555b64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555b64), iVar1 != 0)) {
      *DAT_00555b68 = DAT_00555b6c;
    }
    if (DAT_00555b68 != param_2) {
      if (((*DAT_00555b70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555b70), iVar1 != 0)) {
        *DAT_00555b74 = DAT_00555b78;
      }
      if (DAT_00555b74 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

