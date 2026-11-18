#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00580998;
extern undefined4 *DAT_0058099c;
extern undefined4 DAT_005809a0;
extern uint *DAT_005809a4;
extern undefined4 *DAT_005809a8;
extern undefined4 DAT_005809ac;
extern uint *DAT_005809b0;
extern undefined4 *DAT_005809b4;
extern undefined4 DAT_005809b8;

// USA 005808E0 <- EU 005808B8 (Ghidra, non-matching)
// GLOBAL DAT_00580998 uint *
// GLOBAL DAT_0058099c undefined4 *
// GLOBAL DAT_005809a0 undefined4
// GLOBAL DAT_005809a4 uint *
// GLOBAL DAT_005809a8 undefined4 *
// GLOBAL DAT_005809ac undefined4
// GLOBAL DAT_005809b0 uint *
// GLOBAL DAT_005809b4 undefined4 *
// GLOBAL DAT_005809b8 undefined4

undefined4 func_005808E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00580998 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00580998), iVar1 != 0)) {
    *DAT_0058099c = DAT_005809a0;
  }
  if (DAT_0058099c != param_2) {
    if (((*DAT_005809a4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005809a4), iVar1 != 0)) {
      *DAT_005809a8 = DAT_005809ac;
    }
    if (DAT_005809a8 != param_2) {
      if (((*DAT_005809b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005809b0), iVar1 != 0)) {
        *DAT_005809b4 = DAT_005809b8;
      }
      if (DAT_005809b4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

