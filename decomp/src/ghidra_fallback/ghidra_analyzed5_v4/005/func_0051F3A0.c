#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051f49c;
extern undefined4 *DAT_0051f4a0;
extern undefined4 DAT_0051f4a4;
extern uint *DAT_0051f4a8;
extern undefined4 *DAT_0051f4ac;
extern undefined4 DAT_0051f4b0;
extern uint *DAT_0051f4b4;
extern undefined4 *DAT_0051f4b8;
extern undefined4 DAT_0051f4bc;
extern uint *DAT_0051f4c0;
extern undefined4 *DAT_0051f4c4;
extern undefined4 DAT_0051f4c8;

// USA 0051F3A0 <- EU 0051F378 (Ghidra, non-matching)
// GLOBAL DAT_0051f49c uint *
// GLOBAL DAT_0051f4a0 undefined4 *
// GLOBAL DAT_0051f4a4 undefined4
// GLOBAL DAT_0051f4a8 uint *
// GLOBAL DAT_0051f4ac undefined4 *
// GLOBAL DAT_0051f4b0 undefined4
// GLOBAL DAT_0051f4b4 uint *
// GLOBAL DAT_0051f4b8 undefined4 *
// GLOBAL DAT_0051f4bc undefined4
// GLOBAL DAT_0051f4c0 uint *
// GLOBAL DAT_0051f4c4 undefined4 *
// GLOBAL DAT_0051f4c8 undefined4

undefined4 func_0051F3A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051f49c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f49c), iVar1 != 0)) {
    *DAT_0051f4a0 = DAT_0051f4a4;
  }
  if (DAT_0051f4a0 != param_2) {
    if (((*DAT_0051f4a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f4a8), iVar1 != 0)) {
      *DAT_0051f4ac = DAT_0051f4b0;
    }
    if (DAT_0051f4ac != param_2) {
      if (((*DAT_0051f4b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f4b4), iVar1 != 0)) {
        *DAT_0051f4b8 = DAT_0051f4bc;
      }
      if (DAT_0051f4b8 != param_2) {
        if (((*DAT_0051f4c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f4c0), iVar1 != 0))
        {
          *DAT_0051f4c4 = DAT_0051f4c8;
        }
        if (DAT_0051f4c4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

