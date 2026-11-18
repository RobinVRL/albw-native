#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058b044;
extern undefined4 *DAT_0058b048;
extern undefined4 DAT_0058b04c;
extern uint *DAT_0058b050;
extern undefined4 *DAT_0058b054;
extern undefined4 DAT_0058b058;
extern uint *DAT_0058b05c;
extern undefined4 *DAT_0058b060;
extern undefined4 DAT_0058b064;
extern uint *DAT_0058b068;
extern undefined4 *DAT_0058b06c;
extern undefined4 DAT_0058b070;

// USA 0058AF48 <- EU 0058AF20 (Ghidra, non-matching)
// GLOBAL DAT_0058b044 uint *
// GLOBAL DAT_0058b048 undefined4 *
// GLOBAL DAT_0058b04c undefined4
// GLOBAL DAT_0058b050 uint *
// GLOBAL DAT_0058b054 undefined4 *
// GLOBAL DAT_0058b058 undefined4
// GLOBAL DAT_0058b05c uint *
// GLOBAL DAT_0058b060 undefined4 *
// GLOBAL DAT_0058b064 undefined4
// GLOBAL DAT_0058b068 uint *
// GLOBAL DAT_0058b06c undefined4 *
// GLOBAL DAT_0058b070 undefined4

undefined4 func_0058AF48(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b044 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b044), iVar1 != 0)) {
    *DAT_0058b048 = DAT_0058b04c;
  }
  if (DAT_0058b048 != param_2) {
    if (((*DAT_0058b050 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b050), iVar1 != 0)) {
      *DAT_0058b054 = DAT_0058b058;
    }
    if (DAT_0058b054 != param_2) {
      if (((*DAT_0058b05c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b05c), iVar1 != 0)) {
        *DAT_0058b060 = DAT_0058b064;
      }
      if (DAT_0058b060 != param_2) {
        if (((*DAT_0058b068 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b068), iVar1 != 0))
        {
          *DAT_0058b06c = DAT_0058b070;
        }
        if (DAT_0058b06c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

