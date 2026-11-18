#include "ghidra_types.h"

extern int func_0011F198(int param_1,uint param_2);
extern int func_0011F1E8(int param_1,int param_2,uint param_3);

// USA 0011E898 <- EU 0011E898 (Ghidra, non-matching)

undefined4 func_0011E898(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x14) == -1) {
    return 0xfffffff6;
  }
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = param_2[uVar4];
  }
  piVar7 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14) * 0x10);
  iVar2 = func_0011F198((int)param_2,*(uint *)*piVar7);
  uVar8 = *(uint *)(*piVar7 + iVar2 * 8 + 4);
  iVar2 = *(int *)(*piVar7 + iVar2 * 8 + 8);
  uVar6 = 0;
  if (uVar8 != 0) {
    do {
      uVar5 = (uint)*(byte *)(*piVar7 + iVar2);
      if ((uVar5 == uVar4) &&
         (iVar3 = func_0011F1E8((int)param_2,iVar2 + 1 + *piVar7,uVar5), iVar3 != 0)) {
        return *(undefined4 *)(*piVar7 + iVar2 + uVar5 + 1);
      }
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + uVar5 + 5;
    } while (uVar6 < uVar8);
  }
  return 0xffffffff;
}

