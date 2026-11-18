#include "ghidra_types.h"

extern int func_00362860(int param_1);
extern int *DAT_00363718;
extern float DAT_0036371c;
extern float DAT_00363720;
extern float DAT_00363724;
extern float DAT_00363728;

// USA 0036365C <- EU 00363638 (Ghidra, non-matching)
// GLOBAL DAT_00363718 int *
// GLOBAL DAT_0036371c float
// GLOBAL DAT_00363720 float
// GLOBAL DAT_00363724 float
// GLOBAL DAT_00363728 float

/* WARNING: Removing unreachable block (ram,0x003636d0) */
/* WARNING: Removing unreachable block (ram,0x003636d4) */
/* WARNING: Removing unreachable block (ram,0x003636e4) */

undefined4 func_0036365C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = DAT_00363728;
  fVar1 = DAT_00363724;
  fVar3 = DAT_00363720;
  fVar4 = DAT_0036371c;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(int *)(param_1 + 0x24) = *DAT_00363718 + *(int *)(param_1 + 0x24);
    fVar5 = *(float *)(param_1 + 0x28);
    fVar2 = -fVar5 * fVar2;
    if (fVar2 <= fVar4) {
      fVar2 = -fVar2;
    }
    if ((fVar3 <= fVar2) && (fVar3 = fVar2, fVar1 < fVar2)) {
      fVar3 = fVar1;
    }
    fVar3 = fVar5 + fVar3;
    if ((fVar4 <= fVar3) || (fVar3 < fVar5)) {
      *(float *)(param_1 + 0x28) = fVar4;
    }
    else {
      *(float *)(param_1 + 0x28) = fVar3;
    }
    if (fVar4 < *(float *)(param_1 + 0x28)) {
      fVar4 = *(float *)(param_1 + 0x28);
    }
    *(float *)(param_1 + 0x28) = fVar4;
  }
  return func_00362860(param_1);
}

