#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058a0b0;
extern undefined4 *DAT_0058a0b4;
extern undefined4 DAT_0058a0b8;
extern uint *DAT_0058a0bc;
extern undefined4 *DAT_0058a0c0;
extern undefined4 DAT_0058a0c4;
extern uint *DAT_0058a0c8;
extern undefined4 *DAT_0058a0cc;
extern undefined4 DAT_0058a0d0;
extern uint *DAT_0058a0d4;
extern undefined4 *DAT_0058a0d8;
extern undefined4 DAT_0058a0dc;

// USA 00589FB4 <- EU 00589F8C (Ghidra, non-matching)
// GLOBAL DAT_0058a0b0 uint *
// GLOBAL DAT_0058a0b4 undefined4 *
// GLOBAL DAT_0058a0b8 undefined4
// GLOBAL DAT_0058a0bc uint *
// GLOBAL DAT_0058a0c0 undefined4 *
// GLOBAL DAT_0058a0c4 undefined4
// GLOBAL DAT_0058a0c8 uint *
// GLOBAL DAT_0058a0cc undefined4 *
// GLOBAL DAT_0058a0d0 undefined4
// GLOBAL DAT_0058a0d4 uint *
// GLOBAL DAT_0058a0d8 undefined4 *
// GLOBAL DAT_0058a0dc undefined4

undefined4 func_00589FB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058a0b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058a0b0), iVar1 != 0)) {
    *DAT_0058a0b4 = DAT_0058a0b8;
  }
  if (DAT_0058a0b4 != param_2) {
    if (((*DAT_0058a0bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058a0bc), iVar1 != 0)) {
      *DAT_0058a0c0 = DAT_0058a0c4;
    }
    if (DAT_0058a0c0 != param_2) {
      if (((*DAT_0058a0c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058a0c8), iVar1 != 0)) {
        *DAT_0058a0cc = DAT_0058a0d0;
      }
      if (DAT_0058a0cc != param_2) {
        if (((*DAT_0058a0d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058a0d4), iVar1 != 0))
        {
          *DAT_0058a0d8 = DAT_0058a0dc;
        }
        if (DAT_0058a0d8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

