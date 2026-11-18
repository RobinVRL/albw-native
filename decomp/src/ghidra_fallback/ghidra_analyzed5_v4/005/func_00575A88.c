#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00575bc8;
extern undefined4 *DAT_00575bcc;
extern undefined4 DAT_00575bd0;
extern uint *DAT_00575bd4;
extern undefined4 *DAT_00575bd8;
extern undefined4 DAT_00575bdc;
extern uint *DAT_00575be0;
extern undefined4 *DAT_00575be4;
extern undefined4 DAT_00575be8;
extern uint *DAT_00575bec;
extern undefined4 *DAT_00575bf0;
extern undefined4 DAT_00575bf4;
extern uint *DAT_00575bf8;
extern undefined4 *DAT_00575bfc;
extern undefined4 DAT_00575c00;

// USA 00575A88 <- EU 00575A60 (Ghidra, non-matching)
// GLOBAL DAT_00575bc8 uint *
// GLOBAL DAT_00575bcc undefined4 *
// GLOBAL DAT_00575bd0 undefined4
// GLOBAL DAT_00575bd4 uint *
// GLOBAL DAT_00575bd8 undefined4 *
// GLOBAL DAT_00575bdc undefined4
// GLOBAL DAT_00575be0 uint *
// GLOBAL DAT_00575be4 undefined4 *
// GLOBAL DAT_00575be8 undefined4
// GLOBAL DAT_00575bec uint *
// GLOBAL DAT_00575bf0 undefined4 *
// GLOBAL DAT_00575bf4 undefined4
// GLOBAL DAT_00575bf8 uint *
// GLOBAL DAT_00575bfc undefined4 *
// GLOBAL DAT_00575c00 undefined4

undefined4 func_00575A88(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00575bc8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575bc8), iVar1 != 0)) {
    *DAT_00575bcc = DAT_00575bd0;
  }
  if (DAT_00575bcc != param_2) {
    if (((*DAT_00575bd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575bd4), iVar1 != 0)) {
      *DAT_00575bd8 = DAT_00575bdc;
    }
    if (DAT_00575bd8 != param_2) {
      if (((*DAT_00575be0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575be0), iVar1 != 0)) {
        *DAT_00575be4 = DAT_00575be8;
      }
      if (DAT_00575be4 != param_2) {
        if (((*DAT_00575bec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575bec), iVar1 != 0))
        {
          *DAT_00575bf0 = DAT_00575bf4;
        }
        if (DAT_00575bf0 != param_2) {
          if (((*DAT_00575bf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575bf8), iVar1 != 0)
             ) {
            *DAT_00575bfc = DAT_00575c00;
          }
          if (DAT_00575bfc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

