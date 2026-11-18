#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056fb2c;
extern undefined4 *DAT_0056fb30;
extern undefined4 DAT_0056fb34;
extern uint *DAT_0056fb38;
extern undefined4 *DAT_0056fb3c;
extern undefined4 DAT_0056fb40;
extern uint *DAT_0056fb44;
extern undefined4 *DAT_0056fb48;
extern undefined4 DAT_0056fb4c;
extern uint *DAT_0056fb50;
extern undefined4 *DAT_0056fb54;
extern undefined4 DAT_0056fb58;

// USA 0056FA30 <- EU 0056FA08 (Ghidra, non-matching)
// GLOBAL DAT_0056fb2c uint *
// GLOBAL DAT_0056fb30 undefined4 *
// GLOBAL DAT_0056fb34 undefined4
// GLOBAL DAT_0056fb38 uint *
// GLOBAL DAT_0056fb3c undefined4 *
// GLOBAL DAT_0056fb40 undefined4
// GLOBAL DAT_0056fb44 uint *
// GLOBAL DAT_0056fb48 undefined4 *
// GLOBAL DAT_0056fb4c undefined4
// GLOBAL DAT_0056fb50 uint *
// GLOBAL DAT_0056fb54 undefined4 *
// GLOBAL DAT_0056fb58 undefined4

undefined4 func_0056FA30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056fb2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fb2c), iVar1 != 0)) {
    *DAT_0056fb30 = DAT_0056fb34;
  }
  if (DAT_0056fb30 != param_2) {
    if (((*DAT_0056fb38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fb38), iVar1 != 0)) {
      *DAT_0056fb3c = DAT_0056fb40;
    }
    if (DAT_0056fb3c != param_2) {
      if (((*DAT_0056fb44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fb44), iVar1 != 0)) {
        *DAT_0056fb48 = DAT_0056fb4c;
      }
      if (DAT_0056fb48 != param_2) {
        if (((*DAT_0056fb50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fb50), iVar1 != 0))
        {
          *DAT_0056fb54 = DAT_0056fb58;
        }
        if (DAT_0056fb54 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

