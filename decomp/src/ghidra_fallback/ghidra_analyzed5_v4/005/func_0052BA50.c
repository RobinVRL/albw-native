#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052bb08;
extern undefined4 *DAT_0052bb0c;
extern undefined4 DAT_0052bb10;
extern uint *DAT_0052bb14;
extern undefined4 *DAT_0052bb18;
extern undefined4 DAT_0052bb1c;
extern uint *DAT_0052bb20;
extern undefined4 *DAT_0052bb24;
extern undefined4 DAT_0052bb28;

// USA 0052BA50 <- EU 0052BA28 (Ghidra, non-matching)
// GLOBAL DAT_0052bb08 uint *
// GLOBAL DAT_0052bb0c undefined4 *
// GLOBAL DAT_0052bb10 undefined4
// GLOBAL DAT_0052bb14 uint *
// GLOBAL DAT_0052bb18 undefined4 *
// GLOBAL DAT_0052bb1c undefined4
// GLOBAL DAT_0052bb20 uint *
// GLOBAL DAT_0052bb24 undefined4 *
// GLOBAL DAT_0052bb28 undefined4

undefined4 func_0052BA50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052bb08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bb08), iVar1 != 0)) {
    *DAT_0052bb0c = DAT_0052bb10;
  }
  if (DAT_0052bb0c != param_2) {
    if (((*DAT_0052bb14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bb14), iVar1 != 0)) {
      *DAT_0052bb18 = DAT_0052bb1c;
    }
    if (DAT_0052bb18 != param_2) {
      if (((*DAT_0052bb20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052bb20), iVar1 != 0)) {
        *DAT_0052bb24 = DAT_0052bb28;
      }
      if (DAT_0052bb24 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

