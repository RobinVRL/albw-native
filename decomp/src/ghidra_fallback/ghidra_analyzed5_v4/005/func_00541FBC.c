#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00542074;
extern undefined4 *DAT_00542078;
extern undefined4 DAT_0054207c;
extern uint *DAT_00542080;
extern undefined4 *DAT_00542084;
extern undefined4 DAT_00542088;
extern uint *DAT_0054208c;
extern undefined4 *DAT_00542090;
extern undefined4 DAT_00542094;

// USA 00541FBC <- EU 00541F94 (Ghidra, non-matching)
// GLOBAL DAT_00542074 uint *
// GLOBAL DAT_00542078 undefined4 *
// GLOBAL DAT_0054207c undefined4
// GLOBAL DAT_00542080 uint *
// GLOBAL DAT_00542084 undefined4 *
// GLOBAL DAT_00542088 undefined4
// GLOBAL DAT_0054208c uint *
// GLOBAL DAT_00542090 undefined4 *
// GLOBAL DAT_00542094 undefined4

undefined4 func_00541FBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00542074 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542074), iVar1 != 0)) {
    *DAT_00542078 = DAT_0054207c;
  }
  if (DAT_00542078 != param_2) {
    if (((*DAT_00542080 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542080), iVar1 != 0)) {
      *DAT_00542084 = DAT_00542088;
    }
    if (DAT_00542084 != param_2) {
      if (((*DAT_0054208c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054208c), iVar1 != 0)) {
        *DAT_00542090 = DAT_00542094;
      }
      if (DAT_00542090 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

