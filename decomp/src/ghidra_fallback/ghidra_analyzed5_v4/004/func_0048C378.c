#include "ghidra_types.h"

extern void *func_0010E74C();

// USA 0048C378 <- EU 0048C350 (Ghidra, non-matching)

void func_0048C378(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float in_s0;
  
  if (param_2 < 0) {
    return;
  }
  iVar2 = *param_1;
  iVar3 = param_1[1];
  iVar4 = iVar2 + 1;
  bVar6 = SBORROW4(iVar3,iVar4);
  iVar1 = iVar3 - iVar4;
  bVar5 = iVar3 == iVar4;
  if (iVar4 <= iVar3) {
    bVar6 = SBORROW4(iVar2,param_2);
    iVar1 = iVar2 - param_2;
    bVar5 = iVar2 == param_2;
  }
  if (iVar1 < 0 == bVar6) {
    if (!bVar5 && iVar1 < 0 == bVar6) {
      func_0010E74C((uint *)(param_1[2] + (param_2 + 1) * 4),(uint *)(param_1[2] + param_2 * 4),
                    (iVar2 - param_2) * 4,in_s0);
    }
    *(undefined4 *)(param_1[2] + param_2 * 4) = param_3;
    *param_1 = *param_1 + 1;
  }
  return;
}

