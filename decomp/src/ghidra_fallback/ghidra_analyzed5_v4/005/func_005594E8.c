#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005595a0;
extern undefined4 *DAT_005595a4;
extern undefined4 DAT_005595a8;
extern uint *DAT_005595ac;
extern undefined4 *DAT_005595b0;
extern undefined4 DAT_005595b4;
extern uint *DAT_005595b8;
extern undefined4 *DAT_005595bc;
extern undefined4 DAT_005595c0;

// USA 005594E8 <- EU 005594C0 (Ghidra, non-matching)
// GLOBAL DAT_005595a0 uint *
// GLOBAL DAT_005595a4 undefined4 *
// GLOBAL DAT_005595a8 undefined4
// GLOBAL DAT_005595ac uint *
// GLOBAL DAT_005595b0 undefined4 *
// GLOBAL DAT_005595b4 undefined4
// GLOBAL DAT_005595b8 uint *
// GLOBAL DAT_005595bc undefined4 *
// GLOBAL DAT_005595c0 undefined4

undefined4 func_005594E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005595a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005595a0), iVar1 != 0)) {
    *DAT_005595a4 = DAT_005595a8;
  }
  if (DAT_005595a4 != param_2) {
    if (((*DAT_005595ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005595ac), iVar1 != 0)) {
      *DAT_005595b0 = DAT_005595b4;
    }
    if (DAT_005595b0 != param_2) {
      if (((*DAT_005595b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005595b8), iVar1 != 0)) {
        *DAT_005595bc = DAT_005595c0;
      }
      if (DAT_005595bc != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

