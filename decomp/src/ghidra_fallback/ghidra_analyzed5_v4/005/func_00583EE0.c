#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00584020;
extern undefined4 *DAT_00584024;
extern undefined4 DAT_00584028;
extern uint *DAT_0058402c;
extern undefined4 *DAT_00584030;
extern undefined4 DAT_00584034;
extern uint *DAT_00584038;
extern undefined4 *DAT_0058403c;
extern undefined4 DAT_00584040;
extern uint *DAT_00584044;
extern undefined4 *DAT_00584048;
extern undefined4 DAT_0058404c;
extern uint *DAT_00584050;
extern undefined4 *DAT_00584054;
extern undefined4 DAT_00584058;

// USA 00583EE0 <- EU 00583EB8 (Ghidra, non-matching)
// GLOBAL DAT_00584020 uint *
// GLOBAL DAT_00584024 undefined4 *
// GLOBAL DAT_00584028 undefined4
// GLOBAL DAT_0058402c uint *
// GLOBAL DAT_00584030 undefined4 *
// GLOBAL DAT_00584034 undefined4
// GLOBAL DAT_00584038 uint *
// GLOBAL DAT_0058403c undefined4 *
// GLOBAL DAT_00584040 undefined4
// GLOBAL DAT_00584044 uint *
// GLOBAL DAT_00584048 undefined4 *
// GLOBAL DAT_0058404c undefined4
// GLOBAL DAT_00584050 uint *
// GLOBAL DAT_00584054 undefined4 *
// GLOBAL DAT_00584058 undefined4

undefined4 func_00583EE0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00584020 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584020), iVar1 != 0)) {
    *DAT_00584024 = DAT_00584028;
  }
  if (DAT_00584024 != param_2) {
    if (((*DAT_0058402c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058402c), iVar1 != 0)) {
      *DAT_00584030 = DAT_00584034;
    }
    if (DAT_00584030 != param_2) {
      if (((*DAT_00584038 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584038), iVar1 != 0)) {
        *DAT_0058403c = DAT_00584040;
      }
      if (DAT_0058403c != param_2) {
        if (((*DAT_00584044 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584044), iVar1 != 0))
        {
          *DAT_00584048 = DAT_0058404c;
        }
        if (DAT_00584048 != param_2) {
          if (((*DAT_00584050 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584050), iVar1 != 0)
             ) {
            *DAT_00584054 = DAT_00584058;
          }
          if (DAT_00584054 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

