#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00529004;
extern undefined4 *DAT_00529008;
extern undefined4 DAT_0052900c;
extern uint *DAT_00529010;
extern undefined4 *DAT_00529014;
extern undefined4 DAT_00529018;
extern uint *DAT_0052901c;
extern undefined4 *DAT_00529020;
extern undefined4 DAT_00529024;
extern uint *DAT_00529028;
extern undefined4 *DAT_0052902c;
extern undefined4 DAT_00529030;
extern uint *DAT_00529034;
extern undefined4 *DAT_00529038;
extern undefined4 DAT_0052903c;

// USA 00528EC4 <- EU 00528E9C (Ghidra, non-matching)
// GLOBAL DAT_00529004 uint *
// GLOBAL DAT_00529008 undefined4 *
// GLOBAL DAT_0052900c undefined4
// GLOBAL DAT_00529010 uint *
// GLOBAL DAT_00529014 undefined4 *
// GLOBAL DAT_00529018 undefined4
// GLOBAL DAT_0052901c uint *
// GLOBAL DAT_00529020 undefined4 *
// GLOBAL DAT_00529024 undefined4
// GLOBAL DAT_00529028 uint *
// GLOBAL DAT_0052902c undefined4 *
// GLOBAL DAT_00529030 undefined4
// GLOBAL DAT_00529034 uint *
// GLOBAL DAT_00529038 undefined4 *
// GLOBAL DAT_0052903c undefined4

undefined4 func_00528EC4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00529004 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529004), iVar1 != 0)) {
    *DAT_00529008 = DAT_0052900c;
  }
  if (DAT_00529008 != param_2) {
    if (((*DAT_00529010 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529010), iVar1 != 0)) {
      *DAT_00529014 = DAT_00529018;
    }
    if (DAT_00529014 != param_2) {
      if (((*DAT_0052901c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052901c), iVar1 != 0)) {
        *DAT_00529020 = DAT_00529024;
      }
      if (DAT_00529020 != param_2) {
        if (((*DAT_00529028 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529028), iVar1 != 0))
        {
          *DAT_0052902c = DAT_00529030;
        }
        if (DAT_0052902c != param_2) {
          if (((*DAT_00529034 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529034), iVar1 != 0)
             ) {
            *DAT_00529038 = DAT_0052903c;
          }
          if (DAT_00529038 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

