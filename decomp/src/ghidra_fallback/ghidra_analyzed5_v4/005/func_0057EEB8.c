#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057ef2c;
extern undefined4 *DAT_0057ef30;
extern undefined4 DAT_0057ef34;
extern uint *DAT_0057ef38;
extern undefined4 *DAT_0057ef3c;
extern undefined4 DAT_0057ef40;

// USA 0057EEB8 <- EU 0057EE90 (Ghidra, non-matching)
// GLOBAL DAT_0057ef2c uint *
// GLOBAL DAT_0057ef30 undefined4 *
// GLOBAL DAT_0057ef34 undefined4
// GLOBAL DAT_0057ef38 uint *
// GLOBAL DAT_0057ef3c undefined4 *
// GLOBAL DAT_0057ef40 undefined4

undefined4 func_0057EEB8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057ef2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ef2c), iVar1 != 0)) {
    *DAT_0057ef30 = DAT_0057ef34;
  }
  if (DAT_0057ef30 != param_2) {
    if (((*DAT_0057ef38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ef38), iVar1 != 0)) {
      *DAT_0057ef3c = DAT_0057ef40;
    }
    if (DAT_0057ef3c != param_2) {
      return 0;
    }
  }
  return 1;
}

