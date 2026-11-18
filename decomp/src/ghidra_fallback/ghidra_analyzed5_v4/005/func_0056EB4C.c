#include "ghidra_types.h"

extern int func_004137E4(void);
extern int func_00417118(int param_1,int param_2);
extern int func_0041B9E0(int param_1,int param_2);
extern uint DAT_0056ec70;

// USA 0056EB4C <- EU 0056EB24 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_0056ec70 uint

uint func_0056EB4C(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5
                  )

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = DAT_0056ec70;
  uVar7 = 0;
  switch(param_5) {
  case 1:
    pbVar4 = (byte *)*param_2;
    *param_2 = pbVar4 + 1;
    uVar7 = (uint)*pbVar4;
    break;
  case 2:
    pbVar4 = (byte *)*param_2;
    *param_2 = pbVar4 + 1;
    bVar1 = *pbVar4;
    *param_2 = pbVar4 + 2;
    uVar7 = (uint)pbVar4[1] | uVar6 & (uint)bVar1 << 8;
    break;
  case 3:
    uVar7 = 0;
    do {
      pbVar4 = (byte *)*param_2;
      *param_2 = pbVar4 + 1;
      bVar1 = *pbVar4;
      uVar7 = bVar1 & 0x7f | uVar7 << 7;
    } while ((bVar1 & 0x80) != 0);
    break;
  case 4:
    pbVar4 = (byte *)*param_2;
    *param_2 = pbVar4 + 1;
    bVar1 = *pbVar4;
    uVar3 = (ushort)uVar6;
    *param_2 = pbVar4 + 2;
    iVar8 = (int)(short)((ushort)pbVar4[1] | uVar3 & (ushort)bVar1 << 8);
    *param_2 = pbVar4 + 3;
    bVar1 = pbVar4[2];
    *param_2 = pbVar4 + 4;
    bVar2 = pbVar4[3];
    uVar6 = func_004137E4();
    uVar7 = iVar8 + ((int)((((short)(uVar3 & (ushort)bVar1 << 8 | (ushort)bVar2) - iVar8) + 1) *
                          uVar6) >> 0x10);
    break;
  case 5:
    pbVar4 = (byte *)*param_2;
    *param_2 = pbVar4 + 1;
    uVar6 = (uint)*pbVar4;
    if (uVar6 < 0x20) {
      psVar5 = (short *)func_0041B9E0(param_3,uVar6);
    }
    else {
      if (0x2f < uVar6) {
        return 0;
      }
      psVar5 = (short *)func_00417118(param_4,uVar6 - 0x20);
    }
    if (psVar5 != (short *)0x0) {
      uVar7 = (uint)*psVar5;
    }
  }
  return uVar7;
}

