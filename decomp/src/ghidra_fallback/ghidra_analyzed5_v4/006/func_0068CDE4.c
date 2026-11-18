#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ce5c;
extern undefined4 *DAT_0068ce60;
extern undefined4 DAT_0068ce64;
extern uint *DAT_0068ce68;
extern undefined4 *DAT_0068ce6c;
extern undefined4 DAT_0068ce70;

// USA 0068CDE4 <- EU 0068CDBC (Ghidra, non-matching)
// GLOBAL DAT_0068ce5c uint *
// GLOBAL DAT_0068ce60 undefined4 *
// GLOBAL DAT_0068ce64 undefined4
// GLOBAL DAT_0068ce68 uint *
// GLOBAL DAT_0068ce6c undefined4 *
// GLOBAL DAT_0068ce70 undefined4

undefined4 func_0068CDE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ce5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ce5c), iVar1 != 0)) {
    *DAT_0068ce60 = DAT_0068ce64;
  }
  if (DAT_0068ce60 != param_2) {
    if (((*DAT_0068ce68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ce68), iVar1 != 0)) {
      *DAT_0068ce6c = DAT_0068ce70;
    }
    if (DAT_0068ce6c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

