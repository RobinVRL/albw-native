#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055c1d0;
extern undefined4 *DAT_0055c1d4;
extern undefined4 DAT_0055c1d8;
extern uint *DAT_0055c1dc;
extern undefined4 *DAT_0055c1e0;
extern undefined4 DAT_0055c1e4;
extern uint *DAT_0055c1e8;
extern undefined4 *DAT_0055c1ec;
extern undefined4 DAT_0055c1f0;

// USA 0055C118 <- EU 0055C0F0 (Ghidra, non-matching)
// GLOBAL DAT_0055c1d0 uint *
// GLOBAL DAT_0055c1d4 undefined4 *
// GLOBAL DAT_0055c1d8 undefined4
// GLOBAL DAT_0055c1dc uint *
// GLOBAL DAT_0055c1e0 undefined4 *
// GLOBAL DAT_0055c1e4 undefined4
// GLOBAL DAT_0055c1e8 uint *
// GLOBAL DAT_0055c1ec undefined4 *
// GLOBAL DAT_0055c1f0 undefined4

undefined4 func_0055C118(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055c1d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c1d0), iVar1 != 0)) {
    *DAT_0055c1d4 = DAT_0055c1d8;
  }
  if (DAT_0055c1d4 != param_2) {
    if (((*DAT_0055c1dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c1dc), iVar1 != 0)) {
      *DAT_0055c1e0 = DAT_0055c1e4;
    }
    if (DAT_0055c1e0 != param_2) {
      if (((*DAT_0055c1e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c1e8), iVar1 != 0)) {
        *DAT_0055c1ec = DAT_0055c1f0;
      }
      if (DAT_0055c1ec != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

