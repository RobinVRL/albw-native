#include "ghidra_types.h"

extern float DAT_0034c54c;
extern float DAT_0034c550;
extern float DAT_0034c554;

// USA 0034C4C0 <- EU 0034C49C (Ghidra, non-matching)
// GLOBAL DAT_0034c54c float
// GLOBAL DAT_0034c550 float
// GLOBAL DAT_0034c554 float

void func_0034C4C0(int param_1,uint param_2,int param_3,float fparam_0)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  fVar4 = fparam_0;
  if ((int)param_2 < (int)*(uint *)(param_1 + 0x20)) {
    if (param_2 < *(uint *)(param_1 + 0x20)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x28) + param_2 * 4);
    }
    else {
      iVar2 = 0;
    }
    if (param_3 < 9) {
      if (param_3 < -1) {
        param_3 = -1;
      }
      uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0034c54c <= fparam_0) << 0x1d;
      fVar4 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x15) & 3);
      fVar3 = DAT_0034c54c;
      if ((SUB41(uVar1 >> 0x1d,0)) && (fVar3 = fparam_0, DAT_0034c550 < fparam_0)) {
        fVar3 = DAT_0034c550;
      }
      fVar4 = fVar4 + fVar3;
      fVar3 = DAT_0034c554 + fVar4 * DAT_0034c554;
    }
    else {
      fVar4 = DAT_0034c54c;
      if ((DAT_0034c54c <= fparam_0) && (fVar4 = fparam_0, DAT_0034c550 < fparam_0)) {
        fVar4 = DAT_0034c550;
      }
      fVar3 = fVar4 * DAT_0034c554;
    }
    *(float *)(*(int *)(iVar2 + 0x7c) + ((uint)(*(int *)(iVar2 + 0x74) << 0x1e) >> 0x19) + 4) =
         fVar3;
    *(byte *)(iVar2 + 0x9e) = *(byte *)(iVar2 + 0x9e) & 0xfb;
  }
  return;
}

