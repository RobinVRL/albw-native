#include "ghidra_types.h"


// USA 0056D40C <- EU 0056D3E4 (Ghidra, non-matching)

undefined4 func_0056D40C(uint *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = false;
  iVar2 = 0;
  if (param_3 != 0xffffffff) {
    uVar4 = 0;
    iVar3 = param_3 + 1;
    do {
      if (((*param_1 & 1 << (uVar4 & 0xff)) != 0) && (iVar2 = iVar2 + 1, uVar4 == param_3)) {
        bVar1 = true;
      }
      iVar3 = iVar3 + -1;
      uVar4 = uVar4 + 1;
    } while (iVar3 != 0);
    if (!bVar1) {
      return 0;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  *param_2 = param_1[iVar2];
  return 1;
}

