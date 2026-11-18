#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068da94;
extern undefined4 *DAT_0068da98;
extern undefined4 DAT_0068da9c;
extern uint *DAT_0068daa0;
extern undefined4 *DAT_0068daa4;
extern undefined4 DAT_0068daa8;

// USA 0068DA1C <- EU 0068D9F4 (Ghidra, non-matching)
// GLOBAL DAT_0068da94 uint *
// GLOBAL DAT_0068da98 undefined4 *
// GLOBAL DAT_0068da9c undefined4
// GLOBAL DAT_0068daa0 uint *
// GLOBAL DAT_0068daa4 undefined4 *
// GLOBAL DAT_0068daa8 undefined4

undefined4 func_0068DA1C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068da94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068da94), iVar1 != 0)) {
    *DAT_0068da98 = DAT_0068da9c;
  }
  if (DAT_0068da98 != param_2) {
    if (((*DAT_0068daa0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068daa0), iVar1 != 0)) {
      *DAT_0068daa4 = DAT_0068daa8;
    }
    if (DAT_0068daa4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

