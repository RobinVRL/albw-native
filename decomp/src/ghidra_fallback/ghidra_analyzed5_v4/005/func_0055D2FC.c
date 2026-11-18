#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055d370;
extern undefined4 *DAT_0055d374;
extern undefined4 DAT_0055d378;
extern uint *DAT_0055d37c;
extern undefined4 *DAT_0055d380;
extern undefined4 DAT_0055d384;

// USA 0055D2FC <- EU 0055D2D4 (Ghidra, non-matching)
// GLOBAL DAT_0055d370 uint *
// GLOBAL DAT_0055d374 undefined4 *
// GLOBAL DAT_0055d378 undefined4
// GLOBAL DAT_0055d37c uint *
// GLOBAL DAT_0055d380 undefined4 *
// GLOBAL DAT_0055d384 undefined4

undefined4 func_0055D2FC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055d370 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d370), iVar1 != 0)) {
    *DAT_0055d374 = DAT_0055d378;
  }
  if (DAT_0055d374 != param_2) {
    if (((*DAT_0055d37c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055d37c), iVar1 != 0)) {
      *DAT_0055d380 = DAT_0055d384;
    }
    if (DAT_0055d380 != param_2) {
      return 0;
    }
  }
  return 1;
}

