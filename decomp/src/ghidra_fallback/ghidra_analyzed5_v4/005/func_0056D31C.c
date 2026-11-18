#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B678(int param_1,uint *param_2);
extern int func_0056B6D8(int param_1);
extern int func_0056B6F8(int param_1);
extern int func_0056B720(int param_1);
extern int func_0056B8D4(int param_1);
extern int func_0056BA04(int param_1);

// USA 0056D31C <- EU 0056D2F4 (Ghidra, non-matching)

undefined4 func_0056D31C(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0056B8D4(iVar1);
    if (iVar2 == 1) {
      iVar1 = func_0056BA04(iVar1);
      uVar4 = func_0056B6D8(iVar1);
      *param_3 = uVar4;
      param_3[5] = *(uint *)(iVar1 + 8);
      uVar4 = func_0056B6F8(iVar1);
      *(char *)(param_3 + 6) = (char)uVar4;
      uVar3 = func_0056B720(iVar1);
      *(char *)((int)param_3 + 0x19) = (char)uVar3;
      func_0056B678(iVar1,param_3 + 1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

