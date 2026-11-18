#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_0019AA88(int param_1,int param_2,int param_3);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_00297574(int param_1,int param_2);
extern int func_00297674(int param_1,int param_2);
extern int *DAT_001509a0;

// USA 001508C0 <- EU 001508C0 (Ghidra, non-matching)
// GLOBAL DAT_001509a0 int *

undefined4 func_001508C0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = DAT_001509a0;
  uVar4 = 0;
  bVar1 = false;
  if (*(int *)(param_1 + 0x3f4) == 0) {
    iVar3 = func_00297674(*DAT_001509a0,param_1);
    *(int *)(param_1 + 0x3f4) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    func_0019A4C4(iVar3,param_1 + 0x3d0);
    bVar1 = true;
    if (*(int *)(param_1 + 0x3f4) == 0) {
      return 0;
    }
  }
  iVar3 = func_0019AA88(*(int *)(param_1 + 0x3f4),param_2,param_3);
  if (iVar3 == 0) {
    if (bVar1) {
      func_00297574(*piVar2,*(int *)(param_1 + 0x3f4));
      *(undefined4 *)(param_1 + 0x3f4) = 0;
    }
  }
  else {
    if (bVar1) {
      func_0010F1DC((int *)(param_1 + 0x3f8),
                    (int *)(*(int *)(param_1 + 0x404) + *(int *)(param_1 + 0x3f4)));
      *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + 1;
    }
    if (param_3 != 0) {
      func_0025B6A8(param_3,iVar3);
    }
    uVar4 = 1;
  }
  return uVar4;
}

