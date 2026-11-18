#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00577e98;
extern undefined4 *DAT_00577e9c;
extern undefined4 DAT_00577ea0;
extern uint *DAT_00577ea4;
extern undefined4 *DAT_00577ea8;
extern undefined4 DAT_00577eac;
extern uint *DAT_00577eb0;
extern undefined4 *DAT_00577eb4;
extern undefined4 DAT_00577eb8;
extern uint *DAT_00577ebc;
extern undefined4 *DAT_00577ec0;
extern undefined4 DAT_00577ec4;
extern uint *DAT_00577ec8;
extern undefined4 *DAT_00577ecc;
extern undefined4 DAT_00577ed0;

// USA 00577D58 <- EU 00577D30 (Ghidra, non-matching)
// GLOBAL DAT_00577e98 uint *
// GLOBAL DAT_00577e9c undefined4 *
// GLOBAL DAT_00577ea0 undefined4
// GLOBAL DAT_00577ea4 uint *
// GLOBAL DAT_00577ea8 undefined4 *
// GLOBAL DAT_00577eac undefined4
// GLOBAL DAT_00577eb0 uint *
// GLOBAL DAT_00577eb4 undefined4 *
// GLOBAL DAT_00577eb8 undefined4
// GLOBAL DAT_00577ebc uint *
// GLOBAL DAT_00577ec0 undefined4 *
// GLOBAL DAT_00577ec4 undefined4
// GLOBAL DAT_00577ec8 uint *
// GLOBAL DAT_00577ecc undefined4 *
// GLOBAL DAT_00577ed0 undefined4

undefined4 func_00577D58(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00577e98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577e98), iVar1 != 0)) {
    *DAT_00577e9c = DAT_00577ea0;
  }
  if (DAT_00577e9c != param_2) {
    if (((*DAT_00577ea4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577ea4), iVar1 != 0)) {
      *DAT_00577ea8 = DAT_00577eac;
    }
    if (DAT_00577ea8 != param_2) {
      if (((*DAT_00577eb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577eb0), iVar1 != 0)) {
        *DAT_00577eb4 = DAT_00577eb8;
      }
      if (DAT_00577eb4 != param_2) {
        if (((*DAT_00577ebc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577ebc), iVar1 != 0))
        {
          *DAT_00577ec0 = DAT_00577ec4;
        }
        if (DAT_00577ec0 != param_2) {
          if (((*DAT_00577ec8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577ec8), iVar1 != 0)
             ) {
            *DAT_00577ecc = DAT_00577ed0;
          }
          if (DAT_00577ecc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

