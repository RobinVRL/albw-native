#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00585b14;
extern undefined4 *DAT_00585b18;
extern undefined4 DAT_00585b1c;
extern uint *DAT_00585b20;
extern undefined4 *DAT_00585b24;
extern undefined4 DAT_00585b28;
extern uint *DAT_00585b2c;
extern undefined4 *DAT_00585b30;
extern undefined4 DAT_00585b34;
extern uint *DAT_00585b38;
extern undefined4 *DAT_00585b3c;
extern undefined4 DAT_00585b40;
extern uint *DAT_00585b44;
extern undefined4 *DAT_00585b48;
extern undefined4 DAT_00585b4c;

// USA 005859D4 <- EU 005859AC (Ghidra, non-matching)
// GLOBAL DAT_00585b14 uint *
// GLOBAL DAT_00585b18 undefined4 *
// GLOBAL DAT_00585b1c undefined4
// GLOBAL DAT_00585b20 uint *
// GLOBAL DAT_00585b24 undefined4 *
// GLOBAL DAT_00585b28 undefined4
// GLOBAL DAT_00585b2c uint *
// GLOBAL DAT_00585b30 undefined4 *
// GLOBAL DAT_00585b34 undefined4
// GLOBAL DAT_00585b38 uint *
// GLOBAL DAT_00585b3c undefined4 *
// GLOBAL DAT_00585b40 undefined4
// GLOBAL DAT_00585b44 uint *
// GLOBAL DAT_00585b48 undefined4 *
// GLOBAL DAT_00585b4c undefined4

undefined4 func_005859D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00585b14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585b14), iVar1 != 0)) {
    *DAT_00585b18 = DAT_00585b1c;
  }
  if (DAT_00585b18 != param_2) {
    if (((*DAT_00585b20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585b20), iVar1 != 0)) {
      *DAT_00585b24 = DAT_00585b28;
    }
    if (DAT_00585b24 != param_2) {
      if (((*DAT_00585b2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585b2c), iVar1 != 0)) {
        *DAT_00585b30 = DAT_00585b34;
      }
      if (DAT_00585b30 != param_2) {
        if (((*DAT_00585b38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585b38), iVar1 != 0))
        {
          *DAT_00585b3c = DAT_00585b40;
        }
        if (DAT_00585b3c != param_2) {
          if (((*DAT_00585b44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00585b44), iVar1 != 0)
             ) {
            *DAT_00585b48 = DAT_00585b4c;
          }
          if (DAT_00585b48 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

