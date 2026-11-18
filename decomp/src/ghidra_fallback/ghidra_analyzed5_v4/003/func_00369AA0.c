#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 00369AA0 <- EU 00369A7C (Ghidra, non-matching)

undefined4 func_00369AA0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  int *piVar8;
  uint in_fpscr;
  float fparam_0;
  
  bVar7 = 1;
  piVar6 = *(int **)(param_1 + 0x44);
  piVar8 = piVar6 + *(int *)(param_1 + 0x3c);
  if (piVar6 != piVar8) {
    do {
      iVar1 = *piVar6;
      piVar2 = (int *)(*(int *)(iVar1 + 0x28) + *(char *)(iVar1 + 0x10) * 8);
      uVar4 = *(uint *)(*(int *)(iVar1 + 0x28) + *(char *)(iVar1 + 0x10) * 8 + 4);
      piVar5 = (int *)(*(int *)(iVar1 + 0x20) + ((int)uVar4 >> 1));
      if ((uVar4 & 1) != 0) {
        piVar2 = (int *)(*piVar2 + *piVar5);
      }
      (*(code *)*piVar2)(piVar5);
      iVar3 = *(int *)(iVar1 + 0xc) + 1;
      *(int *)(iVar1 + 0xc) = iVar3;
      if (*(int *)(iVar1 + 0x1c) != 0) {
        fparam_0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        func_00352210(*(int *)(iVar1 + 0x1c),1,fparam_0);
      }
      piVar2 = piVar6 + 1;
      bVar7 = bVar7 & *(byte *)(*piVar6 + 0x44);
      piVar6 = piVar2;
    } while (piVar2 != piVar8);
    if (bVar7 == 0) {
      return 0;
    }
  }
  return func_0012C718(param_1);
}

