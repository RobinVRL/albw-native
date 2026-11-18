#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005315a8;
extern undefined4 *DAT_005315ac;
extern undefined4 DAT_005315b0;
extern uint *DAT_005315b4;
extern undefined4 *DAT_005315b8;
extern undefined4 DAT_005315bc;
extern uint *DAT_005315c0;
extern undefined4 *DAT_005315c4;
extern undefined4 DAT_005315c8;
extern uint *DAT_005315cc;
extern undefined4 *DAT_005315d0;
extern undefined4 DAT_005315d4;

// USA 005314AC <- EU 00531484 (Ghidra, non-matching)
// GLOBAL DAT_005315a8 uint *
// GLOBAL DAT_005315ac undefined4 *
// GLOBAL DAT_005315b0 undefined4
// GLOBAL DAT_005315b4 uint *
// GLOBAL DAT_005315b8 undefined4 *
// GLOBAL DAT_005315bc undefined4
// GLOBAL DAT_005315c0 uint *
// GLOBAL DAT_005315c4 undefined4 *
// GLOBAL DAT_005315c8 undefined4
// GLOBAL DAT_005315cc uint *
// GLOBAL DAT_005315d0 undefined4 *
// GLOBAL DAT_005315d4 undefined4

undefined4 func_005314AC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005315a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005315a8), iVar1 != 0)) {
    *DAT_005315ac = DAT_005315b0;
  }
  if (DAT_005315ac != param_2) {
    if (((*DAT_005315b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005315b4), iVar1 != 0)) {
      *DAT_005315b8 = DAT_005315bc;
    }
    if (DAT_005315b8 != param_2) {
      if (((*DAT_005315c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005315c0), iVar1 != 0)) {
        *DAT_005315c4 = DAT_005315c8;
      }
      if (DAT_005315c4 != param_2) {
        if (((*DAT_005315cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005315cc), iVar1 != 0))
        {
          *DAT_005315d0 = DAT_005315d4;
        }
        if (DAT_005315d0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

