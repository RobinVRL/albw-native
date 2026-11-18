#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005470b8;
extern undefined4 *DAT_005470bc;
extern undefined4 DAT_005470c0;
extern uint *DAT_005470c4;
extern undefined4 *DAT_005470c8;
extern undefined4 DAT_005470cc;

// USA 00547044 <- EU 0054701C (Ghidra, non-matching)
// GLOBAL DAT_005470b8 uint *
// GLOBAL DAT_005470bc undefined4 *
// GLOBAL DAT_005470c0 undefined4
// GLOBAL DAT_005470c4 uint *
// GLOBAL DAT_005470c8 undefined4 *
// GLOBAL DAT_005470cc undefined4

undefined4 func_00547044(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005470b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005470b8), iVar1 != 0)) {
    *DAT_005470bc = DAT_005470c0;
  }
  if (DAT_005470bc != param_2) {
    if (((*DAT_005470c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005470c4), iVar1 != 0)) {
      *DAT_005470c8 = DAT_005470cc;
    }
    if (DAT_005470c8 != param_2) {
      return 0;
    }
  }
  return 1;
}

