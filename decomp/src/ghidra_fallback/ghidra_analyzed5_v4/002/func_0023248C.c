#include "ghidra_types.h"

extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);

// USA 0023248C <- EU 0023248C (Ghidra, non-matching)

undefined4 func_0023248C(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if ((piVar1 != (int *)0x0) && (uVar3 = *(uint *)(param_1 + 0x18), (uVar3 & 4) == 0)) {
    bVar5 = (uVar3 & 0x10) == 0;
    if (bVar5) {
      uVar3 = piVar1[4];
    }
    if ((bVar5 && uVar3 == 0) && (iVar4 = *piVar1, iVar4 != 0)) {
      uVar2 = func_0041F7CC();
      uVar2 = (**(code **)(*param_2 + 0x24))(param_2,uVar2,iVar4,param_3);
      return func_0041F7DC(uVar2);
    }
  }
  return 0;
}

