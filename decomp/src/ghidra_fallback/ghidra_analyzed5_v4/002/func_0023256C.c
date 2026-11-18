#include "ghidra_types.h"


// USA 0023256C <- EU 0023256C (Ghidra, non-matching)

undefined4 func_0023256C(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  float *pfVar2;
  char *pcVar3;
  int iVar4;
  
  if (param_3 < *(uint *)(param_1 + 4)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xc) + param_3 * 4);
  }
  else {
    iVar4 = 0;
  }
  if (param_4 < *(uint *)(iVar4 + 0xb4)) {
    pcVar3 = (char *)(param_4 + *(int *)(iVar4 + 0xbc));
  }
  else {
    pcVar3 = *(char **)(iVar4 + 0xbc);
  }
  if (*pcVar3 == '\0') {
    uVar1 = 0;
  }
  else {
    pfVar2 = *(float **)(param_1 + 0x18);
    if (param_3 < *(uint *)(param_1 + 0x10)) {
      pfVar2 = pfVar2 + param_3 * 3;
    }
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) + *pfVar2;
    *(float *)(param_2 + 0x1c) = *(float *)(param_2 + 0x1c) + pfVar2[1];
    uVar1 = 1;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) + pfVar2[2];
  }
  return uVar1;
}

