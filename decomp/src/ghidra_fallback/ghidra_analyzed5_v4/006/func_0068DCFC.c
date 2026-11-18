#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068dd74;
extern undefined4 *DAT_0068dd78;
extern undefined4 DAT_0068dd7c;
extern uint *DAT_0068dd80;
extern undefined4 *DAT_0068dd84;
extern undefined4 DAT_0068dd88;

// USA 0068DCFC <- EU 0068DCD4 (Ghidra, non-matching)
// GLOBAL DAT_0068dd74 uint *
// GLOBAL DAT_0068dd78 undefined4 *
// GLOBAL DAT_0068dd7c undefined4
// GLOBAL DAT_0068dd80 uint *
// GLOBAL DAT_0068dd84 undefined4 *
// GLOBAL DAT_0068dd88 undefined4

undefined4 func_0068DCFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068dd74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dd74), iVar1 != 0)) {
    *DAT_0068dd78 = DAT_0068dd7c;
  }
  if (DAT_0068dd78 != param_2) {
    if (((*DAT_0068dd80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dd80), iVar1 != 0)) {
      *DAT_0068dd84 = DAT_0068dd88;
    }
    if (DAT_0068dd84 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

