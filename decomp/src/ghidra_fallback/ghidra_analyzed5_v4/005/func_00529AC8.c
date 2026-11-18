#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00529bc4;
extern undefined4 *DAT_00529bc8;
extern undefined4 DAT_00529bcc;
extern uint *DAT_00529bd0;
extern undefined4 *DAT_00529bd4;
extern undefined4 DAT_00529bd8;
extern uint *DAT_00529bdc;
extern undefined4 *DAT_00529be0;
extern undefined4 DAT_00529be4;
extern uint *DAT_00529be8;
extern undefined4 *DAT_00529bec;
extern undefined4 DAT_00529bf0;

// USA 00529AC8 <- EU 00529AA0 (Ghidra, non-matching)
// GLOBAL DAT_00529bc4 uint *
// GLOBAL DAT_00529bc8 undefined4 *
// GLOBAL DAT_00529bcc undefined4
// GLOBAL DAT_00529bd0 uint *
// GLOBAL DAT_00529bd4 undefined4 *
// GLOBAL DAT_00529bd8 undefined4
// GLOBAL DAT_00529bdc uint *
// GLOBAL DAT_00529be0 undefined4 *
// GLOBAL DAT_00529be4 undefined4
// GLOBAL DAT_00529be8 uint *
// GLOBAL DAT_00529bec undefined4 *
// GLOBAL DAT_00529bf0 undefined4

undefined4 func_00529AC8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00529bc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529bc4), iVar1 != 0)) {
    *DAT_00529bc8 = DAT_00529bcc;
  }
  if (DAT_00529bc8 != param_2) {
    if (((*DAT_00529bd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529bd0), iVar1 != 0)) {
      *DAT_00529bd4 = DAT_00529bd8;
    }
    if (DAT_00529bd4 != param_2) {
      if (((*DAT_00529bdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529bdc), iVar1 != 0)) {
        *DAT_00529be0 = DAT_00529be4;
      }
      if (DAT_00529be0 != param_2) {
        if (((*DAT_00529be8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529be8), iVar1 != 0))
        {
          *DAT_00529bec = DAT_00529bf0;
        }
        if (DAT_00529bec != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

