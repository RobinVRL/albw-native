#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053e104;
extern undefined4 *DAT_0053e108;
extern undefined4 DAT_0053e10c;
extern uint *DAT_0053e110;
extern undefined4 *DAT_0053e114;
extern undefined4 DAT_0053e118;
extern uint *DAT_0053e11c;
extern undefined4 *DAT_0053e120;
extern undefined4 DAT_0053e124;
extern uint *DAT_0053e128;
extern undefined4 *DAT_0053e12c;
extern undefined4 DAT_0053e130;
extern uint *DAT_0053e134;
extern undefined4 *DAT_0053e138;
extern undefined4 DAT_0053e13c;

// USA 0053DFC4 <- EU 0053DF9C (Ghidra, non-matching)
// GLOBAL DAT_0053e104 uint *
// GLOBAL DAT_0053e108 undefined4 *
// GLOBAL DAT_0053e10c undefined4
// GLOBAL DAT_0053e110 uint *
// GLOBAL DAT_0053e114 undefined4 *
// GLOBAL DAT_0053e118 undefined4
// GLOBAL DAT_0053e11c uint *
// GLOBAL DAT_0053e120 undefined4 *
// GLOBAL DAT_0053e124 undefined4
// GLOBAL DAT_0053e128 uint *
// GLOBAL DAT_0053e12c undefined4 *
// GLOBAL DAT_0053e130 undefined4
// GLOBAL DAT_0053e134 uint *
// GLOBAL DAT_0053e138 undefined4 *
// GLOBAL DAT_0053e13c undefined4

undefined4 func_0053DFC4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053e104 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e104), iVar1 != 0)) {
    *DAT_0053e108 = DAT_0053e10c;
  }
  if (DAT_0053e108 != param_2) {
    if (((*DAT_0053e110 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e110), iVar1 != 0)) {
      *DAT_0053e114 = DAT_0053e118;
    }
    if (DAT_0053e114 != param_2) {
      if (((*DAT_0053e11c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e11c), iVar1 != 0)) {
        *DAT_0053e120 = DAT_0053e124;
      }
      if (DAT_0053e120 != param_2) {
        if (((*DAT_0053e128 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e128), iVar1 != 0))
        {
          *DAT_0053e12c = DAT_0053e130;
        }
        if (DAT_0053e12c != param_2) {
          if (((*DAT_0053e134 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053e134), iVar1 != 0)
             ) {
            *DAT_0053e138 = DAT_0053e13c;
          }
          if (DAT_0053e138 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

