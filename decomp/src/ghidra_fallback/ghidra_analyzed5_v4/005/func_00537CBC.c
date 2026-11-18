#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00537d30;
extern undefined4 *DAT_00537d34;
extern undefined4 DAT_00537d38;
extern uint *DAT_00537d3c;
extern undefined4 *DAT_00537d40;
extern undefined4 DAT_00537d44;

// USA 00537CBC <- EU 00537C94 (Ghidra, non-matching)
// GLOBAL DAT_00537d30 uint *
// GLOBAL DAT_00537d34 undefined4 *
// GLOBAL DAT_00537d38 undefined4
// GLOBAL DAT_00537d3c uint *
// GLOBAL DAT_00537d40 undefined4 *
// GLOBAL DAT_00537d44 undefined4

undefined4 func_00537CBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00537d30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537d30), iVar1 != 0)) {
    *DAT_00537d34 = DAT_00537d38;
  }
  if (DAT_00537d34 != param_2) {
    if (((*DAT_00537d3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537d3c), iVar1 != 0)) {
      *DAT_00537d40 = DAT_00537d44;
    }
    if (DAT_00537d40 != param_2) {
      return 0;
    }
  }
  return 1;
}

