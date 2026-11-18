#include "ghidra_types.h"

extern int func_0066133C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00286d20;
extern float DAT_00286d24;

// USA 00286C34 <- EU 00286C5C (Ghidra, non-matching)
// GLOBAL DAT_00286d20 float
// GLOBAL DAT_00286d24 float

undefined4 func_00286C34(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x414) + 0x14);
  fVar5 = *(float *)(iVar1 + 0x14);
  fVar3 = *(float *)(iVar1 + 8);
  fVar4 = *(float *)(iVar1 + 0xc);
  fVar2 = fVar5 - DAT_00286d20;
  if (fVar3 < fVar4) {
    if (fVar5 <= fVar4) {
      if (fVar2 < DAT_00286d24) {
        return 0;
      }
      if (fVar3 < fVar2) {
        return 0;
      }
      goto LAB_00286d00;
    }
    if ((fVar4 < fVar2) && (fVar2 <= fVar5)) goto LAB_00286d00;
    if (fVar2 < DAT_00286d24) {
      return 0;
    }
  }
  else if (fVar2 <= fVar4) {
    return 0;
  }
  if (fVar3 < fVar2) {
    return 0;
  }
LAB_00286d00:
  func_0066133C((undefined4 *)(param_1 + 0x418),0);
  return 1;
}

