#include "ghidra_types.h"

extern float func_003E1A24(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5);

// USA 0067B770 <- EU 0067B748 (Ghidra, non-matching)

void func_0067B770(int param_1,float fparam_0)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_fpscr;
  int iVar6;
  float fVar7;
  
  pfVar3 = *(float **)(param_1 + 0x20);
  pfVar5 = pfVar3 + (uint)*(ushort *)(param_1 + 0xe) * 4 + -4;
  pfVar4 = pfVar3;
  if ((*pfVar3 <= fparam_0) &&
     (uVar1 = in_fpscr & 0xfffffff | (uint)(*pfVar5 == fparam_0) << 0x1e |
              (uint)(fparam_0 <= *pfVar5) << 0x1d, bVar2 = (byte)(uVar1 >> 0x18), pfVar4 = pfVar5,
     (bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6))) {
    fVar7 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(uVar1 >> 0x15) & 3);
    iVar6 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar7 * fparam_0,3);
    pfVar4 = pfVar3 + iVar6 * 4;
    pfVar3 = pfVar4;
    if (*pfVar4 <= fparam_0) {
      do {
        pfVar4 = pfVar3;
        pfVar3 = pfVar4 + 4;
      } while (pfVar4[4] <= fparam_0);
    }
    else {
      do {
        pfVar4 = pfVar4 + -4;
      } while (fparam_0 < *pfVar4);
    }
  }
  fVar7 = *pfVar4;
  if (fVar7 == fparam_0 || pfVar4 == pfVar5) {
    fVar7 = pfVar4[1];
  }
  else {
    fVar7 = func_003E1A24(pfVar4[1],pfVar4[3],pfVar4[5],pfVar4[6],fparam_0 - fVar7,pfVar4[4] - fVar7
                         );
  }
  return;
}

