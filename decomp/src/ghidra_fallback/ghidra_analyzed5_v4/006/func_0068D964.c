#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d9dc;
extern undefined4 *DAT_0068d9e0;
extern undefined4 DAT_0068d9e4;
extern uint *DAT_0068d9e8;
extern undefined4 *DAT_0068d9ec;
extern undefined4 DAT_0068d9f0;

// USA 0068D964 <- EU 0068D93C (Ghidra, non-matching)
// GLOBAL DAT_0068d9dc uint *
// GLOBAL DAT_0068d9e0 undefined4 *
// GLOBAL DAT_0068d9e4 undefined4
// GLOBAL DAT_0068d9e8 uint *
// GLOBAL DAT_0068d9ec undefined4 *
// GLOBAL DAT_0068d9f0 undefined4

undefined4 func_0068D964(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d9dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d9dc), iVar1 != 0)) {
    *DAT_0068d9e0 = DAT_0068d9e4;
  }
  if (DAT_0068d9e0 != param_2) {
    if (((*DAT_0068d9e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d9e8), iVar1 != 0)) {
      *DAT_0068d9ec = DAT_0068d9f0;
    }
    if (DAT_0068d9ec != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

