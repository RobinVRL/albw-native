#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068df9c;
extern undefined4 *DAT_0068dfa0;
extern undefined4 DAT_0068dfa4;
extern uint *DAT_0068dfa8;
extern undefined4 *DAT_0068dfac;
extern undefined4 DAT_0068dfb0;

// USA 0068DF24 <- EU 0068DEFC (Ghidra, non-matching)
// GLOBAL DAT_0068df9c uint *
// GLOBAL DAT_0068dfa0 undefined4 *
// GLOBAL DAT_0068dfa4 undefined4
// GLOBAL DAT_0068dfa8 uint *
// GLOBAL DAT_0068dfac undefined4 *
// GLOBAL DAT_0068dfb0 undefined4

undefined4 func_0068DF24(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068df9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068df9c), iVar1 != 0)) {
    *DAT_0068dfa0 = DAT_0068dfa4;
  }
  if (DAT_0068dfa0 != param_2) {
    if (((*DAT_0068dfa8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dfa8), iVar1 != 0)) {
      *DAT_0068dfac = DAT_0068dfb0;
    }
    if (DAT_0068dfac != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

