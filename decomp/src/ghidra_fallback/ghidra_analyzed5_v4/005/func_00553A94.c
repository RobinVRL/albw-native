#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00553b4c;
extern undefined4 *DAT_00553b50;
extern undefined4 DAT_00553b54;
extern uint *DAT_00553b58;
extern undefined4 *DAT_00553b5c;
extern undefined4 DAT_00553b60;
extern uint *DAT_00553b64;
extern undefined4 *DAT_00553b68;
extern undefined4 DAT_00553b6c;

// USA 00553A94 <- EU 00553A6C (Ghidra, non-matching)
// GLOBAL DAT_00553b4c uint *
// GLOBAL DAT_00553b50 undefined4 *
// GLOBAL DAT_00553b54 undefined4
// GLOBAL DAT_00553b58 uint *
// GLOBAL DAT_00553b5c undefined4 *
// GLOBAL DAT_00553b60 undefined4
// GLOBAL DAT_00553b64 uint *
// GLOBAL DAT_00553b68 undefined4 *
// GLOBAL DAT_00553b6c undefined4

undefined4 func_00553A94(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00553b4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553b4c), iVar1 != 0)) {
    *DAT_00553b50 = DAT_00553b54;
  }
  if (DAT_00553b50 != param_2) {
    if (((*DAT_00553b58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553b58), iVar1 != 0)) {
      *DAT_00553b5c = DAT_00553b60;
    }
    if (DAT_00553b5c != param_2) {
      if (((*DAT_00553b64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00553b64), iVar1 != 0)) {
        *DAT_00553b68 = DAT_00553b6c;
      }
      if (DAT_00553b68 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

