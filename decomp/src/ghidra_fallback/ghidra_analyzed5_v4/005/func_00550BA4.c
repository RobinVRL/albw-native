#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00550ca0;
extern undefined4 *DAT_00550ca4;
extern undefined4 DAT_00550ca8;
extern uint *DAT_00550cac;
extern undefined4 *DAT_00550cb0;
extern undefined4 DAT_00550cb4;
extern uint *DAT_00550cb8;
extern undefined4 *DAT_00550cbc;
extern undefined4 DAT_00550cc0;
extern uint *DAT_00550cc4;
extern undefined4 *DAT_00550cc8;
extern undefined4 DAT_00550ccc;

// USA 00550BA4 <- EU 00550B7C (Ghidra, non-matching)
// GLOBAL DAT_00550ca0 uint *
// GLOBAL DAT_00550ca4 undefined4 *
// GLOBAL DAT_00550ca8 undefined4
// GLOBAL DAT_00550cac uint *
// GLOBAL DAT_00550cb0 undefined4 *
// GLOBAL DAT_00550cb4 undefined4
// GLOBAL DAT_00550cb8 uint *
// GLOBAL DAT_00550cbc undefined4 *
// GLOBAL DAT_00550cc0 undefined4
// GLOBAL DAT_00550cc4 uint *
// GLOBAL DAT_00550cc8 undefined4 *
// GLOBAL DAT_00550ccc undefined4

undefined4 func_00550BA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00550ca0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550ca0), iVar1 != 0)) {
    *DAT_00550ca4 = DAT_00550ca8;
  }
  if (DAT_00550ca4 != param_2) {
    if (((*DAT_00550cac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550cac), iVar1 != 0)) {
      *DAT_00550cb0 = DAT_00550cb4;
    }
    if (DAT_00550cb0 != param_2) {
      if (((*DAT_00550cb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550cb8), iVar1 != 0)) {
        *DAT_00550cbc = DAT_00550cc0;
      }
      if (DAT_00550cbc != param_2) {
        if (((*DAT_00550cc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550cc4), iVar1 != 0))
        {
          *DAT_00550cc8 = DAT_00550ccc;
        }
        if (DAT_00550cc8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

