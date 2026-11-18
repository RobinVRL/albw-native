#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00325B1C(undefined4 *param_1);
extern uint *DAT_005353c8;
extern undefined4 *DAT_005353cc;
extern undefined4 DAT_005353d0;
extern uint *DAT_005353d4;
extern undefined4 *DAT_005353d8;
extern undefined4 DAT_005353dc;

// USA 00535350 <- EU 00535328 (Ghidra, non-matching)
// GLOBAL DAT_005353c8 uint *
// GLOBAL DAT_005353cc undefined4 *
// GLOBAL DAT_005353d0 undefined4
// GLOBAL DAT_005353d4 uint *
// GLOBAL DAT_005353d8 undefined4 *
// GLOBAL DAT_005353dc undefined4

undefined4 func_00535350(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005353c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005353c8), iVar1 != 0)) {
    *DAT_005353cc = DAT_005353d0;
  }
  if (DAT_005353cc != param_2) {
    if (((*DAT_005353d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005353d4), iVar1 != 0)) {
      *DAT_005353d8 = DAT_005353dc;
    }
    if (DAT_005353d8 != param_2) {
      uVar2 = func_00325B1C(param_2);
      return uVar2;
    }
  }
  return 1;
}

