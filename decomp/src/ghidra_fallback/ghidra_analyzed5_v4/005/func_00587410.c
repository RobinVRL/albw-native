#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E4908(undefined4 *param_1);
extern uint *DAT_00587488;
extern undefined4 *DAT_0058748c;
extern undefined4 DAT_00587490;
extern uint *DAT_00587494;
extern undefined4 *DAT_00587498;
extern undefined4 DAT_0058749c;

// USA 00587410 <- EU 005873E8 (Ghidra, non-matching)
// GLOBAL DAT_00587488 uint *
// GLOBAL DAT_0058748c undefined4 *
// GLOBAL DAT_00587490 undefined4
// GLOBAL DAT_00587494 uint *
// GLOBAL DAT_00587498 undefined4 *
// GLOBAL DAT_0058749c undefined4

undefined4 func_00587410(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00587488 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587488), iVar1 != 0)) {
    *DAT_0058748c = DAT_00587490;
  }
  if (DAT_0058748c != param_2) {
    if (((*DAT_00587494 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00587494), iVar1 != 0)) {
      *DAT_00587498 = DAT_0058749c;
    }
    if (DAT_00587498 != param_2) {
      uVar2 = func_001E4908(param_2);
      return uVar2;
    }
  }
  return 1;
}

