#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ea64;
extern undefined4 *DAT_0068ea68;
extern undefined4 DAT_0068ea6c;
extern uint *DAT_0068ea70;
extern undefined4 *DAT_0068ea74;
extern undefined4 DAT_0068ea78;

// USA 0068E9EC <- EU 0068E9C4 (Ghidra, non-matching)
// GLOBAL DAT_0068ea64 uint *
// GLOBAL DAT_0068ea68 undefined4 *
// GLOBAL DAT_0068ea6c undefined4
// GLOBAL DAT_0068ea70 uint *
// GLOBAL DAT_0068ea74 undefined4 *
// GLOBAL DAT_0068ea78 undefined4

undefined4 func_0068E9EC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ea64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ea64), iVar1 != 0)) {
    *DAT_0068ea68 = DAT_0068ea6c;
  }
  if (DAT_0068ea68 != param_2) {
    if (((*DAT_0068ea70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ea70), iVar1 != 0)) {
      *DAT_0068ea74 = DAT_0068ea78;
    }
    if (DAT_0068ea74 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

