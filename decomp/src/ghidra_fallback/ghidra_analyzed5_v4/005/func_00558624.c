#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00558720;
extern undefined4 *DAT_00558724;
extern undefined4 DAT_00558728;
extern uint *DAT_0055872c;
extern undefined4 *DAT_00558730;
extern undefined4 DAT_00558734;
extern uint *DAT_00558738;
extern undefined4 *DAT_0055873c;
extern undefined4 DAT_00558740;
extern uint *DAT_00558744;
extern undefined4 *DAT_00558748;
extern undefined4 DAT_0055874c;

// USA 00558624 <- EU 005585FC (Ghidra, non-matching)
// GLOBAL DAT_00558720 uint *
// GLOBAL DAT_00558724 undefined4 *
// GLOBAL DAT_00558728 undefined4
// GLOBAL DAT_0055872c uint *
// GLOBAL DAT_00558730 undefined4 *
// GLOBAL DAT_00558734 undefined4
// GLOBAL DAT_00558738 uint *
// GLOBAL DAT_0055873c undefined4 *
// GLOBAL DAT_00558740 undefined4
// GLOBAL DAT_00558744 uint *
// GLOBAL DAT_00558748 undefined4 *
// GLOBAL DAT_0055874c undefined4

undefined4 func_00558624(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558720 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558720), iVar1 != 0)) {
    *DAT_00558724 = DAT_00558728;
  }
  if (DAT_00558724 != param_2) {
    if (((*DAT_0055872c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055872c), iVar1 != 0)) {
      *DAT_00558730 = DAT_00558734;
    }
    if (DAT_00558730 != param_2) {
      if (((*DAT_00558738 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558738), iVar1 != 0)) {
        *DAT_0055873c = DAT_00558740;
      }
      if (DAT_0055873c != param_2) {
        if (((*DAT_00558744 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558744), iVar1 != 0))
        {
          *DAT_00558748 = DAT_0055874c;
        }
        if (DAT_00558748 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

