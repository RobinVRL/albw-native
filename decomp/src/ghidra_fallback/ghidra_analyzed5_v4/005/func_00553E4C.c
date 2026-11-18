#include "ghidra_types.h"

extern int *DAT_00553e98;

// USA 00553E4C <- EU 00553E24 (Ghidra, non-matching)
// GLOBAL DAT_00553e98 int *

int func_00553E4C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0x133) != '\0') {
    iVar1 = *(int *)(*DAT_00553e98 + 0x8c);
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x124);
  }
  if ((param_2 != 0 && iVar1 != iVar2) && (-1 < *(int *)(param_1 + 0x110))) {
    fVar4 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 / *(float *)(param_1 + 0x120);
    if ((int)ALBW_AS_U32(fVar4) < 0x3f800000) {
      fVar3 = (float)VectorSignedToFloat(iVar1 - iVar2,(byte)(in_fpscr >> 0x15) & 3);
      iVar1 = (int)(fVar3 * fVar4) + iVar2;
    }
  }
  return iVar1;
}

