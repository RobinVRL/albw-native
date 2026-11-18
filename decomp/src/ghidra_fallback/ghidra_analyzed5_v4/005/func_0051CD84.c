#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float DAT_0051ce3c;
extern float DAT_0051ce40;
extern float DAT_0051ce44;
extern float DAT_0051ce48;

// USA 0051CD84 <- EU 0051CD5C (Ghidra, non-matching)
// GLOBAL DAT_0051ce3c float
// GLOBAL DAT_0051ce40 float
// GLOBAL DAT_0051ce44 float
// GLOBAL DAT_0051ce48 float

float func_0051CD84(uint *param_1,float fparam_0)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  
  iVar3 = 0;
  uVar8 = (ulonglong)(uint)ALBW_AS_U32(DAT_0051ce3c);
  fVar5 = DAT_0051ce40;
  fVar7 = DAT_0051ce3c;
  do {
    fVar6 = fparam_0;
    uVar2 = func_00111A64(param_1);
    iVar3 = iVar3 + 1;
    fVar4 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 + fVar4 * fVar5 * fparam_0;
    fparam_0 = fVar6;
  } while (iVar3 < 3);
  fVar7 = fVar7 * DAT_0051ce44;
  fVar4 = ALBW_AS_F32(uVar8);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar4 <= fVar7) << 0x1d;
  fVar5 = fVar4;
  if ((SUB41(uVar2 >> 0x1d,0)) &&
     (uVar2 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar6) << 0x1f | (uint)(fVar7 == fVar6) << 0x1e,
     bVar1 = (byte)(uVar2 >> 0x18), fVar5 = fVar7,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar7) || NAN(fVar6)))) {
    fVar5 = fVar6;
  }
  fVar5 = fVar5 - fVar6 * DAT_0051ce48;
  iVar3 = (int)(fVar5 / fVar6);
  if (-1 < iVar3) {
    if (0 < iVar3) {
      fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(uVar2 >> 0x15) & 3);
      return fVar5 - fVar7 * fVar6;
    }
    uVar2 = uVar2 & 0xfffffff | (uint)(fVar5 < fVar4) << 0x1f;
    if (SUB41(uVar2 >> 0x1f,0) == (NAN(fVar5) || NAN(fVar4))) {
      return fVar5;
    }
  }
  fVar7 = (float)VectorSignedToFloat(iVar3 + 1,(byte)(uVar2 >> 0x15) & 3);
  return fVar5 + fVar7 * fVar6;
}

