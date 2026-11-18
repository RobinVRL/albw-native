#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054f494;
extern undefined4 *DAT_0054f498;
extern undefined4 DAT_0054f49c;
extern uint *DAT_0054f4a0;
extern undefined4 *DAT_0054f4a4;
extern undefined4 DAT_0054f4a8;
extern uint *DAT_0054f4ac;
extern undefined4 *DAT_0054f4b0;
extern undefined4 DAT_0054f4b4;

// USA 0054F3DC <- EU 0054F3B4 (Ghidra, non-matching)
// GLOBAL DAT_0054f494 uint *
// GLOBAL DAT_0054f498 undefined4 *
// GLOBAL DAT_0054f49c undefined4
// GLOBAL DAT_0054f4a0 uint *
// GLOBAL DAT_0054f4a4 undefined4 *
// GLOBAL DAT_0054f4a8 undefined4
// GLOBAL DAT_0054f4ac uint *
// GLOBAL DAT_0054f4b0 undefined4 *
// GLOBAL DAT_0054f4b4 undefined4

undefined4 func_0054F3DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054f494 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f494), iVar1 != 0)) {
    *DAT_0054f498 = DAT_0054f49c;
  }
  if (DAT_0054f498 != param_2) {
    if (((*DAT_0054f4a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f4a0), iVar1 != 0)) {
      *DAT_0054f4a4 = DAT_0054f4a8;
    }
    if (DAT_0054f4a4 != param_2) {
      if (((*DAT_0054f4ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054f4ac), iVar1 != 0)) {
        *DAT_0054f4b0 = DAT_0054f4b4;
      }
      if (DAT_0054f4b0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

