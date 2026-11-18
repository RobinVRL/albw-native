#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00555a54;
extern undefined4 *DAT_00555a58;
extern undefined4 DAT_00555a5c;
extern uint *DAT_00555a60;
extern undefined4 *DAT_00555a64;
extern undefined4 DAT_00555a68;
extern uint *DAT_00555a6c;
extern undefined4 *DAT_00555a70;
extern undefined4 DAT_00555a74;

// USA 0055599C <- EU 00555974 (Ghidra, non-matching)
// GLOBAL DAT_00555a54 uint *
// GLOBAL DAT_00555a58 undefined4 *
// GLOBAL DAT_00555a5c undefined4
// GLOBAL DAT_00555a60 uint *
// GLOBAL DAT_00555a64 undefined4 *
// GLOBAL DAT_00555a68 undefined4
// GLOBAL DAT_00555a6c uint *
// GLOBAL DAT_00555a70 undefined4 *
// GLOBAL DAT_00555a74 undefined4

undefined4 func_0055599C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00555a54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555a54), iVar1 != 0)) {
    *DAT_00555a58 = DAT_00555a5c;
  }
  if (DAT_00555a58 != param_2) {
    if (((*DAT_00555a60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555a60), iVar1 != 0)) {
      *DAT_00555a64 = DAT_00555a68;
    }
    if (DAT_00555a64 != param_2) {
      if (((*DAT_00555a6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00555a6c), iVar1 != 0)) {
        *DAT_00555a70 = DAT_00555a74;
      }
      if (DAT_00555a70 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

