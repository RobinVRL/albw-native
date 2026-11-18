#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052093c;
extern undefined4 *DAT_00520940;
extern undefined4 DAT_00520944;
extern uint *DAT_00520948;
extern undefined4 *DAT_0052094c;
extern undefined4 DAT_00520950;
extern uint *DAT_00520954;
extern undefined4 *DAT_00520958;
extern undefined4 DAT_0052095c;

// USA 00520884 <- EU 0052085C (Ghidra, non-matching)
// GLOBAL DAT_0052093c uint *
// GLOBAL DAT_00520940 undefined4 *
// GLOBAL DAT_00520944 undefined4
// GLOBAL DAT_00520948 uint *
// GLOBAL DAT_0052094c undefined4 *
// GLOBAL DAT_00520950 undefined4
// GLOBAL DAT_00520954 uint *
// GLOBAL DAT_00520958 undefined4 *
// GLOBAL DAT_0052095c undefined4

undefined4 func_00520884(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052093c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052093c), iVar1 != 0)) {
    *DAT_00520940 = DAT_00520944;
  }
  if (DAT_00520940 != param_2) {
    if (((*DAT_00520948 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520948), iVar1 != 0)) {
      *DAT_0052094c = DAT_00520950;
    }
    if (DAT_0052094c != param_2) {
      if (((*DAT_00520954 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520954), iVar1 != 0)) {
        *DAT_00520958 = DAT_0052095c;
      }
      if (DAT_00520958 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

