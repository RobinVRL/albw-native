#include "ghidra_types.h"

extern int func_001670E0(undefined4 *param_1);
extern int func_001682A8(int param_1);
extern int func_0044E28C(int param_1);
extern int func_0051E300(int param_1);
extern int *DAT_00232438;

// USA 00232320 <- EU 00232320 (Ghidra, non-matching)
// GLOBAL DAT_00232438 int *

undefined4 func_00232320(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  func_0044E28C(param_1);
  iVar1 = func_0051E300(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x4c);
  while (piVar3 = (int *)(iVar1 - iVar4),
        piVar3 != (int *)((param_1 + 0x48) - *(int *)(param_1 + 0x54))) {
    (**(code **)(*piVar3 + 8))(piVar3);
    iVar1 = *(int *)((int)piVar3 + iVar4 + 4);
  }
  iVar1 = func_0051E300(param_1);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    bVar5 = false;
    if ((*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) &&
       (-1 < *(int *)(param_1 + 0x18) << 0x1c)) {
      uVar2 = func_001670E0(*(undefined4 **)(param_1 + 0x1c));
      bVar5 = uVar2 != 0;
      func_001682A8(*(int *)(param_1 + 0x1c));
    }
    uVar2 = 0;
    piVar3 = (int *)0x0;
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (piVar3 = *(int **)(*(int *)(param_1 + 0x10) + 0x68), ((uint)piVar3 & 0x18) != 0)) {
      uVar2 = 1;
    }
    if (bVar5) {
      piVar3 = (int *)(*DAT_00232438 + 0xf1c);
      if (uVar2 < 2) {
        piVar3 = piVar3 + uVar2 * 0xa3;
      }
      if (*piVar3 < piVar3[1]) {
        *(undefined4 *)(piVar3[2] + *piVar3 * 4) = *(undefined4 *)(param_1 + 0x1c);
        *piVar3 = *piVar3 + 1;
      }
    }
  }
  return piVar3;
}

