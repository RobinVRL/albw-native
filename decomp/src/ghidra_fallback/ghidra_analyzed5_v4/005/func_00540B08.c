#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00540bc0;
extern undefined4 *DAT_00540bc4;
extern undefined4 DAT_00540bc8;
extern uint *DAT_00540bcc;
extern undefined4 *DAT_00540bd0;
extern undefined4 DAT_00540bd4;
extern uint *DAT_00540bd8;
extern undefined4 *DAT_00540bdc;
extern undefined4 DAT_00540be0;

// USA 00540B08 <- EU 00540AE0 (Ghidra, non-matching)
// GLOBAL DAT_00540bc0 uint *
// GLOBAL DAT_00540bc4 undefined4 *
// GLOBAL DAT_00540bc8 undefined4
// GLOBAL DAT_00540bcc uint *
// GLOBAL DAT_00540bd0 undefined4 *
// GLOBAL DAT_00540bd4 undefined4
// GLOBAL DAT_00540bd8 uint *
// GLOBAL DAT_00540bdc undefined4 *
// GLOBAL DAT_00540be0 undefined4

undefined4 func_00540B08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00540bc0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540bc0), iVar1 != 0)) {
    *DAT_00540bc4 = DAT_00540bc8;
  }
  if (DAT_00540bc4 != param_2) {
    if (((*DAT_00540bcc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540bcc), iVar1 != 0)) {
      *DAT_00540bd0 = DAT_00540bd4;
    }
    if (DAT_00540bd0 != param_2) {
      if (((*DAT_00540bd8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00540bd8), iVar1 != 0)) {
        *DAT_00540bdc = DAT_00540be0;
      }
      if (DAT_00540bdc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

