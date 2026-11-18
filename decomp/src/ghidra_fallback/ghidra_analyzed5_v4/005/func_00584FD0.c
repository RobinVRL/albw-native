#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00585088;
extern undefined4 *DAT_0058508c;
extern undefined4 DAT_00585090;
extern uint *DAT_00585094;
extern undefined4 *DAT_00585098;
extern undefined4 DAT_0058509c;
extern uint *DAT_005850a0;
extern undefined4 *DAT_005850a4;
extern undefined4 DAT_005850a8;

// USA 00584FD0 <- EU 00584FA8 (Ghidra, non-matching)
// GLOBAL DAT_00585088 uint *
// GLOBAL DAT_0058508c undefined4 *
// GLOBAL DAT_00585090 undefined4
// GLOBAL DAT_00585094 uint *
// GLOBAL DAT_00585098 undefined4 *
// GLOBAL DAT_0058509c undefined4
// GLOBAL DAT_005850a0 uint *
// GLOBAL DAT_005850a4 undefined4 *
// GLOBAL DAT_005850a8 undefined4

undefined4 func_00584FD0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00585088 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585088), iVar1 != 0)) {
    *DAT_0058508c = DAT_00585090;
  }
  if (DAT_0058508c != param_2) {
    if (((*DAT_00585094 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585094), iVar1 != 0)) {
      *DAT_00585098 = DAT_0058509c;
    }
    if (DAT_00585098 != param_2) {
      if (((*DAT_005850a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005850a0), iVar1 != 0)) {
        *DAT_005850a4 = DAT_005850a8;
      }
      if (DAT_005850a4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

