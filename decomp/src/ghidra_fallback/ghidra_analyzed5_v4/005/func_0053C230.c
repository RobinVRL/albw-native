#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c2e8;
extern undefined4 *DAT_0053c2ec;
extern undefined4 DAT_0053c2f0;
extern uint *DAT_0053c2f4;
extern undefined4 *DAT_0053c2f8;
extern undefined4 DAT_0053c2fc;
extern uint *DAT_0053c300;
extern undefined4 *DAT_0053c304;
extern undefined4 DAT_0053c308;

// USA 0053C230 <- EU 0053C208 (Ghidra, non-matching)
// GLOBAL DAT_0053c2e8 uint *
// GLOBAL DAT_0053c2ec undefined4 *
// GLOBAL DAT_0053c2f0 undefined4
// GLOBAL DAT_0053c2f4 uint *
// GLOBAL DAT_0053c2f8 undefined4 *
// GLOBAL DAT_0053c2fc undefined4
// GLOBAL DAT_0053c300 uint *
// GLOBAL DAT_0053c304 undefined4 *
// GLOBAL DAT_0053c308 undefined4

undefined4 func_0053C230(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c2e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c2e8), iVar1 != 0)) {
    *DAT_0053c2ec = DAT_0053c2f0;
  }
  if (DAT_0053c2ec != param_2) {
    if (((*DAT_0053c2f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c2f4), iVar1 != 0)) {
      *DAT_0053c2f8 = DAT_0053c2fc;
    }
    if (DAT_0053c2f8 != param_2) {
      if (((*DAT_0053c300 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c300), iVar1 != 0)) {
        *DAT_0053c304 = DAT_0053c308;
      }
      if (DAT_0053c304 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

