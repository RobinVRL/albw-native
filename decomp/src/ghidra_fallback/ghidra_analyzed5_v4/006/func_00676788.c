#include "ghidra_types.h"

extern int func_0010AC54(int param_1,int param_2,int param_3,undefined2 param_4,ushort param_5, undefined1 param_6);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 00676788 <- EU 00676760 (Ghidra, non-matching)

undefined4 func_00676788(int param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  bVar1 = *(byte *)(param_1 + 8);
  bVar2 = *(byte *)(param_1 + 9);
  uVar3 = *(undefined1 *)(param_1 + 10);
  piVar5 = (int *)(iVar6 + 0x58);
  func_0010C0C0(piVar5);
  uVar4 = func_0010AC54(iVar6,param_2,param_3,(ushort)bVar1,(ushort)bVar2,uVar3);
  func_0010C160(piVar5);
  return uVar4;
}

