#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ca0c;
extern undefined4 *DAT_0068ca10;
extern undefined4 DAT_0068ca14;
extern uint *DAT_0068ca18;
extern undefined4 *DAT_0068ca1c;
extern undefined4 DAT_0068ca20;

// USA 0068C994 <- EU 0068C96C (Ghidra, non-matching)
// GLOBAL DAT_0068ca0c uint *
// GLOBAL DAT_0068ca10 undefined4 *
// GLOBAL DAT_0068ca14 undefined4
// GLOBAL DAT_0068ca18 uint *
// GLOBAL DAT_0068ca1c undefined4 *
// GLOBAL DAT_0068ca20 undefined4

undefined4 func_0068C994(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ca0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ca0c), iVar1 != 0)) {
    *DAT_0068ca10 = DAT_0068ca14;
  }
  if (DAT_0068ca10 != param_2) {
    if (((*DAT_0068ca18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ca18), iVar1 != 0)) {
      *DAT_0068ca1c = DAT_0068ca20;
    }
    if (DAT_0068ca1c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

