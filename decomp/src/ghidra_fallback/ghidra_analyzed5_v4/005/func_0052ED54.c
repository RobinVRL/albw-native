#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052ee0c;
extern undefined4 *DAT_0052ee10;
extern undefined4 DAT_0052ee14;
extern uint *DAT_0052ee18;
extern undefined4 *DAT_0052ee1c;
extern undefined4 DAT_0052ee20;
extern uint *DAT_0052ee24;
extern undefined4 *DAT_0052ee28;
extern undefined4 DAT_0052ee2c;

// USA 0052ED54 <- EU 0052ED2C (Ghidra, non-matching)
// GLOBAL DAT_0052ee0c uint *
// GLOBAL DAT_0052ee10 undefined4 *
// GLOBAL DAT_0052ee14 undefined4
// GLOBAL DAT_0052ee18 uint *
// GLOBAL DAT_0052ee1c undefined4 *
// GLOBAL DAT_0052ee20 undefined4
// GLOBAL DAT_0052ee24 uint *
// GLOBAL DAT_0052ee28 undefined4 *
// GLOBAL DAT_0052ee2c undefined4

undefined4 func_0052ED54(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052ee0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ee0c), iVar1 != 0)) {
    *DAT_0052ee10 = DAT_0052ee14;
  }
  if (DAT_0052ee10 != param_2) {
    if (((*DAT_0052ee18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ee18), iVar1 != 0)) {
      *DAT_0052ee1c = DAT_0052ee20;
    }
    if (DAT_0052ee1c != param_2) {
      if (((*DAT_0052ee24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ee24), iVar1 != 0)) {
        *DAT_0052ee28 = DAT_0052ee2c;
      }
      if (DAT_0052ee28 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

