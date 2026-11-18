#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_0019AA88(int param_1,int param_2,int param_3);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_00297574(int param_1,int param_2);
extern int func_00297674(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_001508bc;

// USA 001507D8 <- EU 001507D8 (Ghidra, non-matching)
// GLOBAL DAT_001508bc int *

undefined4 func_001507D8(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar2 = DAT_001508bc;
  iVar3 = func_00587FCC(*DAT_001508bc,param_2);
  iVar4 = *(int *)(param_1 + 0x3f4);
  uVar5 = 0;
  bVar1 = false;
  if (iVar4 == 0) {
    iVar4 = func_00297674(*piVar2,param_1);
    *(int *)(param_1 + 0x3f4) = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
    func_0019A4C4(iVar4,param_1 + 0x3d0);
    iVar4 = *(int *)(param_1 + 0x3f4);
    bVar1 = true;
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar3 = func_0019AA88(iVar4,iVar3,param_3);
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
    uVar5 = 1;
  }
  return uVar5;
}

