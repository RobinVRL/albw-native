#include "ghidra_types.h"

extern float DAT_00270898;
extern float DAT_0027089c;

// USA 002707A4 <- EU 002707CC (Ghidra, non-matching)
// GLOBAL DAT_00270898 float
// GLOBAL DAT_0027089c float

float func_002707A4(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_0027089c;
  fVar5 = DAT_00270898;
  uVar2 = 0;
  do {
    piVar3 = (int *)(param_1 + 0x14);
    if (uVar2 < 2) {
      piVar3 = piVar3 + uVar2;
    }
    if (*piVar3 != 0) {
      piVar3 = (int *)(param_1 + 0x14);
      if (uVar2 < 2) {
        piVar3 = piVar3 + uVar2;
      }
      if (*(char *)(*piVar3 + 0x35) != '\0') {
        piVar3 = (int *)(param_1 + 0x14);
        if (uVar2 < 2) {
          piVar3 = piVar3 + uVar2;
        }
        iVar4 = *piVar3;
        if ((*(uint *)(iVar4 + 0x1c) <= *(uint *)(iVar4 + 0x18)) ||
           (*(char *)(iVar4 + 0x13) != '\0')) {
          piVar3 = (int *)(param_1 + 0x14);
          if (uVar2 < 2) {
            piVar3 = piVar3 + uVar2;
          }
          iVar4 = *piVar3;
          *(undefined1 *)(iVar4 + 0x13) = 0;
          *(int *)(iVar4 + 0x1c) = param_2;
          if (param_2 == 0) {
            *(float *)(iVar4 + 0x20) = fVar5;
          }
          else {
            fVar6 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
            *(float *)(iVar4 + 0x20) = fVar1 / fVar6;
          }
          *(undefined4 *)(iVar4 + 0x18) = 0;
          *(undefined1 *)(iVar4 + 0x34) = 1;
        }
      }
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return fVar5;
}

