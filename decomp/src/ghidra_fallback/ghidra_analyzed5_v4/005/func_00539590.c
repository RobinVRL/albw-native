#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00539648;
extern undefined4 *DAT_0053964c;
extern undefined4 DAT_00539650;
extern uint *DAT_00539654;
extern undefined4 *DAT_00539658;
extern undefined4 DAT_0053965c;
extern uint *DAT_00539660;
extern undefined4 *DAT_00539664;
extern undefined4 DAT_00539668;

// USA 00539590 <- EU 00539568 (Ghidra, non-matching)
// GLOBAL DAT_00539648 uint *
// GLOBAL DAT_0053964c undefined4 *
// GLOBAL DAT_00539650 undefined4
// GLOBAL DAT_00539654 uint *
// GLOBAL DAT_00539658 undefined4 *
// GLOBAL DAT_0053965c undefined4
// GLOBAL DAT_00539660 uint *
// GLOBAL DAT_00539664 undefined4 *
// GLOBAL DAT_00539668 undefined4

undefined4 func_00539590(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00539648 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539648), iVar1 != 0)) {
    *DAT_0053964c = DAT_00539650;
  }
  if (DAT_0053964c != param_2) {
    if (((*DAT_00539654 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539654), iVar1 != 0)) {
      *DAT_00539658 = DAT_0053965c;
    }
    if (DAT_00539658 != param_2) {
      if (((*DAT_00539660 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539660), iVar1 != 0)) {
        *DAT_00539664 = DAT_00539668;
      }
      if (DAT_00539664 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

