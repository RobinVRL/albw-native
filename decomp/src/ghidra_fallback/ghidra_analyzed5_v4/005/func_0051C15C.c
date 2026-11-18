#include "ghidra_types.h"


// USA 0051C15C <- EU 0051C134 (Ghidra, non-matching)

void func_0051C15C(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 8))(param_2);
  iVar3 = param_2[1];
  (**(code **)(*param_2 + 8))(param_2);
  iVar2 = 0;
  do {
    if (*(short *)(param_2[1] + iVar2 * 2) == 0) {
      if (iVar2 < 0x40001) goto LAB_0051c1a4;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_0051c1a4:
  *(int *)(param_1 + 0x30) = iVar3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(int *)(param_1 + 0x38) = iVar2 << 1;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x74);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(iVar2 + 0x74) = 0xffffffff;
    *(int *)(iVar2 + 0x68) = iVar3;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
  }
  return;
}

