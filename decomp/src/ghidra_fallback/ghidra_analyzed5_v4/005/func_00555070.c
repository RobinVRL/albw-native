#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055516c;
extern undefined4 *DAT_00555170;
extern undefined4 DAT_00555174;
extern uint *DAT_00555178;
extern undefined4 *DAT_0055517c;
extern undefined4 DAT_00555180;
extern uint *DAT_00555184;
extern undefined4 *DAT_00555188;
extern undefined4 DAT_0055518c;
extern uint *DAT_00555190;
extern undefined4 *DAT_00555194;
extern undefined4 DAT_00555198;

// USA 00555070 <- EU 00555048 (Ghidra, non-matching)
// GLOBAL DAT_0055516c uint *
// GLOBAL DAT_00555170 undefined4 *
// GLOBAL DAT_00555174 undefined4
// GLOBAL DAT_00555178 uint *
// GLOBAL DAT_0055517c undefined4 *
// GLOBAL DAT_00555180 undefined4
// GLOBAL DAT_00555184 uint *
// GLOBAL DAT_00555188 undefined4 *
// GLOBAL DAT_0055518c undefined4
// GLOBAL DAT_00555190 uint *
// GLOBAL DAT_00555194 undefined4 *
// GLOBAL DAT_00555198 undefined4

undefined4 func_00555070(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055516c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055516c), iVar1 != 0)) {
    *DAT_00555170 = DAT_00555174;
  }
  if (DAT_00555170 != param_2) {
    if (((*DAT_00555178 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555178), iVar1 != 0)) {
      *DAT_0055517c = DAT_00555180;
    }
    if (DAT_0055517c != param_2) {
      if (((*DAT_00555184 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555184), iVar1 != 0)) {
        *DAT_00555188 = DAT_0055518c;
      }
      if (DAT_00555188 != param_2) {
        if (((*DAT_00555190 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555190), iVar1 != 0))
        {
          *DAT_00555194 = DAT_00555198;
        }
        if (DAT_00555194 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

