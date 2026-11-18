#include "ghidra_types.h"

extern int *DAT_004cd48c;
extern float DAT_004cd490;
extern int DAT_004cd494;
extern int DAT_004cd498;
extern int DAT_004cd49c;
extern float DAT_004cd4a0;

// USA 004CD45C <- EU 004CD434 (Ghidra, non-matching)
// GLOBAL DAT_004cd48c int *
// GLOBAL DAT_004cd490 float
// GLOBAL DAT_004cd494 int
// GLOBAL DAT_004cd498 int
// GLOBAL DAT_004cd49c int
// GLOBAL DAT_004cd4a0 float

undefined4 func_004CD45C(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  
  iVar1 = *DAT_004cd48c;
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x18);
  }
  fVar3 = DAT_004cd490;
  if (iVar1 != 0 && iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x1a4);
    if (DAT_004cd494 < *(int *)(iVar2 + 0x1a4)) {
      iVar1 = DAT_004cd494;
    }
    if (iVar1 < DAT_004cd498) {
      iVar1 = DAT_004cd498;
    }
    fVar3 = (float)VectorSignedToFloat(iVar1 + DAT_004cd49c,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * DAT_004cd4a0;
  }
  *(float *)(param_1 + 0x20) = fVar3;
  return (undefined4)param_1;
}

