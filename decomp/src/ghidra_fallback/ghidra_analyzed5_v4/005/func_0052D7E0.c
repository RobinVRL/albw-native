#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052d898;
extern undefined4 *DAT_0052d89c;
extern undefined4 DAT_0052d8a0;
extern uint *DAT_0052d8a4;
extern undefined4 *DAT_0052d8a8;
extern undefined4 DAT_0052d8ac;
extern uint *DAT_0052d8b0;
extern undefined4 *DAT_0052d8b4;
extern undefined4 DAT_0052d8b8;

// USA 0052D7E0 <- EU 0052D7B8 (Ghidra, non-matching)
// GLOBAL DAT_0052d898 uint *
// GLOBAL DAT_0052d89c undefined4 *
// GLOBAL DAT_0052d8a0 undefined4
// GLOBAL DAT_0052d8a4 uint *
// GLOBAL DAT_0052d8a8 undefined4 *
// GLOBAL DAT_0052d8ac undefined4
// GLOBAL DAT_0052d8b0 uint *
// GLOBAL DAT_0052d8b4 undefined4 *
// GLOBAL DAT_0052d8b8 undefined4

undefined4 func_0052D7E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052d898 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d898), iVar1 != 0)) {
    *DAT_0052d89c = DAT_0052d8a0;
  }
  if (DAT_0052d89c != param_2) {
    if (((*DAT_0052d8a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d8a4), iVar1 != 0)) {
      *DAT_0052d8a8 = DAT_0052d8ac;
    }
    if (DAT_0052d8a8 != param_2) {
      if (((*DAT_0052d8b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d8b0), iVar1 != 0)) {
        *DAT_0052d8b4 = DAT_0052d8b8;
      }
      if (DAT_0052d8b4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

