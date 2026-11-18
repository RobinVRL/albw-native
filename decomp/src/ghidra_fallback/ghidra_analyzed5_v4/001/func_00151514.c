#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00588BF0(int param_1,int param_2);

// USA 00151514 <- EU 00151514 (Ghidra, non-matching)

void func_00151514(int *param_1)

{
  bool bVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  
  if (((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 5) && (*(short *)((int)param_1 + 0x36) != 0)) {
    iVar3 = param_1[0x103];
    bVar1 = func_00588BF0((int)param_1,0);
    *(bool *)(iVar3 + 0x44) = bVar1;
  }
  if ((*(char *)(param_1[0x103] + 0x44) != '\0') && ((char)param_1[0x108] != '\0')) {
    *(undefined2 *)(param_1[0x105] + 0x28) = 7;
    iVar3 = func_0014E2A0((int)param_1,param_1[0x105],0,0x4100,0,0);
    if (iVar3 == 0) {
      iVar3 = param_1[0x104];
      uVar2 = extraout_r1;
      if (iVar3 != 0) {
        uVar2 = (uint)*(byte *)(iVar3 + 0x44);
      }
      if (iVar3 != 0 && uVar2 != 0) {
        *(undefined1 *)(iVar3 + 0x44) = 0;
      }
    }
    else {
      (**(code **)(*param_1 + 0x4c))(param_1);
    }
    *(short *)(param_1[0x105] + 0x28) = (short)param_1[0x106];
  }
  return;
}

