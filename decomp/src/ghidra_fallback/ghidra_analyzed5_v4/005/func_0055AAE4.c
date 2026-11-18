#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055abe0;
extern undefined4 *DAT_0055abe4;
extern undefined4 DAT_0055abe8;
extern uint *DAT_0055abec;
extern undefined4 *DAT_0055abf0;
extern undefined4 DAT_0055abf4;
extern uint *DAT_0055abf8;
extern undefined4 *DAT_0055abfc;
extern undefined4 DAT_0055ac00;
extern uint *DAT_0055ac04;
extern undefined4 *DAT_0055ac08;
extern undefined4 DAT_0055ac0c;

// USA 0055AAE4 <- EU 0055AABC (Ghidra, non-matching)
// GLOBAL DAT_0055abe0 uint *
// GLOBAL DAT_0055abe4 undefined4 *
// GLOBAL DAT_0055abe8 undefined4
// GLOBAL DAT_0055abec uint *
// GLOBAL DAT_0055abf0 undefined4 *
// GLOBAL DAT_0055abf4 undefined4
// GLOBAL DAT_0055abf8 uint *
// GLOBAL DAT_0055abfc undefined4 *
// GLOBAL DAT_0055ac00 undefined4
// GLOBAL DAT_0055ac04 uint *
// GLOBAL DAT_0055ac08 undefined4 *
// GLOBAL DAT_0055ac0c undefined4

undefined4 func_0055AAE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055abe0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055abe0), iVar1 != 0)) {
    *DAT_0055abe4 = DAT_0055abe8;
  }
  if (DAT_0055abe4 != param_2) {
    if (((*DAT_0055abec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055abec), iVar1 != 0)) {
      *DAT_0055abf0 = DAT_0055abf4;
    }
    if (DAT_0055abf0 != param_2) {
      if (((*DAT_0055abf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055abf8), iVar1 != 0)) {
        *DAT_0055abfc = DAT_0055ac00;
      }
      if (DAT_0055abfc != param_2) {
        if (((*DAT_0055ac04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ac04), iVar1 != 0))
        {
          *DAT_0055ac08 = DAT_0055ac0c;
        }
        if (DAT_0055ac08 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

