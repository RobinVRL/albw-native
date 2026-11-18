#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00534f08;
extern undefined4 *DAT_00534f0c;
extern undefined4 DAT_00534f10;
extern uint *DAT_00534f14;
extern undefined4 *DAT_00534f18;
extern undefined4 DAT_00534f1c;
extern uint *DAT_00534f20;
extern undefined4 *DAT_00534f24;
extern undefined4 DAT_00534f28;

// USA 00534E50 <- EU 00534E28 (Ghidra, non-matching)
// GLOBAL DAT_00534f08 uint *
// GLOBAL DAT_00534f0c undefined4 *
// GLOBAL DAT_00534f10 undefined4
// GLOBAL DAT_00534f14 uint *
// GLOBAL DAT_00534f18 undefined4 *
// GLOBAL DAT_00534f1c undefined4
// GLOBAL DAT_00534f20 uint *
// GLOBAL DAT_00534f24 undefined4 *
// GLOBAL DAT_00534f28 undefined4

undefined4 func_00534E50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00534f08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534f08), iVar1 != 0)) {
    *DAT_00534f0c = DAT_00534f10;
  }
  if (DAT_00534f0c != param_2) {
    if (((*DAT_00534f14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534f14), iVar1 != 0)) {
      *DAT_00534f18 = DAT_00534f1c;
    }
    if (DAT_00534f18 != param_2) {
      if (((*DAT_00534f20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534f20), iVar1 != 0)) {
        *DAT_00534f24 = DAT_00534f28;
      }
      if (DAT_00534f24 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

