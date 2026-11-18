#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068cda4;
extern undefined4 *DAT_0068cda8;
extern undefined4 DAT_0068cdac;
extern uint *DAT_0068cdb0;
extern undefined4 *DAT_0068cdb4;
extern undefined4 DAT_0068cdb8;

// USA 0068CD2C <- EU 0068CD04 (Ghidra, non-matching)
// GLOBAL DAT_0068cda4 uint *
// GLOBAL DAT_0068cda8 undefined4 *
// GLOBAL DAT_0068cdac undefined4
// GLOBAL DAT_0068cdb0 uint *
// GLOBAL DAT_0068cdb4 undefined4 *
// GLOBAL DAT_0068cdb8 undefined4

undefined4 func_0068CD2C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068cda4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cda4), iVar1 != 0)) {
    *DAT_0068cda8 = DAT_0068cdac;
  }
  if (DAT_0068cda8 != param_2) {
    if (((*DAT_0068cdb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cdb0), iVar1 != 0)) {
      *DAT_0068cdb4 = DAT_0068cdb8;
    }
    if (DAT_0068cdb4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

