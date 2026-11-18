#include "ghidra_types.h"

extern int func_004077E4(int param_1,float *param_2);

// USA 002BFF00 <- EU 002BFEDC (Ghidra, non-matching)

uint func_002BFF00(int *param_1,int param_2,int param_3,float *param_4)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)((int)param_1 + 0x16);
  *(ushort *)((int)param_1 + 0x16) = uVar1 & 0xffcf;
  iVar2 = *param_1;
  if (((iVar2 == 0) || (*(char *)(iVar2 + 0xd) != '\x03')) || (*(char *)(iVar2 + 0xe) != '\x03')) {
    param_1[2] = 0;
    *(ushort *)((int)param_1 + 0x16) = uVar1 & 0xffc7;
    return 0;
  }
  if (((uVar1 & 0x40) == 0) || (param_1[1] == 0)) {
    return (uVar1 & 8) >> 3;
  }
  if (param_2 == 0) {
    if ((uVar1 & 8) != 0) {
      *(ushort *)((int)param_1 + 0x16) = uVar1 & 0xffcf | 0x10;
    }
    param_1[2] = 0;
    *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) & 0xfff7;
    goto LAB_002bfff4;
  }
  iVar2 = func_004077E4(param_1[1],param_4);
  uVar1 = *(ushort *)((int)param_1 + 0x16);
  if (iVar2 == 0) {
    if ((uVar1 & 8) != 0) {
      *(ushort *)((int)param_1 + 0x16) = uVar1 | 0x20;
    }
    param_1[2] = 0;
    uVar1 = *(ushort *)((int)param_1 + 0x16) & 0xfff7;
  }
  else {
    if ((uVar1 & 8) != 0) {
      param_1[2] = param_1[2] + 1;
      goto LAB_002bfff4;
    }
    if (param_3 == 0) goto LAB_002bfff4;
    uVar1 = uVar1 | 8;
    param_1[2] = 0;
  }
  *(ushort *)((int)param_1 + 0x16) = uVar1;
LAB_002bfff4:
  return (*(ushort *)((int)param_1 + 0x16) & 8) >> 3;
}

