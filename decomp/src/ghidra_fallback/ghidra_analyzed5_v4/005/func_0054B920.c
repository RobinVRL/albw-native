#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_006304C8(undefined4 *param_1);
extern uint *DAT_0054b998;
extern undefined4 *DAT_0054b99c;
extern undefined4 DAT_0054b9a0;
extern uint *DAT_0054b9a4;
extern undefined4 *DAT_0054b9a8;
extern undefined4 DAT_0054b9ac;

// USA 0054B920 <- EU 0054B8F8 (Ghidra, non-matching)
// GLOBAL DAT_0054b998 uint *
// GLOBAL DAT_0054b99c undefined4 *
// GLOBAL DAT_0054b9a0 undefined4
// GLOBAL DAT_0054b9a4 uint *
// GLOBAL DAT_0054b9a8 undefined4 *
// GLOBAL DAT_0054b9ac undefined4

undefined4 func_0054B920(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0054b998 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b998), iVar1 != 0)) {
    *DAT_0054b99c = DAT_0054b9a0;
  }
  if (DAT_0054b99c != param_2) {
    if (((*DAT_0054b9a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b9a4), iVar1 != 0)) {
      *DAT_0054b9a8 = DAT_0054b9ac;
    }
    if (DAT_0054b9a8 != param_2) {
      uVar2 = func_006304C8(param_2);
      return uVar2;
    }
  }
  return 1;
}

