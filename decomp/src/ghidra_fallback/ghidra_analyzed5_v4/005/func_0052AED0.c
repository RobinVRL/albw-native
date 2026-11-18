#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0052af48;
extern undefined4 *DAT_0052af4c;
extern undefined4 DAT_0052af50;
extern uint *DAT_0052af54;
extern undefined4 *DAT_0052af58;
extern undefined4 DAT_0052af5c;

// USA 0052AED0 <- EU 0052AEA8 (Ghidra, non-matching)
// GLOBAL DAT_0052af48 uint *
// GLOBAL DAT_0052af4c undefined4 *
// GLOBAL DAT_0052af50 undefined4
// GLOBAL DAT_0052af54 uint *
// GLOBAL DAT_0052af58 undefined4 *
// GLOBAL DAT_0052af5c undefined4

undefined4 func_0052AED0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0052af48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052af48), iVar1 != 0)) {
    *DAT_0052af4c = DAT_0052af50;
  }
  if (DAT_0052af4c != param_2) {
    if (((*DAT_0052af54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052af54), iVar1 != 0)) {
      *DAT_0052af58 = DAT_0052af5c;
    }
    if (DAT_0052af58 != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

