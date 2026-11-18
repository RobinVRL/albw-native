#include "ghidra_types.h"

extern float DAT_0040ed54;
extern int DAT_0040ed58;

// USA 0040ECC8 <- EU 0040ECA8 (Ghidra, non-matching)
// GLOBAL DAT_0040ed54 float
// GLOBAL DAT_0040ed58 int

void * func_0040ECC8(int param_1,uint param_2,undefined4 param_3,float fparam_0)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0040ed54 <= fparam_0) << 0x1d;
  uVar4 = 0;
  uVar3 = *(ushort *)(DAT_0040ed58 + param_1) & param_2;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    fparam_0 = DAT_0040ed54;
  }
  do {
    if (param_2 == 0) {
      return (void *)param_1;
    }
    if ((uVar3 & 1) != 0) {
      iVar2 = param_1 + uVar4 * 0x10;
      if (*(int *)(iVar2 + 0x29f4) < *(int *)(iVar2 + 0x29f0)) {
        fVar5 = *(float *)(iVar2 + 0x29e8);
        fVar6 = (float)VectorSignedToFloat(*(int *)(iVar2 + 0x29f4),(byte)(uVar1 >> 0x15) & 3);
        fVar7 = (float)VectorSignedToFloat(*(int *)(iVar2 + 0x29f0),(byte)(uVar1 >> 0x15) & 3);
        fVar5 = ((*(float *)(iVar2 + 0x29ec) - fVar5) * fVar6) / fVar7 + fVar5;
      }
      else {
        fVar5 = *(float *)(iVar2 + 0x29ec);
      }
      *(float *)(iVar2 + 0x29e8) = fVar5;
      *(float *)(iVar2 + 0x29ec) = fparam_0;
      *(undefined4 *)(iVar2 + 0x29f0) = param_3;
      *(undefined4 *)(iVar2 + 0x29f4) = 0;
    }
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 >> 1;
  } while (uVar4 < 4);
  return (void *)param_1;
}

