#include "ghidra_types.h"

extern float DAT_0041d728;
extern float DAT_0041d72c;
extern float DAT_0041d730;

// USA 0041D698 <- EU 0041D678 (Ghidra, non-matching)
// GLOBAL DAT_0041d728 float
// GLOBAL DAT_0041d72c float
// GLOBAL DAT_0041d730 float

undefined4 func_0041D698(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 < uVar2) {
    if (uVar3 + param_2 <= uVar2) {
      *(uint *)(param_1 + 0x10) = uVar3 + param_2;
      return (undefined4)param_1;
    }
    param_2 = param_2 - (uVar2 - uVar3);
    *(uint *)(param_1 + 0x10) = uVar2;
  }
  fVar6 = DAT_0041d72c;
  fVar5 = *(float *)(param_1 + 4);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar5 < DAT_0041d728) << 0x1f |
          (uint)(fVar5 == DAT_0041d728) << 0x1e;
  bVar1 = (byte)(uVar2 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar5) || NAN(DAT_0041d728))) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      fVar4 = (float)VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0xe),(byte)(uVar2 >> 0x15) & 3)
      ;
      *(float *)(param_1 + 0x14) = fVar4 * fVar6;
    }
    fVar6 = (float)VectorSignedToFloat(param_2,(byte)(uVar2 >> 0x15) & 3);
    fVar6 = *(float *)(param_1 + 0x14) + fVar5 * fVar6 * DAT_0041d730;
    *(float *)(param_1 + 0x14) = fVar6;
    if ((int)ALBW_AS_U32(fVar6) < 0x3f800000) {
      *(undefined1 *)(param_1 + 0x1d) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
    fVar5 = (float)VectorSignedToFloat((int)fVar6,(byte)(uVar2 >> 0x15) & 3);
    *(float *)(param_1 + 0x14) = fVar6 - fVar5;
  }
  return (undefined4)param_1;
}

