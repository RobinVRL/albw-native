#include "ghidra_types.h"

extern int func_00149178(int param_1);
extern int func_0014921C(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern float DAT_003bb11c;

// USA 003BB06C <- EU 003BB048 (Ghidra, non-matching)
// GLOBAL DAT_003bb11c float

undefined4 func_003BB06C(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x8dc) + 0x14);
  fVar3 = *(float *)(iVar1 + 8);
  fVar4 = *(float *)(iVar1 + 0xc);
  if (fVar3 < fVar4) {
    if (fVar4 < *(float *)(iVar1 + 0x14)) {
      if (((DAT_003bb11c <= fVar4) || (*(float *)(iVar1 + 0x14) < DAT_003bb11c)) &&
         (fVar3 < DAT_003bb11c)) {
        return 0;
      }
    }
    else if (fVar3 < DAT_003bb11c) {
      return 0;
    }
  }
  else {
    if (DAT_003bb11c <= fVar4) {
      return 0;
    }
    if (fVar3 < DAT_003bb11c) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3c) = 1;
  iVar1 = func_0014921C(*(undefined4 *)(iVar2 + 0x2cc),(undefined4 *)(iVar2 + 0x3d0),
                        *(undefined4 *)(iVar2 + 1000),(uint)('\x01' < *(char *)(param_1 + 0xc)));
  if (iVar1 == 0) {
    return 0;
  }
  return func_00149178(iVar1);
}

