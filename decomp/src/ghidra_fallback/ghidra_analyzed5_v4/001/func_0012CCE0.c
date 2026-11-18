#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0012ce04;
extern undefined4 *DAT_0012ce08;
extern undefined4 DAT_0012ce0c;
extern uint *DAT_0012ce10;
extern undefined4 *DAT_0012ce14;
extern undefined4 DAT_0012ce18;
extern uint *DAT_0012ce1c;
extern undefined4 *DAT_0012ce20;
extern undefined4 DAT_0012ce24;
extern uint *DAT_0012ce28;
extern undefined4 *DAT_0012ce2c;
extern undefined4 DAT_0012ce30;

// USA 0012CCE0 <- EU 0012CCE0 (Ghidra, non-matching)
// GLOBAL DAT_0012ce04 uint *
// GLOBAL DAT_0012ce08 undefined4 *
// GLOBAL DAT_0012ce0c undefined4
// GLOBAL DAT_0012ce10 uint *
// GLOBAL DAT_0012ce14 undefined4 *
// GLOBAL DAT_0012ce18 undefined4
// GLOBAL DAT_0012ce1c uint *
// GLOBAL DAT_0012ce20 undefined4 *
// GLOBAL DAT_0012ce24 undefined4
// GLOBAL DAT_0012ce28 uint *
// GLOBAL DAT_0012ce2c undefined4 *
// GLOBAL DAT_0012ce30 undefined4

undefined4 func_0012CCE0(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0012ce04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0012ce04), iVar1 != 0)) {
    *DAT_0012ce08 = DAT_0012ce0c;
  }
  if (DAT_0012ce08 != param_1) {
    if (((*DAT_0012ce10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0012ce10), iVar1 != 0)) {
      *DAT_0012ce14 = DAT_0012ce18;
    }
    if (DAT_0012ce14 != param_1) {
      if (((*DAT_0012ce1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0012ce1c), iVar1 != 0)) {
        *DAT_0012ce20 = DAT_0012ce24;
      }
      if (DAT_0012ce20 != param_1) {
        if (((*DAT_0012ce28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0012ce28), iVar1 != 0))
        {
          *DAT_0012ce2c = DAT_0012ce30;
        }
        if (DAT_0012ce2c != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

