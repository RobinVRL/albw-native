#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057ce00;
extern undefined4 *DAT_0057ce04;
extern undefined4 DAT_0057ce08;
extern uint *DAT_0057ce0c;
extern undefined4 *DAT_0057ce10;
extern undefined4 DAT_0057ce14;
extern uint *DAT_0057ce18;
extern undefined4 *DAT_0057ce1c;
extern undefined4 DAT_0057ce20;
extern uint *DAT_0057ce24;
extern undefined4 *DAT_0057ce28;
extern undefined4 DAT_0057ce2c;
extern uint *DAT_0057ce30;
extern undefined4 *DAT_0057ce34;
extern undefined4 DAT_0057ce38;

// USA 0057CCC0 <- EU 0057CC98 (Ghidra, non-matching)
// GLOBAL DAT_0057ce00 uint *
// GLOBAL DAT_0057ce04 undefined4 *
// GLOBAL DAT_0057ce08 undefined4
// GLOBAL DAT_0057ce0c uint *
// GLOBAL DAT_0057ce10 undefined4 *
// GLOBAL DAT_0057ce14 undefined4
// GLOBAL DAT_0057ce18 uint *
// GLOBAL DAT_0057ce1c undefined4 *
// GLOBAL DAT_0057ce20 undefined4
// GLOBAL DAT_0057ce24 uint *
// GLOBAL DAT_0057ce28 undefined4 *
// GLOBAL DAT_0057ce2c undefined4
// GLOBAL DAT_0057ce30 uint *
// GLOBAL DAT_0057ce34 undefined4 *
// GLOBAL DAT_0057ce38 undefined4

undefined4 func_0057CCC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057ce00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ce00), iVar1 != 0)) {
    *DAT_0057ce04 = DAT_0057ce08;
  }
  if (DAT_0057ce04 != param_2) {
    if (((*DAT_0057ce0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ce0c), iVar1 != 0)) {
      *DAT_0057ce10 = DAT_0057ce14;
    }
    if (DAT_0057ce10 != param_2) {
      if (((*DAT_0057ce18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ce18), iVar1 != 0)) {
        *DAT_0057ce1c = DAT_0057ce20;
      }
      if (DAT_0057ce1c != param_2) {
        if (((*DAT_0057ce24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ce24), iVar1 != 0))
        {
          *DAT_0057ce28 = DAT_0057ce2c;
        }
        if (DAT_0057ce28 != param_2) {
          if (((*DAT_0057ce30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ce30), iVar1 != 0)
             ) {
            *DAT_0057ce34 = DAT_0057ce38;
          }
          if (DAT_0057ce34 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

