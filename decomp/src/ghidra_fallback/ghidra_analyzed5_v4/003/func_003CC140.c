#include "ghidra_types.h"

extern float DAT_003cc1a8;
extern float DAT_003cc1ac;
extern float DAT_003cc1b0;
extern int DAT_003cc1b4;
extern float DAT_003cc1b8;
extern float DAT_003cc1bc;

// USA 003CC140 <- EU 003CC11C (Ghidra, non-matching)
// GLOBAL DAT_003cc1a8 float
// GLOBAL DAT_003cc1ac float
// GLOBAL DAT_003cc1b0 float
// GLOBAL DAT_003cc1b4 int
// GLOBAL DAT_003cc1b8 float
// GLOBAL DAT_003cc1bc float

undefined4 func_003CC140(float fparam_0)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  if ((fparam_0 == DAT_003cc1a8) || ((uint)((int)ALBW_AS_U32(fparam_0) << 1) >> 0x18 == 0xff)) {
    return 0;
  }
  fVar4 = (fparam_0 + DAT_003cc1ac) * DAT_003cc1b0;
  fVar5 = DAT_003cc1a8;
  if (DAT_003cc1a8 <= fVar4) {
    bVar2 = SBORROW4((int)ALBW_AS_U32(fVar4),0x46000000);
    iVar1 = (int)ALBW_AS_U32(fVar4) + -0x46000000;
    fVar5 = DAT_003cc1bc;
    if ((int)ALBW_AS_U32(fVar4) < 0x46000000) {
      bVar2 = SBORROW4((int)ALBW_AS_U32(fVar4),DAT_003cc1b4);
      iVar1 = (int)ALBW_AS_U32(fVar4) - DAT_003cc1b4;
      fVar5 = fVar4;
    }
    if (iVar1 < 0 == bVar2) {
      uVar3 = VectorFloatToUnsigned(fVar5 - DAT_003cc1b8,3);
      return uVar3;
    }
  }
  uVar3 = VectorFloatToUnsigned(fVar5 + DAT_003cc1b8,3);
  return uVar3;
}

