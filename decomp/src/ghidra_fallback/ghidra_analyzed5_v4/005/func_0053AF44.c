#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053b040;
extern undefined4 *DAT_0053b044;
extern undefined4 DAT_0053b048;
extern uint *DAT_0053b04c;
extern undefined4 *DAT_0053b050;
extern undefined4 DAT_0053b054;
extern uint *DAT_0053b058;
extern undefined4 *DAT_0053b05c;
extern undefined4 DAT_0053b060;
extern uint *DAT_0053b064;
extern undefined4 *DAT_0053b068;
extern undefined4 DAT_0053b06c;

// USA 0053AF44 <- EU 0053AF1C (Ghidra, non-matching)
// GLOBAL DAT_0053b040 uint *
// GLOBAL DAT_0053b044 undefined4 *
// GLOBAL DAT_0053b048 undefined4
// GLOBAL DAT_0053b04c uint *
// GLOBAL DAT_0053b050 undefined4 *
// GLOBAL DAT_0053b054 undefined4
// GLOBAL DAT_0053b058 uint *
// GLOBAL DAT_0053b05c undefined4 *
// GLOBAL DAT_0053b060 undefined4
// GLOBAL DAT_0053b064 uint *
// GLOBAL DAT_0053b068 undefined4 *
// GLOBAL DAT_0053b06c undefined4

undefined4 func_0053AF44(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053b040 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b040), iVar1 != 0)) {
    *DAT_0053b044 = DAT_0053b048;
  }
  if (DAT_0053b044 != param_2) {
    if (((*DAT_0053b04c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b04c), iVar1 != 0)) {
      *DAT_0053b050 = DAT_0053b054;
    }
    if (DAT_0053b050 != param_2) {
      if (((*DAT_0053b058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b058), iVar1 != 0)) {
        *DAT_0053b05c = DAT_0053b060;
      }
      if (DAT_0053b05c != param_2) {
        if (((*DAT_0053b064 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b064), iVar1 != 0))
        {
          *DAT_0053b068 = DAT_0053b06c;
        }
        if (DAT_0053b068 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

