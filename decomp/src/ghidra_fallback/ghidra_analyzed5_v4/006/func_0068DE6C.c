#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068dee4;
extern undefined4 *DAT_0068dee8;
extern undefined4 DAT_0068deec;
extern uint *DAT_0068def0;
extern undefined4 *DAT_0068def4;
extern undefined4 DAT_0068def8;

// USA 0068DE6C <- EU 0068DE44 (Ghidra, non-matching)
// GLOBAL DAT_0068dee4 uint *
// GLOBAL DAT_0068dee8 undefined4 *
// GLOBAL DAT_0068deec undefined4
// GLOBAL DAT_0068def0 uint *
// GLOBAL DAT_0068def4 undefined4 *
// GLOBAL DAT_0068def8 undefined4

undefined4 func_0068DE6C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068dee4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068dee4), iVar1 != 0)) {
    *DAT_0068dee8 = DAT_0068deec;
  }
  if (DAT_0068dee8 != param_2) {
    if (((*DAT_0068def0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068def0), iVar1 != 0)) {
      *DAT_0068def4 = DAT_0068def8;
    }
    if (DAT_0068def4 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

