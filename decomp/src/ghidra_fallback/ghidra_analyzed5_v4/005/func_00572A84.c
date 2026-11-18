#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00572bc4;
extern undefined4 *DAT_00572bc8;
extern undefined4 DAT_00572bcc;
extern uint *DAT_00572bd0;
extern undefined4 *DAT_00572bd4;
extern undefined4 DAT_00572bd8;
extern uint *DAT_00572bdc;
extern undefined4 *DAT_00572be0;
extern undefined4 DAT_00572be4;
extern uint *DAT_00572be8;
extern undefined4 *DAT_00572bec;
extern undefined4 DAT_00572bf0;
extern uint *DAT_00572bf4;
extern undefined4 *DAT_00572bf8;
extern undefined4 DAT_00572bfc;

// USA 00572A84 <- EU 00572A5C (Ghidra, non-matching)
// GLOBAL DAT_00572bc4 uint *
// GLOBAL DAT_00572bc8 undefined4 *
// GLOBAL DAT_00572bcc undefined4
// GLOBAL DAT_00572bd0 uint *
// GLOBAL DAT_00572bd4 undefined4 *
// GLOBAL DAT_00572bd8 undefined4
// GLOBAL DAT_00572bdc uint *
// GLOBAL DAT_00572be0 undefined4 *
// GLOBAL DAT_00572be4 undefined4
// GLOBAL DAT_00572be8 uint *
// GLOBAL DAT_00572bec undefined4 *
// GLOBAL DAT_00572bf0 undefined4
// GLOBAL DAT_00572bf4 uint *
// GLOBAL DAT_00572bf8 undefined4 *
// GLOBAL DAT_00572bfc undefined4

undefined4 func_00572A84(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00572bc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572bc4), iVar1 != 0)) {
    *DAT_00572bc8 = DAT_00572bcc;
  }
  if (DAT_00572bc8 != param_2) {
    if (((*DAT_00572bd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572bd0), iVar1 != 0)) {
      *DAT_00572bd4 = DAT_00572bd8;
    }
    if (DAT_00572bd4 != param_2) {
      if (((*DAT_00572bdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572bdc), iVar1 != 0)) {
        *DAT_00572be0 = DAT_00572be4;
      }
      if (DAT_00572be0 != param_2) {
        if (((*DAT_00572be8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572be8), iVar1 != 0))
        {
          *DAT_00572bec = DAT_00572bf0;
        }
        if (DAT_00572bec != param_2) {
          if (((*DAT_00572bf4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572bf4), iVar1 != 0)
             ) {
            *DAT_00572bf8 = DAT_00572bfc;
          }
          if (DAT_00572bf8 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

