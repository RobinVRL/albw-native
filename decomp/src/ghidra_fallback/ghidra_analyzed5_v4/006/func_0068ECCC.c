#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068ed88;
extern undefined4 *DAT_0068ed8c;
extern undefined4 DAT_0068ed90;
extern uint *DAT_0068ed94;
extern undefined4 *DAT_0068ed98;
extern undefined4 DAT_0068ed9c;
extern uint *DAT_0068eda0;
extern undefined4 *DAT_0068eda4;
extern undefined4 DAT_0068eda8;

// USA 0068ECCC <- EU 0068ECA4 (Ghidra, non-matching)
// GLOBAL DAT_0068ed88 uint *
// GLOBAL DAT_0068ed8c undefined4 *
// GLOBAL DAT_0068ed90 undefined4
// GLOBAL DAT_0068ed94 uint *
// GLOBAL DAT_0068ed98 undefined4 *
// GLOBAL DAT_0068ed9c undefined4
// GLOBAL DAT_0068eda0 uint *
// GLOBAL DAT_0068eda4 undefined4 *
// GLOBAL DAT_0068eda8 undefined4

undefined4 func_0068ECCC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068ed88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ed88), iVar1 != 0)) {
    *DAT_0068ed8c = DAT_0068ed90;
  }
  if (DAT_0068ed8c != param_2) {
    if (((*DAT_0068ed94 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068ed94), iVar1 != 0)) {
      *DAT_0068ed98 = DAT_0068ed9c;
    }
    if (DAT_0068ed98 != param_2) {
      if (((*DAT_0068eda0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068eda0), iVar1 != 0)) {
        *DAT_0068eda4 = DAT_0068eda8;
      }
      if (DAT_0068eda4 != param_2) {
        uVar2 = func_001E6B34(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

