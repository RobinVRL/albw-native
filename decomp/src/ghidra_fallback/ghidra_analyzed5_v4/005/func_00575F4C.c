#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00575fc4;
extern undefined4 *DAT_00575fc8;
extern undefined4 DAT_00575fcc;
extern uint *DAT_00575fd0;
extern undefined4 *DAT_00575fd4;
extern undefined4 DAT_00575fd8;

// USA 00575F4C <- EU 00575F24 (Ghidra, non-matching)
// GLOBAL DAT_00575fc4 uint *
// GLOBAL DAT_00575fc8 undefined4 *
// GLOBAL DAT_00575fcc undefined4
// GLOBAL DAT_00575fd0 uint *
// GLOBAL DAT_00575fd4 undefined4 *
// GLOBAL DAT_00575fd8 undefined4

undefined4 func_00575F4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00575fc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575fc4), iVar1 != 0)) {
    *DAT_00575fc8 = DAT_00575fcc;
  }
  if (DAT_00575fc8 != param_2) {
    if (((*DAT_00575fd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575fd0), iVar1 != 0)) {
      *DAT_00575fd4 = DAT_00575fd8;
    }
    if (DAT_00575fd4 != param_2) {
      uVar2 = func_004B9748(param_2);
      return uVar2;
    }
  }
  return 1;
}

