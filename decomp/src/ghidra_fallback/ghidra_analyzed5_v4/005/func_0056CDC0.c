// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0056AF9C(int param_1,uint param_2);
extern int func_0056B4A0(int param_1);
extern int func_0056B4C8();
extern int func_0056B8D4(int param_1);
extern int func_0056B9C4(int param_1);

// USA 0056CDC0 <- EU 0056CD98 (Ghidra, non-matching)

undefined4 func_0056CDC0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar1 = func_0056AF9C(*(int *)(param_1 + 0x3c),param_2);
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = func_0056B8D4(iVar1);
    if (iVar2 == 3) {
      puVar4 = (undefined4 *)func_0056B9C4(iVar1);
      *param_3 = *puVar4;
      param_3[1] = puVar4[1];
      uVar5 = func_0056B4A0((int)puVar4);
      *(char *)(param_3 + 2) = (char)uVar5;
      uVar5 = func_0056B4C8((int)puVar4);
      *(bool *)((int)param_3 + 9) = uVar5 != 0;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

