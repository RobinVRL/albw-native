#include "ghidra_types.h"


// USA 0041F270 <- EU 0041F250 (Ghidra, non-matching)

void func_0041F270(int *param_1,int param_2,undefined4 *param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x28);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined1 *)(iVar3 + 6) = 1;
    *(undefined1 *)(iVar3 + 0x41) = param_4;
    if (param_3 == (undefined4 *)0x0) {
      *(byte *)(iVar3 + 0x40) = *(byte *)(iVar3 + 0x40) & 0xfe;
    }
    else {
      *(byte *)(iVar3 + 0x40) = *(byte *)(iVar3 + 0x40) | 1;
      *(undefined4 *)(iVar3 + 0x24) = *param_3;
      *(undefined4 *)(iVar3 + 0x28) = param_3[1];
      uVar2 = param_3[3];
      *(undefined4 *)(iVar3 + 0x2c) = param_3[2];
      *(undefined4 *)(iVar3 + 0x30) = uVar2;
      uVar2 = param_3[5];
      *(undefined4 *)(iVar3 + 0x34) = param_3[4];
      *(undefined4 *)(iVar3 + 0x38) = uVar2;
      *(short *)(iVar3 + 0x3e) = (short)(int)ALBW_AS_F32(param_3[6]);
    }
    iVar4 = *(int *)(iVar3 + 0x10);
    if (iVar4 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,iVar4,iVar4 + *(int *)(iVar3 + 0x18) * 4,iVar3)
      ;
      *(int *)(iVar3 + 0xc) = iVar1 - iVar4 >> 2;
    }
  }
  return;
}

