#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057206c;
extern undefined4 *DAT_00572070;
extern undefined4 DAT_00572074;
extern uint *DAT_00572078;
extern undefined4 *DAT_0057207c;
extern undefined4 DAT_00572080;
extern uint *DAT_00572084;
extern undefined4 *DAT_00572088;
extern undefined4 DAT_0057208c;

// USA 00571FB4 <- EU 00571F8C (Ghidra, non-matching)
// GLOBAL DAT_0057206c uint *
// GLOBAL DAT_00572070 undefined4 *
// GLOBAL DAT_00572074 undefined4
// GLOBAL DAT_00572078 uint *
// GLOBAL DAT_0057207c undefined4 *
// GLOBAL DAT_00572080 undefined4
// GLOBAL DAT_00572084 uint *
// GLOBAL DAT_00572088 undefined4 *
// GLOBAL DAT_0057208c undefined4

undefined4 func_00571FB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057206c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057206c), iVar1 != 0)) {
    *DAT_00572070 = DAT_00572074;
  }
  if (DAT_00572070 != param_2) {
    if (((*DAT_00572078 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572078), iVar1 != 0)) {
      *DAT_0057207c = DAT_00572080;
    }
    if (DAT_0057207c != param_2) {
      if (((*DAT_00572084 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00572084), iVar1 != 0)) {
        *DAT_00572088 = DAT_0057208c;
      }
      if (DAT_00572088 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

