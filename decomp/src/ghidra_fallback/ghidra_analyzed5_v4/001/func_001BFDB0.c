#include "ghidra_types.h"

extern int func_001E4158(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);

// USA 001BFDB0 <- EU 001BFDB0 (Ghidra, non-matching)

undefined4 func_001BFDB0(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar6 = *(int **)(param_1 + 0x4ac);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4b4) + *(char *)(param_1 + 0x49c) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x4b4) + *(char *)(param_1 + 0x49c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)((int)piVar6 + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)((int)piVar6) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x4a8);
  iVar2 = *(int *)(param_1 + 0x498) + 1;
  *(int *)(param_1 + 0x498) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_001E4158(param_1,uVar4,iVar5,piVar6);
  return func_004CEAF0(*(int *)(param_1 + 0x47c));
}

