#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068eb1c;
extern undefined4 *DAT_0068eb20;
extern undefined4 DAT_0068eb24;
extern uint *DAT_0068eb28;
extern undefined4 *DAT_0068eb2c;
extern undefined4 DAT_0068eb30;

// USA 0068EAA4 <- EU 0068EA7C (Ghidra, non-matching)
// GLOBAL DAT_0068eb1c uint *
// GLOBAL DAT_0068eb20 undefined4 *
// GLOBAL DAT_0068eb24 undefined4
// GLOBAL DAT_0068eb28 uint *
// GLOBAL DAT_0068eb2c undefined4 *
// GLOBAL DAT_0068eb30 undefined4

undefined4 func_0068EAA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068eb1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068eb1c), iVar1 != 0)) {
    *DAT_0068eb20 = DAT_0068eb24;
  }
  if (DAT_0068eb20 != param_2) {
    if (((*DAT_0068eb28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068eb28), iVar1 != 0)) {
      *DAT_0068eb2c = DAT_0068eb30;
    }
    if (DAT_0068eb2c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

