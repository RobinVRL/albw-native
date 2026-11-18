#include "ghidra_types.h"


// USA 00100858 <- EU 00100858 (Ghidra, function missing from the decomp table)

int func_00100858(uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar2 = *param_1;
      param_1 = param_1 + 1;
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 - 4;
      if (uVar2 != uVar3) {
        iVar1 = (uVar2 & 0xff) - (uVar3 & 0xff);
        if (((iVar1 == 0) && (iVar1 = (uVar2 & 0xffff) - (uVar3 & 0xffff), iVar1 == 0)) &&
           (iVar1 = (uVar2 & 0xffffff) - (uVar3 & 0xffffff), iVar1 == 0)) {
          iVar1 = (uVar2 >> 0x18) - (uVar3 >> 0x18);
        }
        return iVar1;
      }
    }
  }
  if (param_3 != 0) {
    if ((param_3 & 1) == 0) goto LAB_001008ac;
    param_3 = param_3 + 1;
    while( true ) {
      uVar2 = *param_1;
      uVar3 = *param_2;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      iVar1 = (uint)(byte)uVar2 - (uint)(byte)uVar3;
      if (iVar1 != 0) {
        return iVar1;
      }
      param_3 = param_3 - 2;
      if (param_3 == 0) break;
LAB_001008ac:
      uVar2 = *param_1;
      uVar3 = *param_2;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      iVar1 = (uint)(byte)uVar2 - (uint)(byte)uVar3;
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    return 0;
  }
  return 0;
}

