#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005446f4;
extern undefined4 *DAT_005446f8;
extern undefined4 DAT_005446fc;
extern uint *DAT_00544700;
extern undefined4 *DAT_00544704;
extern undefined4 DAT_00544708;
extern uint *DAT_0054470c;
extern undefined4 *DAT_00544710;
extern undefined4 DAT_00544714;

// USA 0054463C <- EU 00544614 (Ghidra, non-matching)
// GLOBAL DAT_005446f4 uint *
// GLOBAL DAT_005446f8 undefined4 *
// GLOBAL DAT_005446fc undefined4
// GLOBAL DAT_00544700 uint *
// GLOBAL DAT_00544704 undefined4 *
// GLOBAL DAT_00544708 undefined4
// GLOBAL DAT_0054470c uint *
// GLOBAL DAT_00544710 undefined4 *
// GLOBAL DAT_00544714 undefined4

undefined4 func_0054463C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005446f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005446f4), iVar1 != 0)) {
    *DAT_005446f8 = DAT_005446fc;
  }
  if (DAT_005446f8 != param_2) {
    if (((*DAT_00544700 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544700), iVar1 != 0)) {
      *DAT_00544704 = DAT_00544708;
    }
    if (DAT_00544704 != param_2) {
      if (((*DAT_0054470c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054470c), iVar1 != 0)) {
        *DAT_00544710 = DAT_00544714;
      }
      if (DAT_00544710 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

