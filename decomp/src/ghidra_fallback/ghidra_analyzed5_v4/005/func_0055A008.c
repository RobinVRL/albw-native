#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055a0c0;
extern undefined4 *DAT_0055a0c4;
extern undefined4 DAT_0055a0c8;
extern uint *DAT_0055a0cc;
extern undefined4 *DAT_0055a0d0;
extern undefined4 DAT_0055a0d4;
extern uint *DAT_0055a0d8;
extern undefined4 *DAT_0055a0dc;
extern undefined4 DAT_0055a0e0;

// USA 0055A008 <- EU 00559FE0 (Ghidra, non-matching)
// GLOBAL DAT_0055a0c0 uint *
// GLOBAL DAT_0055a0c4 undefined4 *
// GLOBAL DAT_0055a0c8 undefined4
// GLOBAL DAT_0055a0cc uint *
// GLOBAL DAT_0055a0d0 undefined4 *
// GLOBAL DAT_0055a0d4 undefined4
// GLOBAL DAT_0055a0d8 uint *
// GLOBAL DAT_0055a0dc undefined4 *
// GLOBAL DAT_0055a0e0 undefined4

undefined4 func_0055A008(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055a0c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a0c0), iVar1 != 0)) {
    *DAT_0055a0c4 = DAT_0055a0c8;
  }
  if (DAT_0055a0c4 != param_2) {
    if (((*DAT_0055a0cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a0cc), iVar1 != 0)) {
      *DAT_0055a0d0 = DAT_0055a0d4;
    }
    if (DAT_0055a0d0 != param_2) {
      if (((*DAT_0055a0d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a0d8), iVar1 != 0)) {
        *DAT_0055a0dc = DAT_0055a0e0;
      }
      if (DAT_0055a0dc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

