#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559fb0;
extern undefined4 *DAT_00559fb4;
extern undefined4 DAT_00559fb8;
extern uint *DAT_00559fbc;
extern undefined4 *DAT_00559fc0;
extern undefined4 DAT_00559fc4;
extern uint *DAT_00559fc8;
extern undefined4 *DAT_00559fcc;
extern undefined4 DAT_00559fd0;

// USA 00559EF8 <- EU 00559ED0 (Ghidra, non-matching)
// GLOBAL DAT_00559fb0 uint *
// GLOBAL DAT_00559fb4 undefined4 *
// GLOBAL DAT_00559fb8 undefined4
// GLOBAL DAT_00559fbc uint *
// GLOBAL DAT_00559fc0 undefined4 *
// GLOBAL DAT_00559fc4 undefined4
// GLOBAL DAT_00559fc8 uint *
// GLOBAL DAT_00559fcc undefined4 *
// GLOBAL DAT_00559fd0 undefined4

undefined4 func_00559EF8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559fb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559fb0), iVar1 != 0)) {
    *DAT_00559fb4 = DAT_00559fb8;
  }
  if (DAT_00559fb4 != param_2) {
    if (((*DAT_00559fbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559fbc), iVar1 != 0)) {
      *DAT_00559fc0 = DAT_00559fc4;
    }
    if (DAT_00559fc0 != param_2) {
      if (((*DAT_00559fc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559fc8), iVar1 != 0)) {
        *DAT_00559fcc = DAT_00559fd0;
      }
      if (DAT_00559fcc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

