#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A3700(int param_1);

// USA 004A19EC <- EU 004A19C4 (Ghidra, non-matching)

void func_004A19EC(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  
  iVar3 = *(int *)(param_2 + 0x50);
  iVar1 = *(int *)(param_2 + 0x48) - iVar3;
  while (iVar2 = iVar1, iVar2 != (param_2 + 0x44) - *(int *)(param_2 + 0x50)) {
    iVar1 = *(int *)(iVar2 + iVar3 + 4) - iVar3;
    if (*(int **)(iVar2 + 0x14) == param_1) {
      *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar2);
      *(undefined4 *)(iVar2 + 0x18) = 0;
      func_0010F1F8((int *)(*(int *)(param_2 + 0x50) + iVar2),in_s0);
      *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + -1;
    }
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_2 + 0x58);
    if ((iVar3 != 0) && (iVar2 = (int)*(short *)(iVar1 + 8), iVar2 < *(short *)(iVar1 + 10) + 1)) {
      do {
        iVar1 = iVar3 + iVar2 * 0x10;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
      } while (iVar2 < *(short *)(*param_1 + 10) + 1);
    }
    *param_1 = 0;
  }
  return;
}

