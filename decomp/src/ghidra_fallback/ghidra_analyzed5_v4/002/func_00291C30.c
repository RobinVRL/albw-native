#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E8A0(int param_1);
extern int func_0053FD30(int param_1,int param_2);

// USA 00291C30 <- EU 00291C58 (Ghidra, non-matching)

undefined4 func_00291C30(int param_1,undefined1 *param_2,undefined4 param_3)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar2 = func_0052E8A0(*(int *)(param_1 + 0x10));
  if (bVar2) {
    uVar3 = 0;
  }
  else {
    iVar4 = func_0053FD30(param_1,0);
    uVar3 = 0;
    if ((iVar4 != 0) &&
       (iVar4 = func_002D55D0(*(int *)(param_1 + 0x48),0x85), uVar3 = 0, iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 8) = param_3;
      *(undefined1 *)(iVar4 + 5) = 0;
      sVar1 = *(short *)(param_2 + 8);
      uVar3 = *(undefined4 *)(param_2 + 4);
      *(undefined1 *)(param_1 + 0x154) = *param_2;
      *(undefined4 *)(param_1 + 0x158) = uVar3;
      *(short *)(param_1 + 0x15c) = sVar1;
      uVar3 = 1;
      *(char *)(param_1 + 0x15e) = (char)(sVar1 >> 7) + '\x01';
    }
  }
  return uVar3;
}

