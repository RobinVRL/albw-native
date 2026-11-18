#include "ghidra_types.h"

extern int func_00178B5C(int param_1);
extern int func_0017A190(int param_1);
extern int func_00520B48(int param_1);
extern int func_005246D8(int param_1);
extern int func_00524708(int param_1);
extern int func_0066C748(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00440e10;

// USA 00440D04 <- EU 00440CE4 (Ghidra, non-matching)
// GLOBAL DAT_00440e10 int *

undefined4 func_00440D04(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (((int)(short)param_1[0x38] <= param_1[0x23]) &&
     (iVar1 = func_00520B48(*DAT_00440e10), iVar1 == 0)) {
    iVar1 = func_005246D8(param_1[0x1d]);
    if ((iVar1 == 0) &&
       ((uVar2 = param_1[0x1d], *(char *)(uVar2 + 0x28) == '\0' || (*(short *)(uVar2 + 0x36) != 0)))
       ) {
      if (param_1[0x1e] != 0) {
        uVar2 = (uint)*(byte *)(uVar2 + 0x2a);
      }
      if (param_1[0x1e] != 0 && uVar2 != 0) goto LAB_00440da4;
    }
    iVar1 = param_1[0x1d];
    if (((*(char *)(iVar1 + 0x28) == '\0') || (*(short *)(iVar1 + 0x36) != 0)) ||
       (*(byte *)(iVar1 + 0x2f) < 2)) {
      func_0066C748(param_1 + 0x23,2);
    }
    else {
      func_0066C748(param_1 + 0x23,3);
    }
  }
LAB_00440da4:
  iVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (iVar1 != 0) {
    func_00178B5C(param_1[0x1d]);
  }
  piVar3 = (int *)param_1[0x1e];
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = func_00524708(param_1[0x1d]);
  iVar1 = param_1[0x1d];
  *(undefined2 *)(iVar1 + 0x32) = 0;
  *(undefined1 *)(iVar1 + 0x3d) = 0;
  (**(code **)(*piVar3 + 0x60))(piVar3,*(undefined4 *)(param_1[0x1d] + 8),0,uVar2);
  return func_0017A190(param_1[0x1d]);
}

