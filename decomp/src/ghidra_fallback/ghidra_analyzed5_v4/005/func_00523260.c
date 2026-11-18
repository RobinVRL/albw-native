#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005232d4;
extern undefined4 *DAT_005232d8;
extern undefined4 DAT_005232dc;
extern uint *DAT_005232e0;
extern undefined4 *DAT_005232e4;
extern undefined4 DAT_005232e8;

// USA 00523260 <- EU 00523238 (Ghidra, non-matching)
// GLOBAL DAT_005232d4 uint *
// GLOBAL DAT_005232d8 undefined4 *
// GLOBAL DAT_005232dc undefined4
// GLOBAL DAT_005232e0 uint *
// GLOBAL DAT_005232e4 undefined4 *
// GLOBAL DAT_005232e8 undefined4

undefined4 func_00523260(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005232d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005232d4), iVar1 != 0)) {
    *DAT_005232d8 = DAT_005232dc;
  }
  if (DAT_005232d8 != param_2) {
    if (((*DAT_005232e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005232e0), iVar1 != 0)) {
      *DAT_005232e4 = DAT_005232e8;
    }
    if (DAT_005232e4 != param_2) {
      return 0;
    }
  }
  return 1;
}

