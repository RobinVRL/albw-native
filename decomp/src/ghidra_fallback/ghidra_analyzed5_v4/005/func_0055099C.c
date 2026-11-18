#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00550a54;
extern undefined4 *DAT_00550a58;
extern undefined4 DAT_00550a5c;
extern uint *DAT_00550a60;
extern undefined4 *DAT_00550a64;
extern undefined4 DAT_00550a68;
extern uint *DAT_00550a6c;
extern undefined4 *DAT_00550a70;
extern undefined4 DAT_00550a74;

// USA 0055099C <- EU 00550974 (Ghidra, non-matching)
// GLOBAL DAT_00550a54 uint *
// GLOBAL DAT_00550a58 undefined4 *
// GLOBAL DAT_00550a5c undefined4
// GLOBAL DAT_00550a60 uint *
// GLOBAL DAT_00550a64 undefined4 *
// GLOBAL DAT_00550a68 undefined4
// GLOBAL DAT_00550a6c uint *
// GLOBAL DAT_00550a70 undefined4 *
// GLOBAL DAT_00550a74 undefined4

undefined4 func_0055099C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00550a54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550a54), iVar1 != 0)) {
    *DAT_00550a58 = DAT_00550a5c;
  }
  if (DAT_00550a58 != param_2) {
    if (((*DAT_00550a60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550a60), iVar1 != 0)) {
      *DAT_00550a64 = DAT_00550a68;
    }
    if (DAT_00550a64 != param_2) {
      if (((*DAT_00550a6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550a6c), iVar1 != 0)) {
        *DAT_00550a70 = DAT_00550a74;
      }
      if (DAT_00550a70 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

