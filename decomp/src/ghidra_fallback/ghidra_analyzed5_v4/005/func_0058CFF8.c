#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058d0b0;
extern undefined4 *DAT_0058d0b4;
extern undefined4 DAT_0058d0b8;
extern uint *DAT_0058d0bc;
extern undefined4 *DAT_0058d0c0;
extern undefined4 DAT_0058d0c4;
extern uint *DAT_0058d0c8;
extern undefined4 *DAT_0058d0cc;
extern undefined4 DAT_0058d0d0;

// USA 0058CFF8 <- EU 0058CFD0 (Ghidra, non-matching)
// GLOBAL DAT_0058d0b0 uint *
// GLOBAL DAT_0058d0b4 undefined4 *
// GLOBAL DAT_0058d0b8 undefined4
// GLOBAL DAT_0058d0bc uint *
// GLOBAL DAT_0058d0c0 undefined4 *
// GLOBAL DAT_0058d0c4 undefined4
// GLOBAL DAT_0058d0c8 uint *
// GLOBAL DAT_0058d0cc undefined4 *
// GLOBAL DAT_0058d0d0 undefined4

undefined4 func_0058CFF8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058d0b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d0b0), iVar1 != 0)) {
    *DAT_0058d0b4 = DAT_0058d0b8;
  }
  if (DAT_0058d0b4 != param_2) {
    if (((*DAT_0058d0bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d0bc), iVar1 != 0)) {
      *DAT_0058d0c0 = DAT_0058d0c4;
    }
    if (DAT_0058d0c0 != param_2) {
      if (((*DAT_0058d0c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d0c8), iVar1 != 0)) {
        *DAT_0058d0cc = DAT_0058d0d0;
      }
      if (DAT_0058d0cc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

