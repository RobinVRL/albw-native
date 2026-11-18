#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_005348a4;
extern undefined4 *DAT_005348a8;
extern undefined4 DAT_005348ac;
extern uint *DAT_005348b0;
extern undefined4 *DAT_005348b4;
extern undefined4 DAT_005348b8;

// USA 0053482C <- EU 00534804 (Ghidra, non-matching)
// GLOBAL DAT_005348a4 uint *
// GLOBAL DAT_005348a8 undefined4 *
// GLOBAL DAT_005348ac undefined4
// GLOBAL DAT_005348b0 uint *
// GLOBAL DAT_005348b4 undefined4 *
// GLOBAL DAT_005348b8 undefined4

undefined4 func_0053482C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005348a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005348a4), iVar1 != 0)) {
    *DAT_005348a8 = DAT_005348ac;
  }
  if (DAT_005348a8 != param_2) {
    if (((*DAT_005348b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005348b0), iVar1 != 0)) {
      *DAT_005348b4 = DAT_005348b8;
    }
    if (DAT_005348b4 != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

