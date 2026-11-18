#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int DAT_0054a618;

// USA 0054A5E4 <- EU 0054A5BC (Ghidra, non-matching)
// GLOBAL DAT_0054a618 int

undefined4 func_0054A5E4(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((*(char *)(param_1 + 0x494) == '\0') &&
     (pfVar1 = (float *)func_00520FC0(), fVar3 = *(float *)(param_1 + 0x3d0) - *pfVar1,
     fVar5 = *(float *)(param_1 + 0x3d4) - pfVar1[1],
     fVar4 = *(float *)(param_1 + 0x3d8) - pfVar1[2],
     (int)ALBW_AS_U32((fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4)) < DAT_0054a618)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

