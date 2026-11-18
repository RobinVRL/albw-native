#include "ghidra_types.h"

extern int func_0065F2D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_002423f0;

// USA 00242328 <- EU 00242328 (Ghidra, non-matching)
// GLOBAL DAT_002423f0 float

undefined4 func_00242328(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x418) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_002423f0) {
      if (*(float *)(iVar1 + 8) <= DAT_002423f0) goto LAB_0024237c;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_0024237c:
      iVar1 = *(int *)(param_1 + 0x428);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x42c))) {
        iVar2 = *(int *)(iVar1 + 0x20);
        if ((iVar2 != 0) &&
           ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
          *(undefined1 *)(iVar2 + 0x280) = 1;
        }
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
      }
      return func_0065F2D8((undefined4 *)(param_1 + 0x43c),0);
    }
  }
  return 0;
}

