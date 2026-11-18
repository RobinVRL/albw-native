#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003C8B84(int *param_1);

// USA 0040F54C <- EU 0040F52C [EDITED REGION: check by hand] (Ghidra, non-matching)

int func_0040F54C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x34);
  piVar1 = (int *)(*(uint *)(*(int *)(param_1 + 0x34) + 4) & 0xfffffffe);
  if (*(char *)(iVar3 + 0x1c) == '\0') {
    iVar3 = func_003C8B84(piVar1);
    iVar2 = 1;
    if (iVar3 < 0) {
      func_0010AC24(iVar3,0x40f578);
    }
  }
  else {
    iVar2 = func_003C8B84(piVar1);
    *(int *)(iVar3 + 0x18) = iVar2;
    iVar2 = (iVar2 >> 0x1f) + 1;
    if (iVar2 == 0) {
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        (**(code **)(param_1 + 0x48))(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18));
      }
    }
  }
  return iVar2;
}

