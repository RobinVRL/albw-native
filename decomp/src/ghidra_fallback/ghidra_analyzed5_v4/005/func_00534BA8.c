#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00534ca4;
extern undefined4 *DAT_00534ca8;
extern undefined4 DAT_00534cac;
extern uint *DAT_00534cb0;
extern undefined4 *DAT_00534cb4;
extern undefined4 DAT_00534cb8;
extern uint *DAT_00534cbc;
extern undefined4 *DAT_00534cc0;
extern undefined4 DAT_00534cc4;
extern uint *DAT_00534cc8;
extern undefined4 *DAT_00534ccc;
extern undefined4 DAT_00534cd0;

// USA 00534BA8 <- EU 00534B80 (Ghidra, non-matching)
// GLOBAL DAT_00534ca4 uint *
// GLOBAL DAT_00534ca8 undefined4 *
// GLOBAL DAT_00534cac undefined4
// GLOBAL DAT_00534cb0 uint *
// GLOBAL DAT_00534cb4 undefined4 *
// GLOBAL DAT_00534cb8 undefined4
// GLOBAL DAT_00534cbc uint *
// GLOBAL DAT_00534cc0 undefined4 *
// GLOBAL DAT_00534cc4 undefined4
// GLOBAL DAT_00534cc8 uint *
// GLOBAL DAT_00534ccc undefined4 *
// GLOBAL DAT_00534cd0 undefined4

undefined4 func_00534BA8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00534ca4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534ca4), iVar1 != 0)) {
    *DAT_00534ca8 = DAT_00534cac;
  }
  if (DAT_00534ca8 != param_2) {
    if (((*DAT_00534cb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534cb0), iVar1 != 0)) {
      *DAT_00534cb4 = DAT_00534cb8;
    }
    if (DAT_00534cb4 != param_2) {
      if (((*DAT_00534cbc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534cbc), iVar1 != 0)) {
        *DAT_00534cc0 = DAT_00534cc4;
      }
      if (DAT_00534cc0 != param_2) {
        if (((*DAT_00534cc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534cc8), iVar1 != 0))
        {
          *DAT_00534ccc = DAT_00534cd0;
        }
        if (DAT_00534ccc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

