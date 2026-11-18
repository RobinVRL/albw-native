#include "ghidra_types.h"

extern float DAT_002a28b4;
extern float DAT_002a28b8;
extern int DAT_002a28bc;
extern undefined4 DAT_002a28c0;
extern float DAT_002a28c4;
extern float DAT_002a28c8;

// USA 002A27C4 <- EU 002A27A0 (Ghidra, non-matching)
// GLOBAL DAT_002a28b4 float
// GLOBAL DAT_002a28b8 float
// GLOBAL DAT_002a28bc int
// GLOBAL DAT_002a28c0 undefined4
// GLOBAL DAT_002a28c4 float
// GLOBAL DAT_002a28c8 float

/* WARNING: Removing unreachable block (ram,0x002a2874) */
/* WARNING: Removing unreachable block (ram,0x002a2878) */
/* WARNING: Removing unreachable block (ram,0x002a2888) */

undefined4 func_002A27C4(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = DAT_002a28b8;
  fVar2 = DAT_002a28b4;
  pfVar3 = (float *)(param_1 + 0xb28);
  fVar7 = *pfVar3;
  if (param_2 == 0) {
    *(float *)(param_1 + 0xb2c) = DAT_002a28b8;
    cVar1 = *(char *)(param_1 + 0xb92);
    if ((cVar1 == '\x02') || (cVar1 != '\x03' && cVar1 != '\x04')) {
      *(undefined4 *)(param_1 + 0xb2c) = DAT_002a28c0;
    }
    fVar6 = *(float *)(param_1 + 0xb2c);
    fVar4 = (fVar6 - fVar7) * fVar2;
    if (fVar4 <= DAT_002a28c8) {
      fVar4 = -fVar4;
    }
    fVar5 = DAT_002a28c4;
    if ((DAT_002a28c4 <= fVar4) && (fVar5 = fVar4, fVar2 < fVar4)) {
      fVar5 = fVar2;
    }
    fVar5 = fVar7 + fVar5;
    if ((fVar6 <= fVar5) || (fVar5 < fVar7)) {
      *pfVar3 = fVar6;
      *(undefined4 *)(param_1 + 0xb28) = *(undefined4 *)(param_1 + 0xb2c);
      return 1;
    }
    *pfVar3 = fVar5;
  }
  else {
    fVar7 = fVar7 + (DAT_002a28b8 - fVar7) * DAT_002a28b4;
    *pfVar3 = fVar7;
    if (DAT_002a28bc <= (int)ALBW_AS_U32(fVar7)) {
      *(float *)(param_1 + 0xb28) = fVar4;
      return 1;
    }
  }
  return 0;
}

