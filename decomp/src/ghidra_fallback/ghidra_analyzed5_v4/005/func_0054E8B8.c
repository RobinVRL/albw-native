#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054e9b4;
extern undefined4 *DAT_0054e9b8;
extern undefined4 DAT_0054e9bc;
extern uint *DAT_0054e9c0;
extern undefined4 *DAT_0054e9c4;
extern undefined4 DAT_0054e9c8;
extern uint *DAT_0054e9cc;
extern undefined4 *DAT_0054e9d0;
extern undefined4 DAT_0054e9d4;
extern uint *DAT_0054e9d8;
extern undefined4 *DAT_0054e9dc;
extern undefined4 DAT_0054e9e0;

// USA 0054E8B8 <- EU 0054E890 (Ghidra, non-matching)
// GLOBAL DAT_0054e9b4 uint *
// GLOBAL DAT_0054e9b8 undefined4 *
// GLOBAL DAT_0054e9bc undefined4
// GLOBAL DAT_0054e9c0 uint *
// GLOBAL DAT_0054e9c4 undefined4 *
// GLOBAL DAT_0054e9c8 undefined4
// GLOBAL DAT_0054e9cc uint *
// GLOBAL DAT_0054e9d0 undefined4 *
// GLOBAL DAT_0054e9d4 undefined4
// GLOBAL DAT_0054e9d8 uint *
// GLOBAL DAT_0054e9dc undefined4 *
// GLOBAL DAT_0054e9e0 undefined4

undefined4 func_0054E8B8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054e9b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054e9b4), iVar1 != 0)) {
    *DAT_0054e9b8 = DAT_0054e9bc;
  }
  if (DAT_0054e9b8 != param_2) {
    if (((*DAT_0054e9c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054e9c0), iVar1 != 0)) {
      *DAT_0054e9c4 = DAT_0054e9c8;
    }
    if (DAT_0054e9c4 != param_2) {
      if (((*DAT_0054e9cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054e9cc), iVar1 != 0)) {
        *DAT_0054e9d0 = DAT_0054e9d4;
      }
      if (DAT_0054e9d0 != param_2) {
        if (((*DAT_0054e9d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054e9d8), iVar1 != 0))
        {
          *DAT_0054e9dc = DAT_0054e9e0;
        }
        if (DAT_0054e9dc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

