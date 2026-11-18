#include "ghidra_types.h"

extern float DAT_004ed3dc;

// USA 004ED394 <- EU 004ED36C (Ghidra, non-matching)
// GLOBAL DAT_004ed3dc float

void * func_004ED394(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  do {
    puVar3 = (undefined4 *)(param_1 + 0xa0);
    if (uVar2 < 8) {
      puVar3 = puVar3 + uVar2;
    }
    uVar2 = uVar2 + 1;
    *puVar3 = 0;
  } while ((int)uVar2 < 8);
  uVar2 = 0;
  do {
    puVar3 = (undefined4 *)(param_1 + 0xc0);
    if (uVar2 < 8) {
      puVar3 = puVar3 + uVar2;
    }
    uVar2 = uVar2 + 1;
    *puVar3 = 0;
    fVar1 = DAT_004ed3dc;
  } while ((int)uVar2 < 8);
  *(float *)(param_1 + 0x80) = DAT_004ed3dc;
  *(bool *)(param_1 + 0x88) = *(float *)(param_1 + 0x84) != fVar1;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  return (void *)param_1;
}

