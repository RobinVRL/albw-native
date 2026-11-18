#include "ghidra_types.h"

extern undefined4 DAT_00116388;

// USA 0011629C <- EU 0011629C (Ghidra, non-matching)
// GLOBAL DAT_00116388 undefined4

uint func_0011629C(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar10 = *param_1;
      uVar11 = *param_2;
      param_3 = param_3 - 4;
      cVar1 = UnsignedSaturate((char)DAT_00116388 - (char)uVar10,0x10);
      uVar2 = UnsignedSaturate((char)((uint)DAT_00116388 >> 8) - (char)(uVar10 >> 8),0x10);
      uVar3 = UnsignedSaturate((char)((uint)DAT_00116388 >> 0x10) - (char)(uVar10 >> 0x10),0x10);
      uVar4 = UnsignedSaturate((char)((uint)DAT_00116388 >> 0x18) - (char)(uVar10 >> 0x18),0x10);
      if ((((uVar4 & 0xff) != 0 || uVar3 != 0) || uVar2 != 0) || cVar1 != '\0') {
        uVar7 = (uVar10 & 0xff) - (uVar11 & 0xff);
        if (uVar7 != 0 || cVar1 != '\0') {
          return uVar7;
        }
        uVar7 = (uVar10 & 0xffff) - (uVar11 & 0xffff);
        if (uVar7 != 0 || ((uVar2 & 0xff) != 0 || cVar1 != '\0')) {
          return uVar7;
        }
        uVar7 = (uVar10 & 0xffffff) - (uVar11 & 0xffffff);
        bVar5 = uVar7 == 0;
        bVar6 = (uVar3 & 0xff) == 0;
        if (bVar5 && ((bVar6 && uVar2 == 0) && cVar1 == '\0')) {
          uVar7 = uVar10 >> 0x18;
        }
        if (bVar5 && ((bVar6 && uVar2 == 0) && cVar1 == '\0')) {
          uVar7 = uVar7 - (uVar11 >> 0x18);
        }
        return uVar7;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (uVar10 != uVar11) {
        if ((uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
            uVar11 >> 0x18) <
            (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
            uVar10 >> 0x18)) {
          uVar10 = 1;
        }
        else {
          uVar10 = 0xffffffff;
        }
        return uVar10;
      }
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    pbVar8 = (byte *)((int)param_1 + 1);
    uVar10 = (uint)(byte)*param_1;
    pbVar9 = (byte *)((int)param_2 + 1);
    uVar11 = (uint)(byte)*param_2;
    if (((uVar10 == 0) || (uVar10 != uVar11)) || (param_3 == 1)) break;
    param_1 = (uint *)((int)param_1 + 2);
    uVar10 = (uint)*pbVar8;
    param_2 = (uint *)((int)param_2 + 2);
    uVar11 = (uint)*pbVar9;
    if (((uVar10 == 0) || (uVar10 != uVar11)) || (param_3 = param_3 - 2, param_3 == 0)) break;
  }
  return uVar10 - uVar11;
}

