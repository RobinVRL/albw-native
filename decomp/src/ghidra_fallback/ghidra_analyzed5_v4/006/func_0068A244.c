#include "ghidra_types.h"

extern float DAT_0068a32c;
extern float DAT_0068a330;
extern float DAT_0068a334;
extern float DAT_0068a338;
extern float DAT_0068a33c;

// USA 0068A244 <- EU 0068A21C (Ghidra, non-matching)
// GLOBAL DAT_0068a32c float
// GLOBAL DAT_0068a330 float
// GLOBAL DAT_0068a334 float
// GLOBAL DAT_0068a338 float
// GLOBAL DAT_0068a33c float

void func_0068A244(int param_1,float *param_2,float fparam_0)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (uint)((short)(ushort)*(byte *)(param_1 + 3) * 0xab) >> 9;
  if (fparam_0 <= *param_2) {
    fVar4 = param_2[1];
  }
  else {
    if (fparam_0 < param_2[(uVar1 - 1) * 3]) {
      iVar2 = 0;
      if (uVar1 != 0) {
        do {
          if (fparam_0 < param_2[iVar2 * 3 + 3]) {
            pfVar3 = param_2 + iVar2 * 3;
            fVar5 = pfVar3[3] - *pfVar3;
            fVar4 = (fparam_0 - *pfVar3) / fVar5;
            fVar6 = fVar4 * fVar4 * fVar4;
            return;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar1);
      }
      return;
    }
    fVar4 = (param_2 + (uVar1 - 1) * 3)[1];
  }
  return;
}

