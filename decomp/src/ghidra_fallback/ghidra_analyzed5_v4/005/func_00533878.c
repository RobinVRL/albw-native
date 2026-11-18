#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00533974;
extern undefined4 *DAT_00533978;
extern undefined4 DAT_0053397c;
extern uint *DAT_00533980;
extern undefined4 *DAT_00533984;
extern undefined4 DAT_00533988;
extern uint *DAT_0053398c;
extern undefined4 *DAT_00533990;
extern undefined4 DAT_00533994;
extern uint *DAT_00533998;
extern undefined4 *DAT_0053399c;
extern undefined4 DAT_005339a0;

// USA 00533878 <- EU 00533850 (Ghidra, non-matching)
// GLOBAL DAT_00533974 uint *
// GLOBAL DAT_00533978 undefined4 *
// GLOBAL DAT_0053397c undefined4
// GLOBAL DAT_00533980 uint *
// GLOBAL DAT_00533984 undefined4 *
// GLOBAL DAT_00533988 undefined4
// GLOBAL DAT_0053398c uint *
// GLOBAL DAT_00533990 undefined4 *
// GLOBAL DAT_00533994 undefined4
// GLOBAL DAT_00533998 uint *
// GLOBAL DAT_0053399c undefined4 *
// GLOBAL DAT_005339a0 undefined4

undefined4 func_00533878(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00533974 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533974), iVar1 != 0)) {
    *DAT_00533978 = DAT_0053397c;
  }
  if (DAT_00533978 != param_2) {
    if (((*DAT_00533980 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533980), iVar1 != 0)) {
      *DAT_00533984 = DAT_00533988;
    }
    if (DAT_00533984 != param_2) {
      if (((*DAT_0053398c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053398c), iVar1 != 0)) {
        *DAT_00533990 = DAT_00533994;
      }
      if (DAT_00533990 != param_2) {
        if (((*DAT_00533998 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533998), iVar1 != 0))
        {
          *DAT_0053399c = DAT_005339a0;
        }
        if (DAT_0053399c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

