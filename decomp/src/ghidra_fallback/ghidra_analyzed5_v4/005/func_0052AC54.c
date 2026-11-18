#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052ad0c;
extern undefined4 *DAT_0052ad10;
extern undefined4 DAT_0052ad14;
extern uint *DAT_0052ad18;
extern undefined4 *DAT_0052ad1c;
extern undefined4 DAT_0052ad20;
extern uint *DAT_0052ad24;
extern undefined4 *DAT_0052ad28;
extern undefined4 DAT_0052ad2c;

// USA 0052AC54 <- EU 0052AC2C (Ghidra, non-matching)
// GLOBAL DAT_0052ad0c uint *
// GLOBAL DAT_0052ad10 undefined4 *
// GLOBAL DAT_0052ad14 undefined4
// GLOBAL DAT_0052ad18 uint *
// GLOBAL DAT_0052ad1c undefined4 *
// GLOBAL DAT_0052ad20 undefined4
// GLOBAL DAT_0052ad24 uint *
// GLOBAL DAT_0052ad28 undefined4 *
// GLOBAL DAT_0052ad2c undefined4

undefined4 func_0052AC54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052ad0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ad0c), iVar1 != 0)) {
    *DAT_0052ad10 = DAT_0052ad14;
  }
  if (DAT_0052ad10 != param_2) {
    if (((*DAT_0052ad18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ad18), iVar1 != 0)) {
      *DAT_0052ad1c = DAT_0052ad20;
    }
    if (DAT_0052ad1c != param_2) {
      if (((*DAT_0052ad24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ad24), iVar1 != 0)) {
        *DAT_0052ad28 = DAT_0052ad2c;
      }
      if (DAT_0052ad28 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

