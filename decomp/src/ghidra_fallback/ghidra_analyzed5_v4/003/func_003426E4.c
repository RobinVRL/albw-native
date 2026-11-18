#include "ghidra_types.h"

extern undefined4 DAT_00342730;
extern float DAT_00342734;
extern float DAT_00342738;
extern float DAT_0034273c;

// USA 003426E4 <- EU 003426C0 (Ghidra, non-matching)
// GLOBAL DAT_00342730 undefined4
// GLOBAL DAT_00342734 float
// GLOBAL DAT_00342738 float
// GLOBAL DAT_0034273c float

void func_003426E4(int param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = *(int *)(param_1 + 0x44);
  if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
    bVar1 = *(byte *)(param_1 + 0x324);
    if (((bVar1 & 1) == 0) || ((fVar3 = DAT_00342734, (bVar1 & 2) != 0 && ((bVar1 & 4) == 0)))) {
      fVar3 = *(float *)(param_1 + 0x15c);
    }
    fVar3 = *(float *)(iVar2 + 4) - fVar3 * DAT_00342738;
    *(float *)(iVar2 + 4) = fVar3;
    if (0xbeffffff < (uint)ALBW_AS_U32(fVar3)) {
      fVar3 = DAT_0034273c;
    }
    *(float *)(*(int *)(param_1 + 0x44) + 4) = fVar3;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = DAT_00342730;
  }
  return;
}

