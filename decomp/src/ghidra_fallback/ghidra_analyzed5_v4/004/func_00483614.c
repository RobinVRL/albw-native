#include "ghidra_types.h"

extern float DAT_00483664;
extern int DAT_00483668;
extern float DAT_0048366c;

// USA 00483614 <- EU 004835EC (Ghidra, non-matching)
// GLOBAL DAT_00483664 float
// GLOBAL DAT_00483668 int
// GLOBAL DAT_0048366c float

float func_00483614(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  fVar2 = DAT_0048366c;
  iVar1 = DAT_00483668;
  iVar4 = param_1 + 0xdc;
  iVar3 = 0;
  fVar5 = (float)VectorUnsignedToFloat
                           ((uint)*(ushort *)(param_1 + 0xe8),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (fVar5 - *(float *)(param_1 + 0xe4)) * DAT_00483664;
  do {
    if (iVar1 < (int)ALBW_AS_U32(fVar5)) {
      if ((int)ALBW_AS_U32(fVar5) < 0x3f000001) {
        *(undefined1 *)(iVar4 + iVar3) = 1;
      }
      else {
        *(undefined1 *)(iVar4 + iVar3) = 2;
      }
    }
    else {
      *(undefined1 *)(iVar4 + iVar3) = 0;
    }
    fVar5 = fVar5 * fVar2;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return fVar5;
}

