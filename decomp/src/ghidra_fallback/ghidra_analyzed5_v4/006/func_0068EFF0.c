#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068f0ac;
extern undefined4 *DAT_0068f0b0;
extern undefined4 DAT_0068f0b4;
extern uint *DAT_0068f0b8;
extern undefined4 *DAT_0068f0bc;
extern undefined4 DAT_0068f0c0;
extern uint *DAT_0068f0c4;
extern undefined4 *DAT_0068f0c8;
extern undefined4 DAT_0068f0cc;

// USA 0068EFF0 <- EU 0068EFC8 (Ghidra, non-matching)
// GLOBAL DAT_0068f0ac uint *
// GLOBAL DAT_0068f0b0 undefined4 *
// GLOBAL DAT_0068f0b4 undefined4
// GLOBAL DAT_0068f0b8 uint *
// GLOBAL DAT_0068f0bc undefined4 *
// GLOBAL DAT_0068f0c0 undefined4
// GLOBAL DAT_0068f0c4 uint *
// GLOBAL DAT_0068f0c8 undefined4 *
// GLOBAL DAT_0068f0cc undefined4

undefined4 func_0068EFF0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068f0ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068f0ac), iVar1 != 0)) {
    *DAT_0068f0b0 = DAT_0068f0b4;
  }
  if (DAT_0068f0b0 != param_2) {
    if (((*DAT_0068f0b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068f0b8), iVar1 != 0)) {
      *DAT_0068f0bc = DAT_0068f0c0;
    }
    if (DAT_0068f0bc != param_2) {
      if (((*DAT_0068f0c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068f0c4), iVar1 != 0)) {
        *DAT_0068f0c8 = DAT_0068f0cc;
      }
      if (DAT_0068f0c8 != param_2) {
        uVar2 = func_001E6B34(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

