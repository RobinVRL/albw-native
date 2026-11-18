#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E8A0(int param_1);
extern int func_0053FD30(int param_1,int param_2);

// USA 00291C28 <- EU 00291C50 (Ghidra, non-matching)

undefined4 func_00291C28(int param_1,undefined1 *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  bVar2 = func_0052E8A0(*(int *)(iVar3 + 0x10));
  if (bVar2) {
    uVar4 = 0;
  }
  else {
    iVar5 = func_0053FD30(iVar3,0);
    uVar4 = 0;
    if ((iVar5 != 0) && (iVar5 = func_002D55D0(*(int *)(iVar3 + 0x48),0x85), uVar4 = 0, iVar5 != 0))
    {
      *(undefined4 *)(iVar5 + 8) = param_3;
      *(undefined1 *)(iVar5 + 5) = 0;
      sVar1 = *(short *)(param_2 + 8);
      uVar4 = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(iVar3 + 0x154) = *param_2;
      *(undefined4 *)(iVar3 + 0x158) = uVar4;
      *(short *)(iVar3 + 0x15c) = sVar1;
      uVar4 = 1;
      *(char *)(iVar3 + 0x15e) = (char)(sVar1 >> 7) + '\x01';
    }
  }
  return uVar4;
}

