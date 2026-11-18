#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00529fb8;
extern undefined4 *DAT_00529fbc;
extern undefined4 DAT_00529fc0;
extern uint *DAT_00529fc4;
extern undefined4 *DAT_00529fc8;
extern undefined4 DAT_00529fcc;
extern uint *DAT_00529fd0;
extern undefined4 *DAT_00529fd4;
extern undefined4 DAT_00529fd8;
extern uint *DAT_00529fdc;
extern undefined4 *DAT_00529fe0;
extern undefined4 DAT_00529fe4;
extern uint *DAT_00529fe8;
extern undefined4 *DAT_00529fec;
extern undefined4 DAT_00529ff0;

// USA 00529E78 <- EU 00529E50 (Ghidra, non-matching)
// GLOBAL DAT_00529fb8 uint *
// GLOBAL DAT_00529fbc undefined4 *
// GLOBAL DAT_00529fc0 undefined4
// GLOBAL DAT_00529fc4 uint *
// GLOBAL DAT_00529fc8 undefined4 *
// GLOBAL DAT_00529fcc undefined4
// GLOBAL DAT_00529fd0 uint *
// GLOBAL DAT_00529fd4 undefined4 *
// GLOBAL DAT_00529fd8 undefined4
// GLOBAL DAT_00529fdc uint *
// GLOBAL DAT_00529fe0 undefined4 *
// GLOBAL DAT_00529fe4 undefined4
// GLOBAL DAT_00529fe8 uint *
// GLOBAL DAT_00529fec undefined4 *
// GLOBAL DAT_00529ff0 undefined4

undefined4 func_00529E78(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00529fb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529fb8), iVar1 != 0)) {
    *DAT_00529fbc = DAT_00529fc0;
  }
  if (DAT_00529fbc != param_2) {
    if (((*DAT_00529fc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529fc4), iVar1 != 0)) {
      *DAT_00529fc8 = DAT_00529fcc;
    }
    if (DAT_00529fc8 != param_2) {
      if (((*DAT_00529fd0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529fd0), iVar1 != 0)) {
        *DAT_00529fd4 = DAT_00529fd8;
      }
      if (DAT_00529fd4 != param_2) {
        if (((*DAT_00529fdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529fdc), iVar1 != 0))
        {
          *DAT_00529fe0 = DAT_00529fe4;
        }
        if (DAT_00529fe0 != param_2) {
          if (((*DAT_00529fe8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529fe8), iVar1 != 0)
             ) {
            *DAT_00529fec = DAT_00529ff0;
          }
          if (DAT_00529fec != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

