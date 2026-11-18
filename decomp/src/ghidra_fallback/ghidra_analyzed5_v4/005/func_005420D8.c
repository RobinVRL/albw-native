#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00542190;
extern undefined4 *DAT_00542194;
extern undefined4 DAT_00542198;
extern uint *DAT_0054219c;
extern undefined4 *DAT_005421a0;
extern undefined4 DAT_005421a4;
extern uint *DAT_005421a8;
extern undefined4 *DAT_005421ac;
extern undefined4 DAT_005421b0;

// USA 005420D8 <- EU 005420B0 (Ghidra, non-matching)
// GLOBAL DAT_00542190 uint *
// GLOBAL DAT_00542194 undefined4 *
// GLOBAL DAT_00542198 undefined4
// GLOBAL DAT_0054219c uint *
// GLOBAL DAT_005421a0 undefined4 *
// GLOBAL DAT_005421a4 undefined4
// GLOBAL DAT_005421a8 uint *
// GLOBAL DAT_005421ac undefined4 *
// GLOBAL DAT_005421b0 undefined4

undefined4 func_005420D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00542190 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542190), iVar1 != 0)) {
    *DAT_00542194 = DAT_00542198;
  }
  if (DAT_00542194 != param_2) {
    if (((*DAT_0054219c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054219c), iVar1 != 0)) {
      *DAT_005421a0 = DAT_005421a4;
    }
    if (DAT_005421a0 != param_2) {
      if (((*DAT_005421a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005421a8), iVar1 != 0)) {
        *DAT_005421ac = DAT_005421b0;
      }
      if (DAT_005421ac != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

