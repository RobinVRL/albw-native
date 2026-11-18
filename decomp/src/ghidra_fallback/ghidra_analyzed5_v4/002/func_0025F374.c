#include "ghidra_types.h"

extern float DAT_0025f438;

// USA 0025F374 <- EU 0025F39C (Ghidra, non-matching)
// GLOBAL DAT_0025f438 float

void * func_0025F374(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x195) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 0x14);
  fVar2 = *(float *)(iVar1 + 8);
  fVar3 = *(float *)(iVar1 + 0xc);
  if (fVar2 < fVar3) {
    if (*(float *)(iVar1 + 0x14) <= fVar3) {
      if (fVar2 < DAT_0025f438) {
        return (void *)param_1;
      }
      goto LAB_0025f42c;
    }
    if ((fVar3 < DAT_0025f438) && (DAT_0025f438 <= *(float *)(iVar1 + 0x14))) goto LAB_0025f42c;
  }
  else if (DAT_0025f438 <= fVar3) {
    return (void *)param_1;
  }
  if (fVar2 < DAT_0025f438) {
    return (void *)param_1;
  }
LAB_0025f42c:
  *(undefined1 *)(param_1 + 0x195) = 1;
  return (void *)param_1;
}

