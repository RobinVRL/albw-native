#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_00427CA8(int param_1);
extern int func_0046ED18(void);
extern int func_0051E300(int param_1);

// USA 0046F310 <- EU 0046F2E8 (Ghidra, non-matching)

undefined4 func_0046F310(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = param_1[0x15];
  for (piVar3 = (int *)(param_1[0x13] - iVar4);
      piVar3 != (int *)((int)param_1 + (0x48 - param_1[0x15]));
      piVar3 = (int *)(*(int *)((int)piVar3 + iVar4 + 4) - iVar4)) {
    iVar2 = func_0051E300((int)piVar3);
    if (iVar2 != 0) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
    }
  }
  func_0012C85C(param_1,param_1[0x15]);
  func_00427CA8(param_1[0x1d]);
  cVar1 = *(char *)((int)param_1 + 0xd);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)((int)param_1 + 0xe);
  }
  if (bVar5 && cVar1 == '\0') {
    return 0;
  }
  return func_0046ED18();
}

