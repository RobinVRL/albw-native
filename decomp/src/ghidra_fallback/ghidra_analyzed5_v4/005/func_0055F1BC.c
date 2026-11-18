#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055f274;
extern undefined4 *DAT_0055f278;
extern undefined4 DAT_0055f27c;
extern uint *DAT_0055f280;
extern undefined4 *DAT_0055f284;
extern undefined4 DAT_0055f288;
extern uint *DAT_0055f28c;
extern undefined4 *DAT_0055f290;
extern undefined4 DAT_0055f294;

// USA 0055F1BC <- EU 0055F194 (Ghidra, non-matching)
// GLOBAL DAT_0055f274 uint *
// GLOBAL DAT_0055f278 undefined4 *
// GLOBAL DAT_0055f27c undefined4
// GLOBAL DAT_0055f280 uint *
// GLOBAL DAT_0055f284 undefined4 *
// GLOBAL DAT_0055f288 undefined4
// GLOBAL DAT_0055f28c uint *
// GLOBAL DAT_0055f290 undefined4 *
// GLOBAL DAT_0055f294 undefined4

undefined4 func_0055F1BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055f274 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f274), iVar1 != 0)) {
    *DAT_0055f278 = DAT_0055f27c;
  }
  if (DAT_0055f278 != param_2) {
    if (((*DAT_0055f280 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f280), iVar1 != 0)) {
      *DAT_0055f284 = DAT_0055f288;
    }
    if (DAT_0055f284 != param_2) {
      if (((*DAT_0055f28c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055f28c), iVar1 != 0)) {
        *DAT_0055f290 = DAT_0055f294;
      }
      if (DAT_0055f290 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

