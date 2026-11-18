#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0062A730(undefined4 *param_1);
extern uint *DAT_005562a4;
extern undefined4 *DAT_005562a8;
extern undefined4 DAT_005562ac;
extern uint *DAT_005562b0;
extern undefined4 *DAT_005562b4;
extern undefined4 DAT_005562b8;

// USA 0055622C <- EU 00556204 (Ghidra, non-matching)
// GLOBAL DAT_005562a4 uint *
// GLOBAL DAT_005562a8 undefined4 *
// GLOBAL DAT_005562ac undefined4
// GLOBAL DAT_005562b0 uint *
// GLOBAL DAT_005562b4 undefined4 *
// GLOBAL DAT_005562b8 undefined4

undefined4 func_0055622C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005562a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005562a4), iVar1 != 0)) {
    *DAT_005562a8 = DAT_005562ac;
  }
  if (DAT_005562a8 != param_2) {
    if (((*DAT_005562b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005562b0), iVar1 != 0)) {
      *DAT_005562b4 = DAT_005562b8;
    }
    if (DAT_005562b4 != param_2) {
      uVar2 = func_0062A730(param_2);
      return uVar2;
    }
  }
  return 1;
}

