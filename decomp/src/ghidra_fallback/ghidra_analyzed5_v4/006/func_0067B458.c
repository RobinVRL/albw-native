#include "ghidra_types.h"

extern float func_003E1A24(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5);

// USA 0067B458 <- EU 0067B430 (Ghidra, non-matching)

void func_0067B458(int param_1,float fparam_0)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_fpscr;
  int iVar6;
  float fVar7;
  
  pfVar4 = *(float **)(param_1 + 0x20);
  pfVar5 = pfVar4 + (uint)*(ushort *)(param_1 + 0xe) * 3 + -3;
  pfVar3 = pfVar4;
  if ((*pfVar4 <= fparam_0) &&
     (uVar1 = in_fpscr & 0xfffffff | (uint)(*pfVar5 == fparam_0) << 0x1e |
              (uint)(fparam_0 <= *pfVar5) << 0x1d, bVar2 = (byte)(uVar1 >> 0x18), pfVar3 = pfVar5,
     (bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6))) {
    fVar7 = (float)VectorSignedToFloat(*(ushort *)(param_1 + 0xe) - 1,(byte)(uVar1 >> 0x15) & 3);
    iVar6 = VectorFloatToUnsigned(*(float *)(param_1 + 0x1c) * fVar7 * fparam_0,3);
    pfVar3 = pfVar4 + iVar6 * 3;
    pfVar4 = pfVar3;
    if (*pfVar3 <= fparam_0) {
      do {
        pfVar3 = pfVar4;
        pfVar4 = pfVar3 + 3;
      } while (pfVar3[3] <= fparam_0);
    }
    else {
      do {
        pfVar3 = pfVar3 + -3;
      } while (fparam_0 < *pfVar3);
    }
  }
  fVar7 = *pfVar3;
  if (fVar7 == fparam_0 || pfVar3 == pfVar5) {
    fVar7 = pfVar3[1];
  }
  else {
    fVar7 = func_003E1A24(pfVar3[1],pfVar3[2],pfVar3[4],pfVar3[5],fparam_0 - fVar7,pfVar3[3] - fVar7
                         );
  }
  return;
}

