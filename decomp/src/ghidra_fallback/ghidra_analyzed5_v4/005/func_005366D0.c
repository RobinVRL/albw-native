#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00536788;
extern undefined4 *DAT_0053678c;
extern undefined4 DAT_00536790;
extern uint *DAT_00536794;
extern undefined4 *DAT_00536798;
extern undefined4 DAT_0053679c;
extern uint *DAT_005367a0;
extern undefined4 *DAT_005367a4;
extern undefined4 DAT_005367a8;

// USA 005366D0 <- EU 005366A8 (Ghidra, non-matching)
// GLOBAL DAT_00536788 uint *
// GLOBAL DAT_0053678c undefined4 *
// GLOBAL DAT_00536790 undefined4
// GLOBAL DAT_00536794 uint *
// GLOBAL DAT_00536798 undefined4 *
// GLOBAL DAT_0053679c undefined4
// GLOBAL DAT_005367a0 uint *
// GLOBAL DAT_005367a4 undefined4 *
// GLOBAL DAT_005367a8 undefined4

undefined4 func_005366D0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00536788 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536788), iVar1 != 0)) {
    *DAT_0053678c = DAT_00536790;
  }
  if (DAT_0053678c != param_2) {
    if (((*DAT_00536794 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536794), iVar1 != 0)) {
      *DAT_00536798 = DAT_0053679c;
    }
    if (DAT_00536798 != param_2) {
      if (((*DAT_005367a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005367a0), iVar1 != 0)) {
        *DAT_005367a4 = DAT_005367a8;
      }
      if (DAT_005367a4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

