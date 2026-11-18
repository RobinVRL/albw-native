#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00552118;
extern undefined4 *DAT_0055211c;
extern undefined4 DAT_00552120;
extern uint *DAT_00552124;
extern undefined4 *DAT_00552128;
extern undefined4 DAT_0055212c;
extern uint *DAT_00552130;
extern undefined4 *DAT_00552134;
extern undefined4 DAT_00552138;

// USA 00552060 <- EU 00552038 (Ghidra, non-matching)
// GLOBAL DAT_00552118 uint *
// GLOBAL DAT_0055211c undefined4 *
// GLOBAL DAT_00552120 undefined4
// GLOBAL DAT_00552124 uint *
// GLOBAL DAT_00552128 undefined4 *
// GLOBAL DAT_0055212c undefined4
// GLOBAL DAT_00552130 uint *
// GLOBAL DAT_00552134 undefined4 *
// GLOBAL DAT_00552138 undefined4

undefined4 func_00552060(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552118 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552118), iVar1 != 0)) {
    *DAT_0055211c = DAT_00552120;
  }
  if (DAT_0055211c != param_2) {
    if (((*DAT_00552124 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552124), iVar1 != 0)) {
      *DAT_00552128 = DAT_0055212c;
    }
    if (DAT_00552128 != param_2) {
      if (((*DAT_00552130 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552130), iVar1 != 0)) {
        *DAT_00552134 = DAT_00552138;
      }
      if (DAT_00552134 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

