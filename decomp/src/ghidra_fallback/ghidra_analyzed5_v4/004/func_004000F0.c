#include "ghidra_types.h"


// USA 004000F0 <- EU 004000D0 (Ghidra, non-matching)

int func_004000F0(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  uVar2 = (**(code **)(*param_1 + 0x24))(param_1);
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1,uVar5);
      if (iVar3 != 0) {
        iVar4 = 0;
        while (cVar1 = *(char *)(iVar3 + 0x81 + iVar4), cVar1 == *(char *)(param_2 + iVar4)) {
          if (cVar1 == '\0') {
            return iVar3;
          }
          iVar4 = iVar4 + 1;
          if (0x1b < iVar4) {
            return iVar3;
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  piVar6 = (int *)param_1[5];
  while( true ) {
    if (piVar6 == param_1 + 5) {
      return 0;
    }
    iVar3 = (**(code **)(piVar6[-1] + 0x50))(piVar6 + -1,param_2);
    if (iVar3 != 0) break;
    piVar6 = (int *)*piVar6;
  }
  return iVar3;
}

