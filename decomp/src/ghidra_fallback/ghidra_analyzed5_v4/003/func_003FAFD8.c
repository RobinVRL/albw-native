#include "ghidra_types.h"


// USA 003FAFD8 <- EU 003FAFB8 (Ghidra, non-matching)

int * func_003FAFD8(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_1[2];
  uVar4 = *param_1 + param_1[1] * 4;
  if (uVar5 == uVar4) {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 1;
    uVar7 = uVar5 + 8;
    param_1[5] = uVar5;
    param_1[2] = uVar7;
    iVar2 = *(int *)(uVar5 + 4);
    *(short *)(param_1 + 4) = (short)iVar2;
    *(byte *)((int)param_1 + 0xd) = (byte)((uint)(iVar2 << 0xc) >> 0x1c);
    uVar1 = (undefined1)-(iVar2 >> 0x1f);
    uVar5 = (uint)(iVar2 << 4) >> 0x18;
    if (-(iVar2 >> 0x1f) != 0) {
      uVar1 = 1;
    }
    *(char *)((int)param_1 + 0xe) = (char)((uint)(iVar2 << 4) >> 0x18);
    *(undefined1 *)((int)param_1 + 0xf) = uVar1;
    uVar3 = uVar7 + uVar5 * 4;
    uVar6 = (uint)(uVar5 != 0);
    if (uVar5 != 0) {
      uVar6 = uVar7;
    }
    param_1[2] = uVar3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    param_1[6] = uVar6;
    param_1[2] = uVar3;
    if ((uVar3 != uVar4) && ((int)((uVar3 - *param_1) * 0x20000000) < 0)) {
      param_1[2] = uVar3 + 4;
    }
  }
  return param_1;
}

