#include "ghidra_types.h"

extern undefined8 func_00116224(uint param_1,int param_2,uint param_3);

// USA 00564538 <- EU 00564510 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint

longlong func_00564538(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  lVar9 = (ulonglong)param_3 * (ulonglong)uVar7 +
          CONCAT44(((int)uVar7 >> 0x1f) * param_3,
                   (int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20));
  uVar4 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar5 = (uint)((ulonglong)param_4 * (ulonglong)uVar7);
  uVar1 = uVar6 * ((int)param_4 >> 0x1f) + (int)((ulonglong)param_4 * (ulonglong)uVar6 >> 0x20) +
          (uint)CARRY4((uint)lVar9,(uint)((ulonglong)param_4 * (ulonglong)uVar6));
  uVar2 = uVar1 + uVar4 + uVar5;
  iVar3 = ((int)uVar1 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4) +
          uVar7 * ((int)param_4 >> 0x1f) +
          ((int)uVar7 >> 0x1f) * param_4 + (int)((ulonglong)param_4 * (ulonglong)uVar7 >> 0x20) +
          (uint)CARRY4(uVar1 + uVar4,uVar5);
  if ((int)param_4 < 0) {
    bVar8 = CARRY4(uVar2,uVar6);
    uVar2 = uVar2 + uVar6;
    iVar3 = iVar3 + uVar7 + (uint)bVar8;
  }
  lVar9 = func_00116224(uVar2,iVar3,param_5);
  return lVar9 + (ulonglong)(uint)-((int)param_1[1] >> 0x1f);
}

