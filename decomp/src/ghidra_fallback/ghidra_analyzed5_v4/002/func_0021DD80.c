#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0021dea4;
extern undefined4 *DAT_0021dea8;
extern undefined4 DAT_0021deac;
extern uint *DAT_0021deb0;
extern undefined4 *DAT_0021deb4;
extern undefined4 DAT_0021deb8;
extern uint *DAT_0021debc;
extern undefined4 *DAT_0021dec0;
extern undefined4 DAT_0021dec4;
extern uint *DAT_0021dec8;
extern undefined4 *DAT_0021decc;
extern undefined4 DAT_0021ded0;

// USA 0021DD80 <- EU 0021DD80 (Ghidra, non-matching)
// GLOBAL DAT_0021dea4 uint *
// GLOBAL DAT_0021dea8 undefined4 *
// GLOBAL DAT_0021deac undefined4
// GLOBAL DAT_0021deb0 uint *
// GLOBAL DAT_0021deb4 undefined4 *
// GLOBAL DAT_0021deb8 undefined4
// GLOBAL DAT_0021debc uint *
// GLOBAL DAT_0021dec0 undefined4 *
// GLOBAL DAT_0021dec4 undefined4
// GLOBAL DAT_0021dec8 uint *
// GLOBAL DAT_0021decc undefined4 *
// GLOBAL DAT_0021ded0 undefined4

undefined4 func_0021DD80(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_0021dea4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0021dea4), iVar1 != 0)) {
    *DAT_0021dea8 = DAT_0021deac;
  }
  if (DAT_0021dea8 != param_1) {
    if (((*DAT_0021deb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0021deb0), iVar1 != 0)) {
      *DAT_0021deb4 = DAT_0021deb8;
    }
    if (DAT_0021deb4 != param_1) {
      if (((*DAT_0021debc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0021debc), iVar1 != 0)) {
        *DAT_0021dec0 = DAT_0021dec4;
      }
      if (DAT_0021dec0 != param_1) {
        if (((*DAT_0021dec8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0021dec8), iVar1 != 0))
        {
          *DAT_0021decc = DAT_0021ded0;
        }
        if (DAT_0021decc != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

