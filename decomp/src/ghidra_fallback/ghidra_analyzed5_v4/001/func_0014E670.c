#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0019A014(int param_1,int *param_2);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_001DF8F8(int param_1,int *param_2);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_00297574(int param_1,int param_2);
extern int func_00297674(int param_1,int param_2);
extern int *DAT_0014e768;

// USA 0014E670 <- EU 0014E670 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0014e768 int *

undefined4 func_0014E670(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  piVar2 = DAT_0014e768;
  uVar5 = 0;
  bVar1 = false;
  if (*(int *)(param_1 + 0x3f4) == 0) {
    iVar3 = func_00297674(*DAT_0014e768,param_1);
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
  piVar4 = func_0019A014(*(int *)(param_1 + 0x3f4),param_2);
  if (piVar4 == (int *)0x0) {
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
    if (param_4 != 0) {
      func_001DF8F8((int)piVar4,param_3);
    }
    if (param_5 != 0) {
      func_0025B6A8(param_5,(int)piVar4);
    }
    uVar5 = 1;
  }
  return uVar5;
}

