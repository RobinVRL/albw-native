#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052aa00;
extern undefined4 *DAT_0052aa04;
extern undefined4 DAT_0052aa08;
extern uint *DAT_0052aa0c;
extern undefined4 *DAT_0052aa10;
extern undefined4 DAT_0052aa14;
extern uint *DAT_0052aa18;
extern undefined4 *DAT_0052aa1c;
extern undefined4 DAT_0052aa20;

// USA 0052A948 <- EU 0052A920 (Ghidra, non-matching)
// GLOBAL DAT_0052aa00 uint *
// GLOBAL DAT_0052aa04 undefined4 *
// GLOBAL DAT_0052aa08 undefined4
// GLOBAL DAT_0052aa0c uint *
// GLOBAL DAT_0052aa10 undefined4 *
// GLOBAL DAT_0052aa14 undefined4
// GLOBAL DAT_0052aa18 uint *
// GLOBAL DAT_0052aa1c undefined4 *
// GLOBAL DAT_0052aa20 undefined4

undefined4 func_0052A948(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052aa00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052aa00), iVar1 != 0)) {
    *DAT_0052aa04 = DAT_0052aa08;
  }
  if (DAT_0052aa04 != param_2) {
    if (((*DAT_0052aa0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052aa0c), iVar1 != 0)) {
      *DAT_0052aa10 = DAT_0052aa14;
    }
    if (DAT_0052aa10 != param_2) {
      if (((*DAT_0052aa18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052aa18), iVar1 != 0)) {
        *DAT_0052aa1c = DAT_0052aa20;
      }
      if (DAT_0052aa1c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

