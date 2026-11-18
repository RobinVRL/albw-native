#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055269c;
extern undefined4 *DAT_005526a0;
extern undefined4 DAT_005526a4;
extern uint *DAT_005526a8;
extern undefined4 *DAT_005526ac;
extern undefined4 DAT_005526b0;
extern uint *DAT_005526b4;
extern undefined4 *DAT_005526b8;
extern undefined4 DAT_005526bc;
extern uint *DAT_005526c0;
extern undefined4 *DAT_005526c4;
extern undefined4 DAT_005526c8;

// USA 005525A0 <- EU 00552578 (Ghidra, non-matching)
// GLOBAL DAT_0055269c uint *
// GLOBAL DAT_005526a0 undefined4 *
// GLOBAL DAT_005526a4 undefined4
// GLOBAL DAT_005526a8 uint *
// GLOBAL DAT_005526ac undefined4 *
// GLOBAL DAT_005526b0 undefined4
// GLOBAL DAT_005526b4 uint *
// GLOBAL DAT_005526b8 undefined4 *
// GLOBAL DAT_005526bc undefined4
// GLOBAL DAT_005526c0 uint *
// GLOBAL DAT_005526c4 undefined4 *
// GLOBAL DAT_005526c8 undefined4

undefined4 func_005525A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055269c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055269c), iVar1 != 0)) {
    *DAT_005526a0 = DAT_005526a4;
  }
  if (DAT_005526a0 != param_2) {
    if (((*DAT_005526a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005526a8), iVar1 != 0)) {
      *DAT_005526ac = DAT_005526b0;
    }
    if (DAT_005526ac != param_2) {
      if (((*DAT_005526b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005526b4), iVar1 != 0)) {
        *DAT_005526b8 = DAT_005526bc;
      }
      if (DAT_005526b8 != param_2) {
        if (((*DAT_005526c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005526c0), iVar1 != 0))
        {
          *DAT_005526c4 = DAT_005526c8;
        }
        if (DAT_005526c4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

