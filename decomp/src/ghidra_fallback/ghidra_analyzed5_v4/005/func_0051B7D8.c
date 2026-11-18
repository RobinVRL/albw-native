#include "ghidra_types.h"

extern int func_001B6A48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);

// USA 0051B7D8 <- EU 0051B7B0 (Ghidra, non-matching)

void func_0051B7D8(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint uVar3;
  undefined4 uVar4;
  
  piVar1 = *(int **)(param_1 + 0xd4);
  if (piVar1 != (int *)0x0) {
    if (((*(char *)((int)piVar1 + 0xd) == '\0') && (*(char *)((int)piVar1 + 0xe) == '\0')) ||
       ((char)piVar1[0x25] == '\0')) {
      uVar4 = 0;
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = *(int *)(param_1 + 0x80);
      }
      if ((param_2 != 0 && iVar2 != 0) && (*(byte *)(iVar2 + 0x16c) != 0)) {
        func_001B6C2C(piVar1,(uint)*(byte *)(iVar2 + 0x16c),0,param_4);
        func_001B6A48(*(int **)(param_1 + 0xd4),extraout_r1,uVar4,param_4);
        *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x94) = 1;
        *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x8c) = 1;
        return;
      }
    }
    else {
      if (param_2 == 1) {
        uVar3 = piVar1[6] & 0xfffffffb;
      }
      else {
        uVar3 = piVar1[6] | 4;
      }
      piVar1[6] = uVar3;
      *(char *)(*(int *)(param_1 + 0xd4) + 0x8c) = (char)param_2;
    }
  }
  return;
}

