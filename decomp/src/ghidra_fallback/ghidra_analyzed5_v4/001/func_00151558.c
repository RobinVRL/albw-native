#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);

// USA 00151558 <- EU 00151558 (Ghidra, non-matching)

void func_00151558(int *param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  
  if ((*(char *)(param_1[0x103] + 0x44) != '\0') && ((char)param_1[0x108] != '\0')) {
    *(undefined2 *)(param_1[0x105] + 0x28) = 7;
    iVar1 = func_0014E2A0((int)param_1,param_1[0x105],0,0x4100,0,0);
    if (iVar1 == 0) {
      iVar1 = param_1[0x104];
      uVar2 = extraout_r1;
      if (iVar1 != 0) {
        uVar2 = (uint)*(byte *)(iVar1 + 0x44);
      }
      if (iVar1 != 0 && uVar2 != 0) {
        *(undefined1 *)(iVar1 + 0x44) = 0;
      }
    }
    else {
      (**(code **)(*param_1 + 0x4c))(param_1);
    }
    *(short *)(param_1[0x105] + 0x28) = (short)param_1[0x106];
  }
  return;
}

