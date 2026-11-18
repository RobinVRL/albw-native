#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068cb7c;
extern undefined4 *DAT_0068cb80;
extern undefined4 DAT_0068cb84;
extern uint *DAT_0068cb88;
extern undefined4 *DAT_0068cb8c;
extern undefined4 DAT_0068cb90;

// USA 0068CB04 <- EU 0068CADC (Ghidra, non-matching)
// GLOBAL DAT_0068cb7c uint *
// GLOBAL DAT_0068cb80 undefined4 *
// GLOBAL DAT_0068cb84 undefined4
// GLOBAL DAT_0068cb88 uint *
// GLOBAL DAT_0068cb8c undefined4 *
// GLOBAL DAT_0068cb90 undefined4

undefined4 func_0068CB04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068cb7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cb7c), iVar1 != 0)) {
    *DAT_0068cb80 = DAT_0068cb84;
  }
  if (DAT_0068cb80 != param_2) {
    if (((*DAT_0068cb88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cb88), iVar1 != 0)) {
      *DAT_0068cb8c = DAT_0068cb90;
    }
    if (DAT_0068cb8c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

