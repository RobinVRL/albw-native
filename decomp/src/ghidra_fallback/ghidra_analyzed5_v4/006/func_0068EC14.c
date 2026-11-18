#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ec8c;
extern undefined4 *DAT_0068ec90;
extern undefined4 DAT_0068ec94;
extern uint *DAT_0068ec98;
extern undefined4 *DAT_0068ec9c;
extern undefined4 DAT_0068eca0;

// USA 0068EC14 <- EU 0068EBEC (Ghidra, non-matching)
// GLOBAL DAT_0068ec8c uint *
// GLOBAL DAT_0068ec90 undefined4 *
// GLOBAL DAT_0068ec94 undefined4
// GLOBAL DAT_0068ec98 uint *
// GLOBAL DAT_0068ec9c undefined4 *
// GLOBAL DAT_0068eca0 undefined4

undefined4 func_0068EC14(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ec8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ec8c), iVar1 != 0)) {
    *DAT_0068ec90 = DAT_0068ec94;
  }
  if (DAT_0068ec90 != param_2) {
    if (((*DAT_0068ec98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ec98), iVar1 != 0)) {
      *DAT_0068ec9c = DAT_0068eca0;
    }
    if (DAT_0068ec9c != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

