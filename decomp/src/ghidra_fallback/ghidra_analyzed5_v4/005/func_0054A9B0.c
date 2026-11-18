#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054aaac;
extern undefined4 *DAT_0054aab0;
extern undefined4 DAT_0054aab4;
extern uint *DAT_0054aab8;
extern undefined4 *DAT_0054aabc;
extern undefined4 DAT_0054aac0;
extern uint *DAT_0054aac4;
extern undefined4 *DAT_0054aac8;
extern undefined4 DAT_0054aacc;
extern uint *DAT_0054aad0;
extern undefined4 *DAT_0054aad4;
extern undefined4 DAT_0054aad8;

// USA 0054A9B0 <- EU 0054A988 (Ghidra, non-matching)
// GLOBAL DAT_0054aaac uint *
// GLOBAL DAT_0054aab0 undefined4 *
// GLOBAL DAT_0054aab4 undefined4
// GLOBAL DAT_0054aab8 uint *
// GLOBAL DAT_0054aabc undefined4 *
// GLOBAL DAT_0054aac0 undefined4
// GLOBAL DAT_0054aac4 uint *
// GLOBAL DAT_0054aac8 undefined4 *
// GLOBAL DAT_0054aacc undefined4
// GLOBAL DAT_0054aad0 uint *
// GLOBAL DAT_0054aad4 undefined4 *
// GLOBAL DAT_0054aad8 undefined4

undefined4 func_0054A9B0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054aaac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aaac), iVar1 != 0)) {
    *DAT_0054aab0 = DAT_0054aab4;
  }
  if (DAT_0054aab0 != param_2) {
    if (((*DAT_0054aab8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aab8), iVar1 != 0)) {
      *DAT_0054aabc = DAT_0054aac0;
    }
    if (DAT_0054aabc != param_2) {
      if (((*DAT_0054aac4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aac4), iVar1 != 0)) {
        *DAT_0054aac8 = DAT_0054aacc;
      }
      if (DAT_0054aac8 != param_2) {
        if (((*DAT_0054aad0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054aad0), iVar1 != 0))
        {
          *DAT_0054aad4 = DAT_0054aad8;
        }
        if (DAT_0054aad4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

