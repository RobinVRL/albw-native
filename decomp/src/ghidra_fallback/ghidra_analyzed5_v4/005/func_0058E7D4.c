#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058e88c;
extern undefined4 *DAT_0058e890;
extern undefined4 DAT_0058e894;
extern uint *DAT_0058e898;
extern undefined4 *DAT_0058e89c;
extern undefined4 DAT_0058e8a0;
extern uint *DAT_0058e8a4;
extern undefined4 *DAT_0058e8a8;
extern undefined4 DAT_0058e8ac;

// USA 0058E7D4 <- EU 0058E7AC (Ghidra, non-matching)
// GLOBAL DAT_0058e88c uint *
// GLOBAL DAT_0058e890 undefined4 *
// GLOBAL DAT_0058e894 undefined4
// GLOBAL DAT_0058e898 uint *
// GLOBAL DAT_0058e89c undefined4 *
// GLOBAL DAT_0058e8a0 undefined4
// GLOBAL DAT_0058e8a4 uint *
// GLOBAL DAT_0058e8a8 undefined4 *
// GLOBAL DAT_0058e8ac undefined4

undefined4 func_0058E7D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058e88c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e88c), iVar1 != 0)) {
    *DAT_0058e890 = DAT_0058e894;
  }
  if (DAT_0058e890 != param_2) {
    if (((*DAT_0058e898 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e898), iVar1 != 0)) {
      *DAT_0058e89c = DAT_0058e8a0;
    }
    if (DAT_0058e89c != param_2) {
      if (((*DAT_0058e8a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058e8a4), iVar1 != 0)) {
        *DAT_0058e8a8 = DAT_0058e8ac;
      }
      if (DAT_0058e8a8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

