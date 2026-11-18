#include "ghidra_types.h"


// USA 003C8498 <- EU 003C8474 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 uint

undefined4 func_003C8498(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                  uint param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x10) - uVar2;
  iVar4 = *(int *)(param_1 + 0x14) -
          (*(int *)(param_1 + 0xc) + (uint)(*(uint *)(param_1 + 0x10) < uVar2));
  iVar5 = param_4 + (uint)CARRY4(param_3,param_6);
  bVar6 = uVar3 < param_3 + param_6;
  if ((int)(iVar4 - (iVar5 + (uint)bVar6)) < 0 !=
      (SBORROW4(iVar4,iVar5) != SBORROW4(iVar4 - iVar5,(uint)bVar6))) {
    param_6 = uVar3 - param_3;
  }
  iVar5 = *(int *)(param_1 + 0x18);
  iVar4 = iVar5;
  if (iVar5 == 0) {
    iVar4 = 2;
  }
  if (iVar5 < 0) {
    if (iVar4 < -8) {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
    }
  }
  else if (0 < iVar5) {
    if (iVar4 < 9) {
      iVar4 = 3;
    }
    else {
      iVar4 = 4;
    }
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar4 * 4 + 0xc);
  return (**(code **)*puVar1)
            (puVar1,param_2,param_3 + uVar2,
             param_4 + *(int *)(param_1 + 0xc) + (uint)CARRY4(param_3,uVar2),param_5,param_6);
}

