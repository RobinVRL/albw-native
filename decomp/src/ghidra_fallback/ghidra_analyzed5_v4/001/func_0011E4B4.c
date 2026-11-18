#include "ghidra_types.h"


// USA 0011E4B4 <- EU 0011E4B4 (Ghidra, non-matching)

int func_0011E4B4(uint *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint in_r12;
  bool bVar7;
  
  if ((param_1 != (uint *)0x0 && param_2 != (undefined4 *)0x0) && param_3 != 0) {
    bVar7 = param_4 == 0;
    if (-1 < (int)param_4) {
      in_r12 = (uint)*(ushort *)(param_3 + 6);
      bVar7 = in_r12 == param_4;
    }
    if ((!bVar7 && (-1 < (int)param_4 && (int)param_4 <= (int)in_r12)) &&
       (iVar4 = param_3 + param_4 * 0x20, iVar4 != -0x20)) {
      bVar1 = *(byte *)(iVar4 + 0x34);
      puVar6 = (undefined4 *)(param_3 + *(int *)(iVar4 + 0x38) * 4);
      *param_1 = (uint)bVar1;
      if (bVar1 != 0) {
        puVar3 = param_2 + -1;
        puVar5 = puVar6 + -1;
        if ((bVar1 & 1) != 0) {
          *param_2 = *puVar6;
          puVar3 = param_2;
          puVar5 = puVar6;
        }
        for (iVar2 = (int)*param_1 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
          puVar3[1] = puVar5[1];
          puVar5 = puVar5 + 2;
          puVar3 = puVar3 + 2;
          *puVar3 = *puVar5;
        }
      }
      return *(int *)(param_3 + 8) + *(int *)(iVar4 + 0x28) + param_3;
    }
  }
  return 0;
}

