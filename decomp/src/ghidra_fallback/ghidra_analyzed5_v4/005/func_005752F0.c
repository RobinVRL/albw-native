#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_005753ac;
extern undefined4 *DAT_005753b0;
extern undefined4 DAT_005753b4;
extern uint *DAT_005753b8;
extern undefined4 *DAT_005753bc;
extern undefined4 DAT_005753c0;
extern uint *DAT_005753c4;
extern undefined4 *DAT_005753c8;
extern undefined4 DAT_005753cc;

// USA 005752F0 <- EU 005752C8 (Ghidra, non-matching)
// GLOBAL DAT_005753ac uint *
// GLOBAL DAT_005753b0 undefined4 *
// GLOBAL DAT_005753b4 undefined4
// GLOBAL DAT_005753b8 uint *
// GLOBAL DAT_005753bc undefined4 *
// GLOBAL DAT_005753c0 undefined4
// GLOBAL DAT_005753c4 uint *
// GLOBAL DAT_005753c8 undefined4 *
// GLOBAL DAT_005753cc undefined4

undefined4 func_005752F0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005753ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005753ac), iVar1 != 0)) {
    *DAT_005753b0 = DAT_005753b4;
  }
  if (DAT_005753b0 != param_2) {
    if (((*DAT_005753b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005753b8), iVar1 != 0)) {
      *DAT_005753bc = DAT_005753c0;
    }
    if (DAT_005753bc != param_2) {
      if (((*DAT_005753c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005753c4), iVar1 != 0)) {
        *DAT_005753c8 = DAT_005753cc;
      }
      if (DAT_005753c8 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

