#include "ghidra_types.h"

extern float DAT_0051cfe0;
extern float DAT_0051cfe4;
extern float DAT_0051cfe8;
extern float DAT_0051cfec;
extern float DAT_0051cff0;
extern int DAT_0051cff4;

// USA 0051CF68 <- EU 0051CF40 (Ghidra, non-matching)
// GLOBAL DAT_0051cfe0 float
// GLOBAL DAT_0051cfe4 float
// GLOBAL DAT_0051cfe8 float
// GLOBAL DAT_0051cfec float
// GLOBAL DAT_0051cff0 float
// GLOBAL DAT_0051cff4 int

float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = DAT_0051cfe4;
  fVar6 = DAT_0051cfe0;
  fVar7 = *param_1 + fparam_2;
  *param_1 = fVar7;
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 <= fVar7) << 0x1d;
  fVar8 = fVar6;
  if ((SUB41(uVar5 >> 0x1d,0)) &&
     (uVar5 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar2) << 0x1f | (uint)(fVar7 == fVar2) << 0x1e,
     bVar1 = (byte)(uVar5 >> 0x18), fVar8 = fVar7,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar7) || NAN(fVar2)))) {
    fVar8 = fVar2;
  }
  *param_1 = fVar8;
  uVar4 = uVar5 & 0xfffffff | (uint)(fVar6 <= fVar8) << 0x1d;
  if ((SUB41(uVar4 >> 0x1d,0)) &&
     (uVar4 = uVar5 & 0xfffffff | (uint)(fVar8 < fVar2) << 0x1f | (uint)(fVar8 == fVar2) << 0x1e,
     bVar1 = (byte)(uVar4 >> 0x18), fVar6 = fVar8,
     !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar8) || NAN(fVar2)))) {
    fVar6 = fVar2;
  }
  uVar5 = (uint)(DAT_0051cfec + fVar6 * DAT_0051cfe8);
  iVar3 = DAT_0051cff4 + (uVar5 >> 0x18) * 0x10;
  fVar6 = (float)VectorUnsignedToFloat(uVar5 & 0xffffff,(byte)(uVar4 >> 0x15) & 3);
  return fparam_0 +
         (fparam_1 - fparam_0) *
         (*(float *)(iVar3 + 8) + *(float *)(iVar3 + 0xc) * fVar6 * DAT_0051cff0);
}

