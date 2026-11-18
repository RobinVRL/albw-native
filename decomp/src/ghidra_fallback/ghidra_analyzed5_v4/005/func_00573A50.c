#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00573b90;
extern undefined4 *DAT_00573b94;
extern undefined4 DAT_00573b98;
extern uint *DAT_00573b9c;
extern undefined4 *DAT_00573ba0;
extern undefined4 DAT_00573ba4;
extern uint *DAT_00573ba8;
extern undefined4 *DAT_00573bac;
extern undefined4 DAT_00573bb0;
extern uint *DAT_00573bb4;
extern undefined4 *DAT_00573bb8;
extern undefined4 DAT_00573bbc;
extern uint *DAT_00573bc0;
extern undefined4 *DAT_00573bc4;
extern undefined4 DAT_00573bc8;

// USA 00573A50 <- EU 00573A28 (Ghidra, non-matching)
// GLOBAL DAT_00573b90 uint *
// GLOBAL DAT_00573b94 undefined4 *
// GLOBAL DAT_00573b98 undefined4
// GLOBAL DAT_00573b9c uint *
// GLOBAL DAT_00573ba0 undefined4 *
// GLOBAL DAT_00573ba4 undefined4
// GLOBAL DAT_00573ba8 uint *
// GLOBAL DAT_00573bac undefined4 *
// GLOBAL DAT_00573bb0 undefined4
// GLOBAL DAT_00573bb4 uint *
// GLOBAL DAT_00573bb8 undefined4 *
// GLOBAL DAT_00573bbc undefined4
// GLOBAL DAT_00573bc0 uint *
// GLOBAL DAT_00573bc4 undefined4 *
// GLOBAL DAT_00573bc8 undefined4

undefined4 func_00573A50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00573b90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573b90), iVar1 != 0)) {
    *DAT_00573b94 = DAT_00573b98;
  }
  if (DAT_00573b94 != param_2) {
    if (((*DAT_00573b9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573b9c), iVar1 != 0)) {
      *DAT_00573ba0 = DAT_00573ba4;
    }
    if (DAT_00573ba0 != param_2) {
      if (((*DAT_00573ba8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573ba8), iVar1 != 0)) {
        *DAT_00573bac = DAT_00573bb0;
      }
      if (DAT_00573bac != param_2) {
        if (((*DAT_00573bb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573bb4), iVar1 != 0))
        {
          *DAT_00573bb8 = DAT_00573bbc;
        }
        if (DAT_00573bb8 != param_2) {
          if (((*DAT_00573bc0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573bc0), iVar1 != 0)
             ) {
            *DAT_00573bc4 = DAT_00573bc8;
          }
          if (DAT_00573bc4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

