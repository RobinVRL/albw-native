#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00520a40;
extern undefined4 *DAT_00520a44;
extern undefined4 DAT_00520a48;
extern uint *DAT_00520a4c;
extern undefined4 *DAT_00520a50;
extern undefined4 DAT_00520a54;
extern uint *DAT_00520a58;
extern undefined4 *DAT_00520a5c;
extern undefined4 DAT_00520a60;

// USA 00520988 <- EU 00520960 (Ghidra, non-matching)
// GLOBAL DAT_00520a40 uint *
// GLOBAL DAT_00520a44 undefined4 *
// GLOBAL DAT_00520a48 undefined4
// GLOBAL DAT_00520a4c uint *
// GLOBAL DAT_00520a50 undefined4 *
// GLOBAL DAT_00520a54 undefined4
// GLOBAL DAT_00520a58 uint *
// GLOBAL DAT_00520a5c undefined4 *
// GLOBAL DAT_00520a60 undefined4

undefined4 func_00520988(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00520a40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520a40), iVar1 != 0)) {
    *DAT_00520a44 = DAT_00520a48;
  }
  if (DAT_00520a44 != param_2) {
    if (((*DAT_00520a4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520a4c), iVar1 != 0)) {
      *DAT_00520a50 = DAT_00520a54;
    }
    if (DAT_00520a50 != param_2) {
      if (((*DAT_00520a58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520a58), iVar1 != 0)) {
        *DAT_00520a5c = DAT_00520a60;
      }
      if (DAT_00520a5c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

