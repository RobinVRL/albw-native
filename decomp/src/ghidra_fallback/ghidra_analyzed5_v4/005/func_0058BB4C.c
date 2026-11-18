#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058bc04;
extern undefined4 *DAT_0058bc08;
extern undefined4 DAT_0058bc0c;
extern uint *DAT_0058bc10;
extern undefined4 *DAT_0058bc14;
extern undefined4 DAT_0058bc18;
extern uint *DAT_0058bc1c;
extern undefined4 *DAT_0058bc20;
extern undefined4 DAT_0058bc24;

// USA 0058BB4C <- EU 0058BB24 (Ghidra, non-matching)
// GLOBAL DAT_0058bc04 uint *
// GLOBAL DAT_0058bc08 undefined4 *
// GLOBAL DAT_0058bc0c undefined4
// GLOBAL DAT_0058bc10 uint *
// GLOBAL DAT_0058bc14 undefined4 *
// GLOBAL DAT_0058bc18 undefined4
// GLOBAL DAT_0058bc1c uint *
// GLOBAL DAT_0058bc20 undefined4 *
// GLOBAL DAT_0058bc24 undefined4

undefined4 func_0058BB4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058bc04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bc04), iVar1 != 0)) {
    *DAT_0058bc08 = DAT_0058bc0c;
  }
  if (DAT_0058bc08 != param_2) {
    if (((*DAT_0058bc10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bc10), iVar1 != 0)) {
      *DAT_0058bc14 = DAT_0058bc18;
    }
    if (DAT_0058bc14 != param_2) {
      if (((*DAT_0058bc1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058bc1c), iVar1 != 0)) {
        *DAT_0058bc20 = DAT_0058bc24;
      }
      if (DAT_0058bc20 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

