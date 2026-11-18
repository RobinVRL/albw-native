#include "ghidra_types.h"


// USA 0069149C <- EU 00691474 (Ghidra, non-matching)

int func_0069149C(undefined4 param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
joined_r0x00691480:
  if (param_2 == 0) {
    return 0;
  }
  (**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_3 + 8))(param_3);
  iVar2 = param_3[1];
  (**(code **)(*(int *)(param_2 + 0x10) + 8))((int *)(param_2 + 0x10));
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar2 == iVar3) {
    return param_2;
  }
  iVar2 = 0;
  do {
    iVar1 = (int)*(char *)(param_3[1] + iVar2);
    if (iVar1 == 0) {
      param_4 = (uint)*(byte *)(iVar3 + iVar2);
    }
    if (iVar1 == 0 && param_4 == 0) {
      return param_2;
    }
    if (iVar1 == 0) {
LAB_0069151c:
      param_2 = *(int *)(param_2 + 4);
      goto joined_r0x00691480;
    }
    param_4 = (uint)*(char *)(iVar3 + iVar2);
    if (param_4 == 0) break;
    if (iVar1 < (int)param_4) goto LAB_0069151c;
    if ((int)param_4 < iVar1) break;
    iVar2 = iVar2 + 1;
    if (0x3ffff < iVar2) {
      return param_2;
    }
  } while( true );
  param_2 = *(int *)(param_2 + 8);
  goto joined_r0x00691480;
}

