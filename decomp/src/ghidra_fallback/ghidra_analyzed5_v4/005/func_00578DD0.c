#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00578f10;
extern undefined4 *DAT_00578f14;
extern undefined4 DAT_00578f18;
extern uint *DAT_00578f1c;
extern undefined4 *DAT_00578f20;
extern undefined4 DAT_00578f24;
extern uint *DAT_00578f28;
extern undefined4 *DAT_00578f2c;
extern undefined4 DAT_00578f30;
extern uint *DAT_00578f34;
extern undefined4 *DAT_00578f38;
extern undefined4 DAT_00578f3c;
extern uint *DAT_00578f40;
extern undefined4 *DAT_00578f44;
extern undefined4 DAT_00578f48;

// USA 00578DD0 <- EU 00578DA8 (Ghidra, non-matching)
// GLOBAL DAT_00578f10 uint *
// GLOBAL DAT_00578f14 undefined4 *
// GLOBAL DAT_00578f18 undefined4
// GLOBAL DAT_00578f1c uint *
// GLOBAL DAT_00578f20 undefined4 *
// GLOBAL DAT_00578f24 undefined4
// GLOBAL DAT_00578f28 uint *
// GLOBAL DAT_00578f2c undefined4 *
// GLOBAL DAT_00578f30 undefined4
// GLOBAL DAT_00578f34 uint *
// GLOBAL DAT_00578f38 undefined4 *
// GLOBAL DAT_00578f3c undefined4
// GLOBAL DAT_00578f40 uint *
// GLOBAL DAT_00578f44 undefined4 *
// GLOBAL DAT_00578f48 undefined4

undefined4 func_00578DD0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00578f10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578f10), iVar1 != 0)) {
    *DAT_00578f14 = DAT_00578f18;
  }
  if (DAT_00578f14 != param_2) {
    if (((*DAT_00578f1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578f1c), iVar1 != 0)) {
      *DAT_00578f20 = DAT_00578f24;
    }
    if (DAT_00578f20 != param_2) {
      if (((*DAT_00578f28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578f28), iVar1 != 0)) {
        *DAT_00578f2c = DAT_00578f30;
      }
      if (DAT_00578f2c != param_2) {
        if (((*DAT_00578f34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578f34), iVar1 != 0))
        {
          *DAT_00578f38 = DAT_00578f3c;
        }
        if (DAT_00578f38 != param_2) {
          if (((*DAT_00578f40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578f40), iVar1 != 0)
             ) {
            *DAT_00578f44 = DAT_00578f48;
          }
          if (DAT_00578f44 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

