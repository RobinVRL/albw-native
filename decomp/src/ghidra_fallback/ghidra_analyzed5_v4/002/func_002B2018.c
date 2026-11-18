#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);

// USA 002B2018 <- EU 002B1FF4 (Ghidra, non-matching)

bool func_002B2018(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  if ((*(byte *)((int)param_1 + 0x3a) & 1) != 0) {
    uVar1 = *(uint *)(param_1[7] + (char)param_1[1] * 8 + 4);
    piVar3 = (int *)(param_1[7] + (char)param_1[1] * 8);
    if ((uVar1 & 1) != 0) {
      piVar3 = (int *)(*piVar3 + *(int *)(param_1[5] + ((int)uVar1 >> 1)));
    }
    (*(code *)*piVar3)();
    iVar2 = *param_1;
    *param_1 = iVar2 + 1;
    if (param_1[4] != 0) {
      fparam_0 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(param_1[4],1,fparam_0);
    }
  }
  *(byte *)((int)param_1 + 0x3a) = *(byte *)((int)param_1 + 0x3a) | 1;
  return (char)param_1[1] != '\0';
}

