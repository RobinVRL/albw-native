#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b8b0;
extern undefined4 *DAT_0052b8b4;
extern undefined4 DAT_0052b8b8;
extern uint *DAT_0052b8bc;
extern undefined4 *DAT_0052b8c0;
extern undefined4 DAT_0052b8c4;
extern uint *DAT_0052b8c8;
extern undefined4 *DAT_0052b8cc;
extern undefined4 DAT_0052b8d0;

// USA 0052B7F8 <- EU 0052B7D0 (Ghidra, non-matching)
// GLOBAL DAT_0052b8b0 uint *
// GLOBAL DAT_0052b8b4 undefined4 *
// GLOBAL DAT_0052b8b8 undefined4
// GLOBAL DAT_0052b8bc uint *
// GLOBAL DAT_0052b8c0 undefined4 *
// GLOBAL DAT_0052b8c4 undefined4
// GLOBAL DAT_0052b8c8 uint *
// GLOBAL DAT_0052b8cc undefined4 *
// GLOBAL DAT_0052b8d0 undefined4

undefined4 func_0052B7F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b8b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b8b0), iVar1 != 0)) {
    *DAT_0052b8b4 = DAT_0052b8b8;
  }
  if (DAT_0052b8b4 != param_2) {
    if (((*DAT_0052b8bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b8bc), iVar1 != 0)) {
      *DAT_0052b8c0 = DAT_0052b8c4;
    }
    if (DAT_0052b8c0 != param_2) {
      if (((*DAT_0052b8c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b8c8), iVar1 != 0)) {
        *DAT_0052b8cc = DAT_0052b8d0;
      }
      if (DAT_0052b8cc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

