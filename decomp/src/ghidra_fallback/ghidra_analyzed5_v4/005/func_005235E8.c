#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005236a0;
extern undefined4 *DAT_005236a4;
extern undefined4 DAT_005236a8;
extern uint *DAT_005236ac;
extern undefined4 *DAT_005236b0;
extern undefined4 DAT_005236b4;
extern uint *DAT_005236b8;
extern undefined4 *DAT_005236bc;
extern undefined4 DAT_005236c0;

// USA 005235E8 <- EU 005235C0 (Ghidra, non-matching)
// GLOBAL DAT_005236a0 uint *
// GLOBAL DAT_005236a4 undefined4 *
// GLOBAL DAT_005236a8 undefined4
// GLOBAL DAT_005236ac uint *
// GLOBAL DAT_005236b0 undefined4 *
// GLOBAL DAT_005236b4 undefined4
// GLOBAL DAT_005236b8 uint *
// GLOBAL DAT_005236bc undefined4 *
// GLOBAL DAT_005236c0 undefined4

undefined4 func_005235E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005236a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005236a0), iVar1 != 0)) {
    *DAT_005236a4 = DAT_005236a8;
  }
  if (DAT_005236a4 != param_2) {
    if (((*DAT_005236ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005236ac), iVar1 != 0)) {
      *DAT_005236b0 = DAT_005236b4;
    }
    if (DAT_005236b0 != param_2) {
      if (((*DAT_005236b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005236b8), iVar1 != 0)) {
        *DAT_005236bc = DAT_005236c0;
      }
      if (DAT_005236bc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

