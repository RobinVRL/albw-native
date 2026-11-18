#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00552d6c;
extern undefined4 *DAT_00552d70;
extern undefined4 DAT_00552d74;
extern uint *DAT_00552d78;
extern undefined4 *DAT_00552d7c;
extern undefined4 DAT_00552d80;
extern uint *DAT_00552d84;
extern undefined4 *DAT_00552d88;
extern undefined4 DAT_00552d8c;

// USA 00552CB4 <- EU 00552C8C (Ghidra, non-matching)
// GLOBAL DAT_00552d6c uint *
// GLOBAL DAT_00552d70 undefined4 *
// GLOBAL DAT_00552d74 undefined4
// GLOBAL DAT_00552d78 uint *
// GLOBAL DAT_00552d7c undefined4 *
// GLOBAL DAT_00552d80 undefined4
// GLOBAL DAT_00552d84 uint *
// GLOBAL DAT_00552d88 undefined4 *
// GLOBAL DAT_00552d8c undefined4

undefined4 func_00552CB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552d6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552d6c), iVar1 != 0)) {
    *DAT_00552d70 = DAT_00552d74;
  }
  if (DAT_00552d70 != param_2) {
    if (((*DAT_00552d78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552d78), iVar1 != 0)) {
      *DAT_00552d7c = DAT_00552d80;
    }
    if (DAT_00552d7c != param_2) {
      if (((*DAT_00552d84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552d84), iVar1 != 0)) {
        *DAT_00552d88 = DAT_00552d8c;
      }
      if (DAT_00552d88 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

