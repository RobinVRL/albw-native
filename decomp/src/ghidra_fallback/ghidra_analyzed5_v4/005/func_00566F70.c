#include "ghidra_types.h"

extern float func_00590D4C(float fparam_0);

// USA 00566F70 <- EU 00566F48 (Ghidra, non-matching)

float func_00566F70(float *param_1,float fparam_0)

{
  char cVar1;
  byte bVar2;
  uint in_fpscr;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *param_1;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar7 < fparam_0) << 0x1f |
          (uint)(fVar7 == fparam_0) << 0x1e;
  uVar3 = uVar4 | (uint)(NAN(fVar7) || NAN(fparam_0)) << 0x1c;
  bVar2 = (byte)(uVar4 >> 0x18);
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar3 >> 0x1c) & 1)) {
    fVar5 = param_1[1];
    uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == fparam_0) << 0x1e |
            (uint)(fparam_0 <= fVar5) << 0x1d;
    bVar2 = (byte)(uVar4 >> 0x18);
    if ((bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6)) {
      return fparam_0;
    }
    cVar1 = *(char *)((int)param_1 + 9);
    if (cVar1 == '\0') {
      return fVar5;
    }
    if (cVar1 == '\x01') {
      fVar5 = fVar5 - fVar7;
      fVar7 = func_00590D4C((fparam_0 - fVar7) / fVar5);
      fVar7 = (float)VectorSignedToFloat((int)fVar7,(byte)(uVar4 >> 0x15) & 3);
      return fparam_0 - fVar7 * fVar5;
    }
    if (cVar1 != '\x02') {
      return fparam_0;
    }
    fVar9 = fVar5 - fVar7;
    fVar6 = func_00590D4C((fparam_0 - fVar7) / fVar9);
    fVar8 = (float)VectorSignedToFloat((int)fVar6,(byte)(uVar4 >> 0x15) & 3);
    fVar8 = fparam_0 - fVar8 * fVar9;
    if (((int)fVar6 & 1U) == 0) {
      return fVar8;
    }
    fVar7 = fVar7 + fVar5;
  }
  else {
    cVar1 = *(char *)(param_1 + 2);
    if (cVar1 == '\0') {
      return fVar7;
    }
    if (cVar1 == '\x01') {
      fVar5 = param_1[1] - fVar7;
      fVar7 = func_00590D4C((fparam_0 - fVar7) / fVar5);
      fVar7 = (float)VectorSignedToFloat((int)fVar7,(byte)(uVar3 >> 0x15) & 3);
      return fparam_0 - fVar7 * fVar5;
    }
    if (cVar1 != '\x02') {
      return fparam_0;
    }
    fVar9 = param_1[1];
    fVar8 = fVar9 - fVar7;
    fVar5 = func_00590D4C((fparam_0 - fVar7) / fVar8);
    fVar6 = (float)VectorSignedToFloat((int)fVar5,(byte)(uVar3 >> 0x15) & 3);
    fVar8 = fparam_0 - fVar6 * fVar8;
    if (((int)fVar5 & 1U) == 0) {
      return fVar8;
    }
    fVar7 = fVar7 + fVar9;
  }
  return fVar7 - fVar8;
}

