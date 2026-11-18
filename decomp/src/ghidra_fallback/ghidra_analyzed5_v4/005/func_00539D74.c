#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00539eb4;
extern undefined4 *DAT_00539eb8;
extern undefined4 DAT_00539ebc;
extern uint *DAT_00539ec0;
extern undefined4 *DAT_00539ec4;
extern undefined4 DAT_00539ec8;
extern uint *DAT_00539ecc;
extern undefined4 *DAT_00539ed0;
extern undefined4 DAT_00539ed4;
extern uint *DAT_00539ed8;
extern undefined4 *DAT_00539edc;
extern undefined4 DAT_00539ee0;
extern uint *DAT_00539ee4;
extern undefined4 *DAT_00539ee8;
extern undefined4 DAT_00539eec;

// USA 00539D74 <- EU 00539D4C (Ghidra, non-matching)
// GLOBAL DAT_00539eb4 uint *
// GLOBAL DAT_00539eb8 undefined4 *
// GLOBAL DAT_00539ebc undefined4
// GLOBAL DAT_00539ec0 uint *
// GLOBAL DAT_00539ec4 undefined4 *
// GLOBAL DAT_00539ec8 undefined4
// GLOBAL DAT_00539ecc uint *
// GLOBAL DAT_00539ed0 undefined4 *
// GLOBAL DAT_00539ed4 undefined4
// GLOBAL DAT_00539ed8 uint *
// GLOBAL DAT_00539edc undefined4 *
// GLOBAL DAT_00539ee0 undefined4
// GLOBAL DAT_00539ee4 uint *
// GLOBAL DAT_00539ee8 undefined4 *
// GLOBAL DAT_00539eec undefined4

undefined4 func_00539D74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00539eb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539eb4), iVar1 != 0)) {
    *DAT_00539eb8 = DAT_00539ebc;
  }
  if (DAT_00539eb8 != param_2) {
    if (((*DAT_00539ec0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539ec0), iVar1 != 0)) {
      *DAT_00539ec4 = DAT_00539ec8;
    }
    if (DAT_00539ec4 != param_2) {
      if (((*DAT_00539ecc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539ecc), iVar1 != 0)) {
        *DAT_00539ed0 = DAT_00539ed4;
      }
      if (DAT_00539ed0 != param_2) {
        if (((*DAT_00539ed8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539ed8), iVar1 != 0))
        {
          *DAT_00539edc = DAT_00539ee0;
        }
        if (DAT_00539edc != param_2) {
          if (((*DAT_00539ee4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539ee4), iVar1 != 0)
             ) {
            *DAT_00539ee8 = DAT_00539eec;
          }
          if (DAT_00539ee8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

