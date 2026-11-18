#include "ghidra_types.h"


// USA 0010B3C0 <- EU 0010B3C0 (Ghidra, non-matching)

undefined4 func_0010B3C0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (-1 < param_2) {
    iVar4 = *param_1;
    iVar2 = param_1[1];
    iVar3 = param_3 + iVar4;
    bVar5 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
    if (iVar3 <= iVar2) {
      bVar5 = SBORROW4(iVar4,param_2);
      iVar1 = iVar4 - param_2;
    }
    if (iVar1 < 0 == bVar5) {
      return 1;
    }
  }
  return 0;
}

