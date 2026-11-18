#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052db0c;
extern undefined4 *DAT_0052db10;
extern undefined4 DAT_0052db14;
extern uint *DAT_0052db18;
extern undefined4 *DAT_0052db1c;
extern undefined4 DAT_0052db20;
extern uint *DAT_0052db24;
extern undefined4 *DAT_0052db28;
extern undefined4 DAT_0052db2c;

// USA 0052DA54 <- EU 0052DA2C (Ghidra, non-matching)
// GLOBAL DAT_0052db0c uint *
// GLOBAL DAT_0052db10 undefined4 *
// GLOBAL DAT_0052db14 undefined4
// GLOBAL DAT_0052db18 uint *
// GLOBAL DAT_0052db1c undefined4 *
// GLOBAL DAT_0052db20 undefined4
// GLOBAL DAT_0052db24 uint *
// GLOBAL DAT_0052db28 undefined4 *
// GLOBAL DAT_0052db2c undefined4

undefined4 func_0052DA54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052db0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052db0c), iVar1 != 0)) {
    *DAT_0052db10 = DAT_0052db14;
  }
  if (DAT_0052db10 != param_2) {
    if (((*DAT_0052db18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052db18), iVar1 != 0)) {
      *DAT_0052db1c = DAT_0052db20;
    }
    if (DAT_0052db1c != param_2) {
      if (((*DAT_0052db24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052db24), iVar1 != 0)) {
        *DAT_0052db28 = DAT_0052db2c;
      }
      if (DAT_0052db28 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

