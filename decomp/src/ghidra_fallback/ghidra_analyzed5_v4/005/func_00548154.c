#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054820c;
extern undefined4 *DAT_00548210;
extern undefined4 DAT_00548214;
extern uint *DAT_00548218;
extern undefined4 *DAT_0054821c;
extern undefined4 DAT_00548220;
extern uint *DAT_00548224;
extern undefined4 *DAT_00548228;
extern undefined4 DAT_0054822c;

// USA 00548154 <- EU 0054812C (Ghidra, non-matching)
// GLOBAL DAT_0054820c uint *
// GLOBAL DAT_00548210 undefined4 *
// GLOBAL DAT_00548214 undefined4
// GLOBAL DAT_00548218 uint *
// GLOBAL DAT_0054821c undefined4 *
// GLOBAL DAT_00548220 undefined4
// GLOBAL DAT_00548224 uint *
// GLOBAL DAT_00548228 undefined4 *
// GLOBAL DAT_0054822c undefined4

undefined4 func_00548154(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054820c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054820c), iVar1 != 0)) {
    *DAT_00548210 = DAT_00548214;
  }
  if (DAT_00548210 != param_2) {
    if (((*DAT_00548218 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548218), iVar1 != 0)) {
      *DAT_0054821c = DAT_00548220;
    }
    if (DAT_0054821c != param_2) {
      if (((*DAT_00548224 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00548224), iVar1 != 0)) {
        *DAT_00548228 = DAT_0054822c;
      }
      if (DAT_00548228 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

