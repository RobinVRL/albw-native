#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int *DAT_0036a1e4;

// USA 0036A0F0 <- EU 0036A0CC (Ghidra, non-matching)
// GLOBAL DAT_0036a1e4 int *

undefined4 func_0036A0F0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  float fparam_0;
  
  fVar6 = *(float *)(param_1 + 0x74);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x58) + *(char *)(param_1 + 0x40) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x58) + *(char *)(param_1 + 0x40) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x50) + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x50)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar2;
  if (*(int *)(param_1 + 0x4c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x4c),1,fparam_0);
  }
  if ((int)fVar6 != (int)*(float *)(param_1 + 0x74)) {
    *(int *)(*DAT_0036a1e4 + 0x338) = (int)*(float *)(param_1 + 0x74);
  }
  iVar2 = **(int **)(param_1 + 100);
  if (iVar2 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x28) + *(char *)(iVar2 + 0x10) * 8);
    uVar1 = *(uint *)(*(int *)(iVar2 + 0x28) + *(char *)(iVar2 + 0x10) * 8 + 4);
    if ((uVar1 & 1) != 0) {
      piVar5 = (int *)(*piVar5 + *(int *)(*(int *)(iVar2 + 0x20) + ((int)uVar1 >> 1)));
    }
    (*(code *)*piVar5)();
    iVar3 = *(int *)(iVar2 + 0xc) + 1;
    *(int *)(iVar2 + 0xc) = iVar3;
    if (*(int *)(iVar2 + 0x1c) != 0) {
      fVar6 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      return func_00352210(*(int *)(iVar2 + 0x1c),1,fVar6);
    }
  }
  return 0;
}

