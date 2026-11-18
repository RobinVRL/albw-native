#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_004088FC(int param_1,int param_2);
extern int func_00408974(int param_1,char *param_2);
extern int func_0040E588(int param_1,byte *param_2,int param_3);
extern int func_0040E6E8(int param_1,int param_2,uint param_3,int *param_4);
extern int func_004135B4(int *param_1,int *param_2);

// USA 00410CEC <- EU 00410CCC (Ghidra, non-matching)

undefined4 func_00410CEC(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define abStack_119 ((byte *)(albw_frame + 0x7))
  #define aiStack_100 ((int *)(albw_frame + 0x20))
  #define local_a0 ((int *)(albw_frame + 0x80))
  iVar2 = func_0040E588(param_1 + 0x11c,param_2,(int)*(char *)(param_1 + 0x191));
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x134);
    return 0;
  }
  *(undefined1 *)(param_1 + 400) = 1;
  local_a0[0] = 0;
  iVar2 = func_0040E6E8(param_1 + 0x11c,(int)aiStack_100,0x40,local_a0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x134);
  }
  else if (local_a0[0] == 0x40) {
    func_004135B4((int *)(param_1 + 0x13c),aiStack_100);
    func_004088FC(param_1,param_1 + 0x13c);
    uVar3 = func_00103CBC((char *)param_2);
    do {
      uVar1 = uVar3;
      uVar3 = uVar1 - 1;
      if ((int)uVar3 < 0) {
        return 1;
      }
    } while (param_2[uVar3] != 0x2f && param_2[uVar3] != 0x5c);
    if ((int)uVar3 < 0x100) {
      uVar6 = 0;
      pbVar4 = abStack_119 + 1;
      do {
        uVar7 = uVar3;
        if (0xfe < uVar3) {
          uVar7 = 0xff;
        }
        pbVar5 = pbVar4;
        if (uVar7 <= uVar6) break;
        uVar6 = uVar6 + 1;
        pbVar5 = pbVar4 + 1;
        *pbVar4 = *param_2;
        param_2 = param_2 + 1;
        pbVar4 = pbVar5;
      } while (*param_2 != 0);
      *pbVar5 = 0;
      abStack_119[uVar1] = 0;
      func_00408974(param_1,(char *)(abStack_119 + 1));
      return 1;
    }
  }
  return 0;
}

