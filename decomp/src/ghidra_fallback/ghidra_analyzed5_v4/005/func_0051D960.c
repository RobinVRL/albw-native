#include "ghidra_types.h"

extern int func_0051DAA4(int param_1);
extern int DAT_0051d9d0;
extern float DAT_0051d9d4;
extern int DAT_0051d9d8;

// USA 0051D960 <- EU 0051D938 (Ghidra, non-matching)
// GLOBAL DAT_0051d9d0 int
// GLOBAL DAT_0051d9d4 float
// GLOBAL DAT_0051d9d8 int

bool func_0051D960(int param_1,int param_2)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar2 = (float *)func_0051DAA4(param_1);
  bVar1 = false;
  if ((pfVar2 != (float *)0x0) &&
     (fVar3 = *(float *)(param_1 + 0x3d0) - *pfVar2, fVar4 = *(float *)(param_1 + 0x3d8) - pfVar2[2]
     , bVar1 = (int)ALBW_AS_U32((fVar3 * fVar3 + fVar4 * fVar4)) <= DAT_0051d9d0, param_2 != 0)) {
    if (bVar1) {
      fVar3 = *(float *)(param_1 + 0x3d4) - pfVar2[1];
      if (fVar3 <= DAT_0051d9d4) {
        fVar3 = -fVar3;
      }
      if ((int)ALBW_AS_U32(fVar3) < DAT_0051d9d8) {
        return true;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

