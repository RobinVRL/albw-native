#include "ghidra_types.h"

extern float DAT_0068a160;
extern float DAT_0068a164;
extern float DAT_0068a168;
extern float DAT_0068a16c;
extern float DAT_0068a170;

// USA 0068A080 <- EU 0068A058 (Ghidra, non-matching)
// GLOBAL DAT_0068a160 float
// GLOBAL DAT_0068a164 float
// GLOBAL DAT_0068a168 float
// GLOBAL DAT_0068a16c float
// GLOBAL DAT_0068a170 float

void func_0068A080(int param_1,float *param_2,float fparam_0)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
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
            fVar4 = (fparam_0 - *pfVar3) / (pfVar3[3] - *pfVar3);
            fVar5 = fVar4 * fVar4 * fVar4;
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

