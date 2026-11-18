#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005517d0;
extern undefined4 *DAT_005517d4;
extern undefined4 DAT_005517d8;
extern uint *DAT_005517dc;
extern undefined4 *DAT_005517e0;
extern undefined4 DAT_005517e4;
extern uint *DAT_005517e8;
extern undefined4 *DAT_005517ec;
extern undefined4 DAT_005517f0;

// USA 00551718 <- EU 005516F0 (Ghidra, non-matching)
// GLOBAL DAT_005517d0 uint *
// GLOBAL DAT_005517d4 undefined4 *
// GLOBAL DAT_005517d8 undefined4
// GLOBAL DAT_005517dc uint *
// GLOBAL DAT_005517e0 undefined4 *
// GLOBAL DAT_005517e4 undefined4
// GLOBAL DAT_005517e8 uint *
// GLOBAL DAT_005517ec undefined4 *
// GLOBAL DAT_005517f0 undefined4

undefined4 func_00551718(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005517d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005517d0), iVar1 != 0)) {
    *DAT_005517d4 = DAT_005517d8;
  }
  if (DAT_005517d4 != param_2) {
    if (((*DAT_005517dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005517dc), iVar1 != 0)) {
      *DAT_005517e0 = DAT_005517e4;
    }
    if (DAT_005517e0 != param_2) {
      if (((*DAT_005517e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005517e8), iVar1 != 0)) {
        *DAT_005517ec = DAT_005517f0;
      }
      if (DAT_005517ec != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

