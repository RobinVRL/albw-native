#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00537010;
extern undefined4 *DAT_00537014;
extern undefined4 DAT_00537018;
extern uint *DAT_0053701c;
extern undefined4 *DAT_00537020;
extern undefined4 DAT_00537024;
extern uint *DAT_00537028;
extern undefined4 *DAT_0053702c;
extern undefined4 DAT_00537030;
extern uint *DAT_00537034;
extern undefined4 *DAT_00537038;
extern undefined4 DAT_0053703c;

// USA 00536F14 <- EU 00536EEC (Ghidra, non-matching)
// GLOBAL DAT_00537010 uint *
// GLOBAL DAT_00537014 undefined4 *
// GLOBAL DAT_00537018 undefined4
// GLOBAL DAT_0053701c uint *
// GLOBAL DAT_00537020 undefined4 *
// GLOBAL DAT_00537024 undefined4
// GLOBAL DAT_00537028 uint *
// GLOBAL DAT_0053702c undefined4 *
// GLOBAL DAT_00537030 undefined4
// GLOBAL DAT_00537034 uint *
// GLOBAL DAT_00537038 undefined4 *
// GLOBAL DAT_0053703c undefined4

undefined4 func_00536F14(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00537010 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537010), iVar1 != 0)) {
    *DAT_00537014 = DAT_00537018;
  }
  if (DAT_00537014 != param_2) {
    if (((*DAT_0053701c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053701c), iVar1 != 0)) {
      *DAT_00537020 = DAT_00537024;
    }
    if (DAT_00537020 != param_2) {
      if (((*DAT_00537028 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537028), iVar1 != 0)) {
        *DAT_0053702c = DAT_00537030;
      }
      if (DAT_0053702c != param_2) {
        if (((*DAT_00537034 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537034), iVar1 != 0))
        {
          *DAT_00537038 = DAT_0053703c;
        }
        if (DAT_00537038 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

