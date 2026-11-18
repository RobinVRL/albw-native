#include "ghidra_types.h"

extern int func_004A3700(int param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FC570();
extern int func_004FC78C(int param_1,undefined2 param_2);

// USA 00353C7C <- EU 00353C58 (Ghidra, non-matching)

void func_00353C7C(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if ((uint)param_1[0x28a] < (uint)param_1[0x28b]) {
    if ((((short)param_1[0x142] < 1) && (iVar1 = param_1[0x2a0], iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x1c) == param_1[0x2a1])) {
      *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffbb | 8;
      func_004A3700(iVar1);
    }
  }
  else {
    iVar1 = param_1[0x2a0];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x2a1])) {
      iVar3 = *(int *)(iVar1 + 0x20);
      if ((iVar3 != 0) &&
         ((*(int *)(iVar1 + 0x24) == *(int *)(iVar3 + 0xc) && (0 < *(int *)(iVar3 + 4))))) {
        *(undefined1 *)(iVar3 + 0x280) = 1;
      }
      *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
    }
  }
  if (param_2 != 4) {
    uVar2 = (int)(short)param_1[0x142] - 1;
    bVar4 = uVar2 == 0xef;
    if (uVar2 < 0xf0) {
      bVar4 = (char)param_1[0x27c] == '\0';
    }
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x27c) = 1;
      func_004FC78C((int)param_1,0xf0);
      *(undefined1 *)(param_1 + 0x27b) = 1;
    }
    func_004FC570(param_1);
    func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
    func_004F9554(param_1[0x10c],7,0,1);
    func_004F9554(param_1[0x10d],7,0,1);
    param_1[0x167] = param_1[0x167] & 0xffffff7b;
  }
  return;
}

