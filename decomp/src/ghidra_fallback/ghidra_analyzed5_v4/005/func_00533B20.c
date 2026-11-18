#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00533c1c;
extern undefined4 *DAT_00533c20;
extern undefined4 DAT_00533c24;
extern uint *DAT_00533c28;
extern undefined4 *DAT_00533c2c;
extern undefined4 DAT_00533c30;
extern uint *DAT_00533c34;
extern undefined4 *DAT_00533c38;
extern undefined4 DAT_00533c3c;
extern uint *DAT_00533c40;
extern undefined4 *DAT_00533c44;
extern undefined4 DAT_00533c48;

// USA 00533B20 <- EU 00533AF8 (Ghidra, non-matching)
// GLOBAL DAT_00533c1c uint *
// GLOBAL DAT_00533c20 undefined4 *
// GLOBAL DAT_00533c24 undefined4
// GLOBAL DAT_00533c28 uint *
// GLOBAL DAT_00533c2c undefined4 *
// GLOBAL DAT_00533c30 undefined4
// GLOBAL DAT_00533c34 uint *
// GLOBAL DAT_00533c38 undefined4 *
// GLOBAL DAT_00533c3c undefined4
// GLOBAL DAT_00533c40 uint *
// GLOBAL DAT_00533c44 undefined4 *
// GLOBAL DAT_00533c48 undefined4

undefined4 func_00533B20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00533c1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533c1c), iVar1 != 0)) {
    *DAT_00533c20 = DAT_00533c24;
  }
  if (DAT_00533c20 != param_2) {
    if (((*DAT_00533c28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533c28), iVar1 != 0)) {
      *DAT_00533c2c = DAT_00533c30;
    }
    if (DAT_00533c2c != param_2) {
      if (((*DAT_00533c34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533c34), iVar1 != 0)) {
        *DAT_00533c38 = DAT_00533c3c;
      }
      if (DAT_00533c38 != param_2) {
        if (((*DAT_00533c40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00533c40), iVar1 != 0))
        {
          *DAT_00533c44 = DAT_00533c48;
        }
        if (DAT_00533c44 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

