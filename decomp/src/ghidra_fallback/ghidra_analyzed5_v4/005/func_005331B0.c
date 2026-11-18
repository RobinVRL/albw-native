#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005332ac;
extern undefined4 *DAT_005332b0;
extern undefined4 DAT_005332b4;
extern uint *DAT_005332b8;
extern undefined4 *DAT_005332bc;
extern undefined4 DAT_005332c0;
extern uint *DAT_005332c4;
extern undefined4 *DAT_005332c8;
extern undefined4 DAT_005332cc;
extern uint *DAT_005332d0;
extern undefined4 *DAT_005332d4;
extern undefined4 DAT_005332d8;

// USA 005331B0 <- EU 00533188 (Ghidra, non-matching)
// GLOBAL DAT_005332ac uint *
// GLOBAL DAT_005332b0 undefined4 *
// GLOBAL DAT_005332b4 undefined4
// GLOBAL DAT_005332b8 uint *
// GLOBAL DAT_005332bc undefined4 *
// GLOBAL DAT_005332c0 undefined4
// GLOBAL DAT_005332c4 uint *
// GLOBAL DAT_005332c8 undefined4 *
// GLOBAL DAT_005332cc undefined4
// GLOBAL DAT_005332d0 uint *
// GLOBAL DAT_005332d4 undefined4 *
// GLOBAL DAT_005332d8 undefined4

undefined4 func_005331B0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005332ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005332ac), iVar1 != 0)) {
    *DAT_005332b0 = DAT_005332b4;
  }
  if (DAT_005332b0 != param_2) {
    if (((*DAT_005332b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005332b8), iVar1 != 0)) {
      *DAT_005332bc = DAT_005332c0;
    }
    if (DAT_005332bc != param_2) {
      if (((*DAT_005332c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005332c4), iVar1 != 0)) {
        *DAT_005332c8 = DAT_005332cc;
      }
      if (DAT_005332c8 != param_2) {
        if (((*DAT_005332d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005332d0), iVar1 != 0))
        {
          *DAT_005332d4 = DAT_005332d8;
        }
        if (DAT_005332d4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

