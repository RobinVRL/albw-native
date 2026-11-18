#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053c980;
extern undefined4 *DAT_0053c984;
extern undefined4 DAT_0053c988;
extern uint *DAT_0053c98c;
extern undefined4 *DAT_0053c990;
extern undefined4 DAT_0053c994;
extern uint *DAT_0053c998;
extern undefined4 *DAT_0053c99c;
extern undefined4 DAT_0053c9a0;
extern uint *DAT_0053c9a4;
extern undefined4 *DAT_0053c9a8;
extern undefined4 DAT_0053c9ac;

// USA 0053C884 <- EU 0053C85C (Ghidra, non-matching)
// GLOBAL DAT_0053c980 uint *
// GLOBAL DAT_0053c984 undefined4 *
// GLOBAL DAT_0053c988 undefined4
// GLOBAL DAT_0053c98c uint *
// GLOBAL DAT_0053c990 undefined4 *
// GLOBAL DAT_0053c994 undefined4
// GLOBAL DAT_0053c998 uint *
// GLOBAL DAT_0053c99c undefined4 *
// GLOBAL DAT_0053c9a0 undefined4
// GLOBAL DAT_0053c9a4 uint *
// GLOBAL DAT_0053c9a8 undefined4 *
// GLOBAL DAT_0053c9ac undefined4

undefined4 func_0053C884(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053c980 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c980), iVar1 != 0)) {
    *DAT_0053c984 = DAT_0053c988;
  }
  if (DAT_0053c984 != param_2) {
    if (((*DAT_0053c98c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c98c), iVar1 != 0)) {
      *DAT_0053c990 = DAT_0053c994;
    }
    if (DAT_0053c990 != param_2) {
      if (((*DAT_0053c998 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c998), iVar1 != 0)) {
        *DAT_0053c99c = DAT_0053c9a0;
      }
      if (DAT_0053c99c != param_2) {
        if (((*DAT_0053c9a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053c9a4), iVar1 != 0))
        {
          *DAT_0053c9a8 = DAT_0053c9ac;
        }
        if (DAT_0053c9a8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

