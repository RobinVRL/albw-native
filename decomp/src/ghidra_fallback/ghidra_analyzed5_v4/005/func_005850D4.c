#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058518c;
extern undefined4 *DAT_00585190;
extern undefined4 DAT_00585194;
extern uint *DAT_00585198;
extern undefined4 *DAT_0058519c;
extern undefined4 DAT_005851a0;
extern uint *DAT_005851a4;
extern undefined4 *DAT_005851a8;
extern undefined4 DAT_005851ac;

// USA 005850D4 <- EU 005850AC (Ghidra, non-matching)
// GLOBAL DAT_0058518c uint *
// GLOBAL DAT_00585190 undefined4 *
// GLOBAL DAT_00585194 undefined4
// GLOBAL DAT_00585198 uint *
// GLOBAL DAT_0058519c undefined4 *
// GLOBAL DAT_005851a0 undefined4
// GLOBAL DAT_005851a4 uint *
// GLOBAL DAT_005851a8 undefined4 *
// GLOBAL DAT_005851ac undefined4

undefined4 func_005850D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058518c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058518c), iVar1 != 0)) {
    *DAT_00585190 = DAT_00585194;
  }
  if (DAT_00585190 != param_2) {
    if (((*DAT_00585198 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585198), iVar1 != 0)) {
      *DAT_0058519c = DAT_005851a0;
    }
    if (DAT_0058519c != param_2) {
      if (((*DAT_005851a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005851a4), iVar1 != 0)) {
        *DAT_005851a8 = DAT_005851ac;
      }
      if (DAT_005851a8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

