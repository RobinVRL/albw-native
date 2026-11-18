#include "ghidra_types.h"

extern int func_004BC7BC(int param_1);
extern int func_004BCAE0(int param_1,int param_2);

// USA 004DFB2C <- EU 004DFB04 (Ghidra, non-matching)

undefined4 func_004DFB2C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x9dc);
  if (param_2 == 1 && iVar1 == 0) {
    return 0;
  }
  *(char *)(param_1 + 0x9e0) = (char)param_2;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x3d4);
    uVar3 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar1 + 0x368) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar1 + 0x36c) = uVar2;
    *(undefined4 *)(iVar1 + 0x370) = uVar3;
    uVar2 = *(undefined4 *)(param_1 + 0x3d4);
    uVar3 = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(iVar1 + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar1 + 0x3d4) = uVar2;
    *(undefined4 *)(iVar1 + 0x3d8) = uVar3;
    if (*(char *)(param_1 + 0x9e0) == '\x01') {
      func_004BCAE0(*(int *)(param_1 + 0x9dc),1);
    }
    else {
      func_004BC7BC(*(int *)(param_1 + 0x9dc));
    }
  }
  if (*(char *)(param_1 + 0x9e0) != '\0') {
    return func_004BC7BC(param_1);
  }
  return func_004BCAE0(param_1,1);
}

