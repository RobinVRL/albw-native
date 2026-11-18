#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00557cbc;
extern undefined4 *DAT_00557cc0;
extern undefined4 DAT_00557cc4;
extern uint *DAT_00557cc8;
extern undefined4 *DAT_00557ccc;
extern undefined4 DAT_00557cd0;
extern uint *DAT_00557cd4;
extern undefined4 *DAT_00557cd8;
extern undefined4 DAT_00557cdc;
extern uint *DAT_00557ce0;
extern undefined4 *DAT_00557ce4;
extern undefined4 DAT_00557ce8;

// USA 00557BC0 <- EU 00557B98 (Ghidra, non-matching)
// GLOBAL DAT_00557cbc uint *
// GLOBAL DAT_00557cc0 undefined4 *
// GLOBAL DAT_00557cc4 undefined4
// GLOBAL DAT_00557cc8 uint *
// GLOBAL DAT_00557ccc undefined4 *
// GLOBAL DAT_00557cd0 undefined4
// GLOBAL DAT_00557cd4 uint *
// GLOBAL DAT_00557cd8 undefined4 *
// GLOBAL DAT_00557cdc undefined4
// GLOBAL DAT_00557ce0 uint *
// GLOBAL DAT_00557ce4 undefined4 *
// GLOBAL DAT_00557ce8 undefined4

undefined4 func_00557BC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00557cbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557cbc), iVar1 != 0)) {
    *DAT_00557cc0 = DAT_00557cc4;
  }
  if (DAT_00557cc0 != param_2) {
    if (((*DAT_00557cc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557cc8), iVar1 != 0)) {
      *DAT_00557ccc = DAT_00557cd0;
    }
    if (DAT_00557ccc != param_2) {
      if (((*DAT_00557cd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557cd4), iVar1 != 0)) {
        *DAT_00557cd8 = DAT_00557cdc;
      }
      if (DAT_00557cd8 != param_2) {
        if (((*DAT_00557ce0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00557ce0), iVar1 != 0))
        {
          *DAT_00557ce4 = DAT_00557ce8;
        }
        if (DAT_00557ce4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

