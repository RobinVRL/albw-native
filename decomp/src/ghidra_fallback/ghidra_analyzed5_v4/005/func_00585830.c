#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00585970;
extern undefined4 *DAT_00585974;
extern undefined4 DAT_00585978;
extern uint *DAT_0058597c;
extern undefined4 *DAT_00585980;
extern undefined4 DAT_00585984;
extern uint *DAT_00585988;
extern undefined4 *DAT_0058598c;
extern undefined4 DAT_00585990;
extern uint *DAT_00585994;
extern undefined4 *DAT_00585998;
extern undefined4 DAT_0058599c;
extern uint *DAT_005859a0;
extern undefined4 *DAT_005859a4;
extern undefined4 DAT_005859a8;

// USA 00585830 <- EU 00585808 (Ghidra, non-matching)
// GLOBAL DAT_00585970 uint *
// GLOBAL DAT_00585974 undefined4 *
// GLOBAL DAT_00585978 undefined4
// GLOBAL DAT_0058597c uint *
// GLOBAL DAT_00585980 undefined4 *
// GLOBAL DAT_00585984 undefined4
// GLOBAL DAT_00585988 uint *
// GLOBAL DAT_0058598c undefined4 *
// GLOBAL DAT_00585990 undefined4
// GLOBAL DAT_00585994 uint *
// GLOBAL DAT_00585998 undefined4 *
// GLOBAL DAT_0058599c undefined4
// GLOBAL DAT_005859a0 uint *
// GLOBAL DAT_005859a4 undefined4 *
// GLOBAL DAT_005859a8 undefined4

undefined4 func_00585830(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00585970 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585970), iVar1 != 0)) {
    *DAT_00585974 = DAT_00585978;
  }
  if (DAT_00585974 != param_2) {
    if (((*DAT_0058597c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058597c), iVar1 != 0)) {
      *DAT_00585980 = DAT_00585984;
    }
    if (DAT_00585980 != param_2) {
      if (((*DAT_00585988 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585988), iVar1 != 0)) {
        *DAT_0058598c = DAT_00585990;
      }
      if (DAT_0058598c != param_2) {
        if (((*DAT_00585994 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585994), iVar1 != 0))
        {
          *DAT_00585998 = DAT_0058599c;
        }
        if (DAT_00585998 != param_2) {
          if (((*DAT_005859a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005859a0), iVar1 != 0)
             ) {
            *DAT_005859a4 = DAT_005859a8;
          }
          if (DAT_005859a4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

