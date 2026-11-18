#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00456C90 <- EU 00456C68 (Ghidra, non-matching)

undefined4 func_00456C90(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  
  uVar4 = *(uint *)(*(int *)(param_1 + 0x198) + *(char *)(param_1 + 0x180) * 8 + 4);
  pcVar2 = *(code **)(*(int *)(param_1 + 0x198) + *(char *)(param_1 + 0x180) * 8);
  if ((uVar4 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(*(int *)(param_1 + 400) + ((int)uVar4 >> 1)));
  }
  (*pcVar2)((int)(*(int *)(param_1 + 400)) + ((int)uVar4 >> 1));
  iVar1 = *(int *)(param_1 + 0x17c) + 1;
  *(int *)(param_1 + 0x17c) = iVar1;
  if (*(int *)(param_1 + 0x18c) != 0) {
    fVar5 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x18c),1,fVar5);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x1bc) + *(char *)(param_1 + 0x1a4) * 8);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x1bc) + *(char *)(param_1 + 0x1a4) * 8 + 4);
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x1b4) + ((int)uVar4 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar1 = *(int *)(param_1 + 0x1a0) + 1;
  *(int *)(param_1 + 0x1a0) = iVar1;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    fVar5 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    return func_00352210(*(int *)(param_1 + 0x1b0),1,fVar5);
  }
  return 0;
}

