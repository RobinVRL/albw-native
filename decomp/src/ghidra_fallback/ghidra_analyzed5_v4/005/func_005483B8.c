#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005484b4;
extern undefined4 *DAT_005484b8;
extern undefined4 DAT_005484bc;
extern uint *DAT_005484c0;
extern undefined4 *DAT_005484c4;
extern undefined4 DAT_005484c8;
extern uint *DAT_005484cc;
extern undefined4 *DAT_005484d0;
extern undefined4 DAT_005484d4;
extern uint *DAT_005484d8;
extern undefined4 *DAT_005484dc;
extern undefined4 DAT_005484e0;

// USA 005483B8 <- EU 00548390 (Ghidra, non-matching)
// GLOBAL DAT_005484b4 uint *
// GLOBAL DAT_005484b8 undefined4 *
// GLOBAL DAT_005484bc undefined4
// GLOBAL DAT_005484c0 uint *
// GLOBAL DAT_005484c4 undefined4 *
// GLOBAL DAT_005484c8 undefined4
// GLOBAL DAT_005484cc uint *
// GLOBAL DAT_005484d0 undefined4 *
// GLOBAL DAT_005484d4 undefined4
// GLOBAL DAT_005484d8 uint *
// GLOBAL DAT_005484dc undefined4 *
// GLOBAL DAT_005484e0 undefined4

undefined4 func_005483B8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005484b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005484b4), iVar1 != 0)) {
    *DAT_005484b8 = DAT_005484bc;
  }
  if (DAT_005484b8 != param_2) {
    if (((*DAT_005484c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005484c0), iVar1 != 0)) {
      *DAT_005484c4 = DAT_005484c8;
    }
    if (DAT_005484c4 != param_2) {
      if (((*DAT_005484cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005484cc), iVar1 != 0)) {
        *DAT_005484d0 = DAT_005484d4;
      }
      if (DAT_005484d0 != param_2) {
        if (((*DAT_005484d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005484d8), iVar1 != 0))
        {
          *DAT_005484dc = DAT_005484e0;
        }
        if (DAT_005484dc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

