#include "ghidra_types.h"

extern float DAT_0027f588;
extern float DAT_0027f58c;
extern float DAT_0027f590;

// USA 0027F4D8 <- EU 0027F500 (Ghidra, non-matching)
// GLOBAL DAT_0027f588 float
// GLOBAL DAT_0027f58c float
// GLOBAL DAT_0027f590 float

void * func_0027F4D8(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = DAT_0027f588;
  iVar3 = *(int *)(*(int *)(param_1 + 0x4b8) + 0x14);
  if (*(int *)(param_1 + 0x4ec) == 0) {
    if (*(float *)(iVar3 + 8) == DAT_0027f588) goto LAB_0027f540;
    *(float *)(iVar3 + 8) = DAT_0027f588;
  }
  else {
    fVar1 = DAT_0027f590;
    if (*(int *)(param_1 + 0x4ec) != 1) {
      fVar1 = DAT_0027f58c;
    }
    if (*(float *)(iVar3 + 8) == fVar1) goto LAB_0027f540;
    *(float *)(iVar3 + 8) = fVar1;
  }
  *(undefined1 *)(iVar3 + 0x26) = 1;
LAB_0027f540:
  *(float *)(*(int *)(*(int *)(param_1 + 0x4b8) + 0x14) + 0x10) = fVar2;
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4ec);
  return (void *)param_1;
}

