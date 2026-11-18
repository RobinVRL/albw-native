#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e27c;
extern undefined4 *DAT_0068e280;
extern undefined4 DAT_0068e284;
extern uint *DAT_0068e288;
extern undefined4 *DAT_0068e28c;
extern undefined4 DAT_0068e290;

// USA 0068E204 <- EU 0068E1DC (Ghidra, non-matching)
// GLOBAL DAT_0068e27c uint *
// GLOBAL DAT_0068e280 undefined4 *
// GLOBAL DAT_0068e284 undefined4
// GLOBAL DAT_0068e288 uint *
// GLOBAL DAT_0068e28c undefined4 *
// GLOBAL DAT_0068e290 undefined4

undefined4 func_0068E204(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e27c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e27c), iVar1 != 0)) {
    *DAT_0068e280 = DAT_0068e284;
  }
  if (DAT_0068e280 != param_2) {
    if (((*DAT_0068e288 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e288), iVar1 != 0)) {
      *DAT_0068e28c = DAT_0068e290;
    }
    if (DAT_0068e28c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

