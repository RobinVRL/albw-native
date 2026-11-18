#include "ghidra_types.h"

extern undefined4 DAT_004293a0;

// USA 00429368 <- EU 00429348 (Ghidra, non-matching)
// GLOBAL DAT_004293a0 undefined4

undefined4 func_00429368(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_004293a0;
  param_1[0x24] = *(int *)(param_1[0x12] + 0x3d4);
  iVar2 = param_1[0x12];
  *(undefined4 *)(iVar2 + 0x3dc) = uVar1;
  *(undefined4 *)(iVar2 + 0x3e0) = uVar1;
  *(undefined4 *)(iVar2 + 0x3e4) = uVar1;
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
                    /* WARNING: Could not recover jumptable at 0x0042939c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,5,1);
}

