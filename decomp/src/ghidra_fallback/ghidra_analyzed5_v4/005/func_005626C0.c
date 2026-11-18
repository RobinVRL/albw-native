#include "ghidra_types.h"

extern uint DAT_005628f0;
extern uint DAT_005628f4;
extern uint DAT_005628f8;
extern uint DAT_005628fc;
extern uint DAT_00562900;
extern uint DAT_00562904;

// USA 005626C0 <- EU 00562698 (Ghidra, non-matching)
// GLOBAL DAT_005628f0 uint
// GLOBAL DAT_005628f4 uint
// GLOBAL DAT_005628f8 uint
// GLOBAL DAT_005628fc uint
// GLOBAL DAT_00562900 uint
// GLOBAL DAT_00562904 uint

uint * func_005626C0(byte *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  uVar1 = DAT_005628f0;
  pbVar7 = param_1 + 0x17c;
  uVar10 = 0;
  iVar11 = 8;
  if (param_1[0x191] == 0) {
    iVar12 = 7;
  }
  else {
    iVar12 = 0;
  }
  uVar3 = (uint)(param_1[399] == 0) << 0x10 | (uint)(param_1[400] == 0) << 0x11 |
          (uint)(param_1[0x185] == 0) << 0x13 | iVar12 << 0x14 | 0xff04ffff;
  uVar13 = 0;
  pbVar8 = param_1 + 0x16c;
  pbVar9 = param_1 + 0x174;
  uVar6 = 0;
  pbVar5 = param_1 + 0x164;
  do {
    uVar4 = uVar6;
    if (*pbVar5 != 0) {
      if (*pbVar7 != 0) {
        uVar3 = uVar3 & ~(1 << (uVar13 & 0xff));
      }
      if (*pbVar8 != 0) {
        uVar3 = uVar3 & ~(1 << (uVar13 + 8 & 0xff));
      }
      if (*pbVar9 != 0) {
        uVar3 = uVar3 & ~(1 << (uVar13 + 0x18 & 0xff));
      }
      uVar4 = uVar6 + 1;
      uVar10 = uVar10 | uVar13 << ((uVar6 & 0x3f) << 2);
    }
    iVar11 = iVar11 + -1;
    pbVar7 = pbVar7 + 1;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
    uVar13 = uVar13 + 1;
    uVar6 = uVar4;
    pbVar5 = pbVar5 + 1;
  } while (iVar11 != 0);
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[1] = uVar1;
    puVar2 = param_2 + 3;
    param_2[2] = 0;
    param_2 = param_2 + 4;
    *puVar2 = 0;
  }
  uVar1 = DAT_005628f4;
  *param_2 = (uint)(uVar4 != 0);
  uVar6 = DAT_005628f8;
  param_2[1] = uVar1;
  param_2[2] = (uint)param_1[1] << 10 | (uint)*param_1 << 0x14 | (uint)param_1[2];
  param_2[3] = uVar6;
  uVar1 = DAT_005628fc;
  if ((int)uVar4 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar4 - 1;
  }
  param_2[4] = uVar6;
  param_2[5] = uVar1;
  uVar1 = DAT_00562900;
  param_2[6] = (uint)((param_1[0x189] != 0 || param_1[0x18a] != 0) || param_1[0x18b] != 0) |
               (uint)param_1[0x185] << 2 | (uint)param_1[0x184] << 4 |
               (uint)(param_1[0x189] != 0) << 0x10 | (uint)(param_1[0x18a] != 0) << 0x11 |
               (uint)(param_1[0x18c] != 0) << 0x12 | (uint)(param_1[0x18b] != 0) << 0x13 |
               (uint)param_1[0x188] << 0x16 | (uint)param_1[0x186] << 0x18 |
               (uint)(param_1[0x18e] != 0) << 0x1b | (uint)param_1[0x187] << 0x1c |
               (uint)(param_1[0x187] != 0 && param_1[0x18d] == 0) << 0x1e | 0x80000400;
  param_2[7] = uVar1;
  param_2[8] = uVar3;
  param_2[9] = uVar1 + 1;
  param_2[10] = (uint)(uVar4 == 0);
  uVar1 = DAT_00562904;
  param_2[0xb] = DAT_00562904;
  param_2[0xc] = uVar10;
  param_2[0xd] = uVar1 + 0x13;
  return param_2 + 0xe;
}

