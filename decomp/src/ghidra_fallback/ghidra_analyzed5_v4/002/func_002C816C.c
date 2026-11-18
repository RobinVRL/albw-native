#include "ghidra_types.h"

extern int func_002C81E8(int param_1);
extern int *DAT_002c81bc;
extern int DAT_002c81c0;

// USA 002C816C <- EU 002C8148 (Ghidra, non-matching)
// GLOBAL DAT_002c81bc int *
// GLOBAL DAT_002c81c0 int

undefined4 func_002C816C(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(short *)(param_1 + 0x2e) == 0) {
    fVar2 = *(float *)(param_1 + 0x3d0) - **(float **)(*DAT_002c81bc + 0x1c);
    fVar3 = *(float *)(param_1 + 0x3d8) - (*(float **)(*DAT_002c81bc + 0x1c))[2];
    if ((int)ALBW_AS_U32((fVar2 * fVar2 + fVar3 * fVar3)) < DAT_002c81c0) {
      iVar1 = *(int *)(param_1 + 0x48c) + 1;
      *(int *)(param_1 + 0x48c) = iVar1;
      if (0x28 < iVar1) {
        return func_002C81E8(param_1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x48c) = 0;
    }
  }
  return 0;
}

