#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00575e74;
extern undefined4 *DAT_00575e78;
extern undefined4 DAT_00575e7c;
extern uint *DAT_00575e80;
extern undefined4 *DAT_00575e84;
extern undefined4 DAT_00575e88;

// USA 00575DFC <- EU 00575DD4 (Ghidra, non-matching)
// GLOBAL DAT_00575e74 uint *
// GLOBAL DAT_00575e78 undefined4 *
// GLOBAL DAT_00575e7c undefined4
// GLOBAL DAT_00575e80 uint *
// GLOBAL DAT_00575e84 undefined4 *
// GLOBAL DAT_00575e88 undefined4

undefined4 func_00575DFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00575e74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575e74), iVar1 != 0)) {
    *DAT_00575e78 = DAT_00575e7c;
  }
  if (DAT_00575e78 != param_2) {
    if (((*DAT_00575e80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575e80), iVar1 != 0)) {
      *DAT_00575e84 = DAT_00575e88;
    }
    if (DAT_00575e84 != param_2) {
      uVar2 = func_004B9748(param_2);
      return uVar2;
    }
  }
  return 1;
}

