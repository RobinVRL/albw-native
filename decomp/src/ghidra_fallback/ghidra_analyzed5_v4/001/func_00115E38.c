#include "ghidra_types.h"


// USA 00115E38 <- EU 00115E38 (Ghidra, non-matching)

uint func_00115E38(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r6;
  int iVar8;
  
  uVar7 = *(uint *)(param_2 + 4);
  uVar5 = uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18;
  pbVar2 = (byte *)(param_2 + 0x10);
  uVar7 = 0;
  uVar6 = uVar5;
  do {
    while( true ) {
      uVar7 = uVar7 >> 1;
      pbVar3 = pbVar2;
      if (uVar7 == 0) {
        pbVar3 = pbVar2 + 1;
        unaff_r6 = (uint)*pbVar2;
        uVar7 = 0x80;
      }
      if ((unaff_r6 & uVar7) == 0) break;
      pbVar2 = pbVar3 + 1;
      uVar6 = uVar6 - 1;
      *param_1 = *pbVar3;
      param_1 = param_1 + 1;
      if (uVar6 == 0) {
        return uVar5;
      }
    }
    uVar4 = (uint)pbVar3[1] + (uint)*pbVar3 * 0x100;
    uVar1 = uVar4 >> 0xc;
    iVar8 = uVar1 + 2;
    pbVar2 = pbVar3 + 2;
    if (uVar1 == 0) {
      pbVar2 = pbVar3 + 3;
      iVar8 = pbVar3[2] + 0x12;
    }
    uVar6 = uVar6 - iVar8;
    do {
      iVar8 = iVar8 + -1;
      pbVar3 = param_1 + 1;
      *param_1 = param_1[-((uVar4 & 0xfff) + 1)];
      param_1 = pbVar3;
    } while (iVar8 != 0);
  } while (uVar6 != 0);
  return uVar5;
}

