#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052f4b4;
extern undefined4 *DAT_0052f4b8;
extern undefined4 DAT_0052f4bc;
extern uint *DAT_0052f4c0;
extern undefined4 *DAT_0052f4c4;
extern undefined4 DAT_0052f4c8;
extern uint *DAT_0052f4cc;
extern undefined4 *DAT_0052f4d0;
extern undefined4 DAT_0052f4d4;

// USA 0052F3FC <- EU 0052F3D4 (Ghidra, non-matching)
// GLOBAL DAT_0052f4b4 uint *
// GLOBAL DAT_0052f4b8 undefined4 *
// GLOBAL DAT_0052f4bc undefined4
// GLOBAL DAT_0052f4c0 uint *
// GLOBAL DAT_0052f4c4 undefined4 *
// GLOBAL DAT_0052f4c8 undefined4
// GLOBAL DAT_0052f4cc uint *
// GLOBAL DAT_0052f4d0 undefined4 *
// GLOBAL DAT_0052f4d4 undefined4

undefined4 func_0052F3FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052f4b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f4b4), iVar1 != 0)) {
    *DAT_0052f4b8 = DAT_0052f4bc;
  }
  if (DAT_0052f4b8 != param_2) {
    if (((*DAT_0052f4c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f4c0), iVar1 != 0)) {
      *DAT_0052f4c4 = DAT_0052f4c8;
    }
    if (DAT_0052f4c4 != param_2) {
      if (((*DAT_0052f4cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052f4cc), iVar1 != 0)) {
        *DAT_0052f4d0 = DAT_0052f4d4;
      }
      if (DAT_0052f4d0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

