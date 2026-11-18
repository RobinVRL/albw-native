#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068efa0;
extern undefined4 *DAT_0068efa4;
extern undefined4 DAT_0068efa8;
extern uint *DAT_0068efac;
extern undefined4 *DAT_0068efb0;
extern undefined4 DAT_0068efb4;
extern uint *DAT_0068efb8;
extern undefined4 *DAT_0068efbc;
extern undefined4 DAT_0068efc0;

// USA 0068EEE4 <- EU 0068EEBC (Ghidra, non-matching)
// GLOBAL DAT_0068efa0 uint *
// GLOBAL DAT_0068efa4 undefined4 *
// GLOBAL DAT_0068efa8 undefined4
// GLOBAL DAT_0068efac uint *
// GLOBAL DAT_0068efb0 undefined4 *
// GLOBAL DAT_0068efb4 undefined4
// GLOBAL DAT_0068efb8 uint *
// GLOBAL DAT_0068efbc undefined4 *
// GLOBAL DAT_0068efc0 undefined4

undefined4 func_0068EEE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068efa0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068efa0), iVar1 != 0)) {
    *DAT_0068efa4 = DAT_0068efa8;
  }
  if (DAT_0068efa4 != param_2) {
    if (((*DAT_0068efac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068efac), iVar1 != 0)) {
      *DAT_0068efb0 = DAT_0068efb4;
    }
    if (DAT_0068efb0 != param_2) {
      if (((*DAT_0068efb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068efb8), iVar1 != 0)) {
        *DAT_0068efbc = DAT_0068efc0;
      }
      if (DAT_0068efbc != param_2) {
        uVar2 = func_001E6B34(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

