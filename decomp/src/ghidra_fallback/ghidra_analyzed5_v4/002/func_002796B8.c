#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00279804;
extern undefined4 *DAT_00279808;
extern undefined4 DAT_0027980c;
extern uint *DAT_00279810;
extern undefined4 *DAT_00279814;
extern undefined4 DAT_00279818;
extern uint *DAT_0027981c;
extern undefined4 *DAT_00279820;
extern undefined4 DAT_00279824;
extern uint *DAT_00279828;
extern undefined4 *DAT_0027982c;
extern undefined4 DAT_00279830;

// USA 002796B8 <- EU 002796E0 (Ghidra, non-matching)
// GLOBAL DAT_00279804 uint *
// GLOBAL DAT_00279808 undefined4 *
// GLOBAL DAT_0027980c undefined4
// GLOBAL DAT_00279810 uint *
// GLOBAL DAT_00279814 undefined4 *
// GLOBAL DAT_00279818 undefined4
// GLOBAL DAT_0027981c uint *
// GLOBAL DAT_00279820 undefined4 *
// GLOBAL DAT_00279824 undefined4
// GLOBAL DAT_00279828 uint *
// GLOBAL DAT_0027982c undefined4 *
// GLOBAL DAT_00279830 undefined4

undefined4 func_002796B8(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00279804 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00279804), iVar1 != 0)) {
    *DAT_00279808 = DAT_0027980c;
  }
  if (DAT_00279808 != param_1) {
    if (((*DAT_00279810 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00279810), iVar1 != 0)) {
      *DAT_00279814 = DAT_00279818;
    }
    if (DAT_00279814 != param_1) {
      if (((*DAT_0027981c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0027981c), iVar1 != 0)) {
        *DAT_00279820 = DAT_00279824;
      }
      if (DAT_00279820 != param_1) {
        if (((*DAT_00279828 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00279828), iVar1 != 0))
        {
          *DAT_0027982c = DAT_00279830;
        }
        if (DAT_0027982c != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

