#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0056A10C(int param_1);

// USA 00257EA0 <- EU 00257EC8 (Ghidra, non-matching)

void func_00257EA0(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x30) + *(char *)(param_1 + 0x18) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x30) + *(char *)(param_1 + 0x18) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x28) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x28)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x24),1,fparam_0);
  }
  if ((*(char *)(param_1 + 0x65) == '\0') ||
     ((*(int *)(param_1 + 0xc) != 0 && (iVar2 = func_0056A10C(*(int *)(param_1 + 0xc)), iVar2 != 0))
     )) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  return;
}

