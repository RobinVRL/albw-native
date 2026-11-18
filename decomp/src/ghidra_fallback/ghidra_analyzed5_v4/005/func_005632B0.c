#include "ghidra_types.h"

extern int func_00563220(int param_1,uint *param_2,int param_3);
extern uint DAT_005634e0;
extern uint DAT_005634e4;
extern uint DAT_005634e8;
extern float DAT_005634ec;
extern float DAT_005634f0;
extern float DAT_005634f4;
extern int DAT_005634f8;
extern float DAT_005634fc;
extern float DAT_00563500;
extern uint DAT_00563504;
extern uint DAT_00563508;
extern uint DAT_0056350c;
extern uint DAT_00563510;
extern uint DAT_00563514;
extern uint DAT_00563518;
extern uint DAT_0056351c;

// USA 005632B0 <- EU 00563288 (Ghidra, non-matching)
// GLOBAL DAT_005634e0 uint
// GLOBAL DAT_005634e4 uint
// GLOBAL DAT_005634e8 uint
// GLOBAL DAT_005634ec float
// GLOBAL DAT_005634f0 float
// GLOBAL DAT_005634f4 float
// GLOBAL DAT_005634f8 int
// GLOBAL DAT_005634fc float
// GLOBAL DAT_00563500 float
// GLOBAL DAT_00563504 uint
// GLOBAL DAT_00563508 uint
// GLOBAL DAT_0056350c uint
// GLOBAL DAT_00563510 uint
// GLOBAL DAT_00563514 uint
// GLOBAL DAT_00563518 uint
// GLOBAL DAT_0056351c uint

uint * func_005632B0(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  if (param_3 != 0) {
    param_2 = func_00563220(param_1[0xe],param_2,1);
  }
  uVar3 = DAT_005634e0;
  *param_2 = *(uint *)((int)param_1 + 0x16) & 0xffffff |
             (uint)*(byte *)((int)param_1 + 0x19) << 0x18;
  param_2[1] = uVar3;
  param_2[2] = param_1[1] >> 0x10 | param_1[1] << 0x10;
  param_2[3] = uVar3 + 1;
  uVar3 = DAT_005634e4;
  uVar4 = (uint)(byte)param_1[7];
  cVar1 = (char)param_1[3];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar6 = 1;
  }
  else {
    iVar6 = 0;
  }
  if ((char)param_1[2] == '\f') {
    iVar5 = 2;
  }
  else {
    iVar5 = 0;
  }
  param_2[4] = (uint)*(byte *)((int)param_1 + 0xb) << 1 | iVar6 << 2 | iVar5 << 4 |
               (uint)*(byte *)((int)param_1 + 9) << 8 | (uint)*(byte *)((int)param_1 + 10) << 0xc |
               (uint)(uVar4 == 2 || uVar4 == 4) << 0x14 |
               (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18 | uVar4 << 0x1c;
  uVar4 = DAT_005634e8;
  param_2[5] = uVar3;
  uVar3 = 0;
  if ((char)param_1[3] != '\x03' && (char)param_1[3] != '\0') {
    fVar9 = ALBW_AS_F32(param_1[4]);
    if ((fVar9 != DAT_005634ec) && ((uint)((int)ALBW_AS_U32(fVar9) << 1) >> 0x18 != 0xff)) {
      fVar8 = (fVar9 + DAT_005634f0) * DAT_005634f4;
      fVar9 = DAT_005634ec;
      if (DAT_005634ec <= fVar8) {
        bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),0x46000000);
        iVar6 = (int)ALBW_AS_U32(fVar8) + -0x46000000;
        fVar9 = DAT_00563500;
        if ((int)ALBW_AS_U32(fVar8) < 0x46000000) {
          bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),DAT_005634f8);
          iVar6 = (int)ALBW_AS_U32(fVar8) - DAT_005634f8;
          fVar9 = fVar8;
        }
        if (iVar6 < 0 == bVar7) {
          uVar3 = VectorFloatToUnsigned(fVar9 - DAT_005634fc,3);
          goto LAB_00563404;
        }
      }
      uVar3 = VectorFloatToUnsigned(fVar9 + DAT_005634fc,3);
    }
LAB_00563404:
    uVar3 = uVar3 | (uint)*(byte *)((int)param_1 + 0x15) << 0x10 | (uint)(byte)param_1[5] << 0x18;
  }
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  uVar3 = DAT_00563504;
  puVar2 = param_2 + 8;
  cVar1 = (char)param_1[7];
  if ((cVar1 == '\0' || cVar1 == '\x03') || cVar1 == '\x02') {
    *puVar2 = *param_1 >> 3;
    param_2[9] = uVar3;
    puVar2 = param_2 + 9;
  }
  else {
    if (cVar1 != '\x01' && cVar1 != '\x04') goto LAB_005634d0;
    *puVar2 = param_1[8] >> 3;
    param_2[9] = uVar3;
    uVar3 = DAT_00563508;
    param_2[10] = param_1[9] >> 3 & 0xe03fffff;
    param_2[0xb] = uVar3;
    uVar3 = DAT_0056350c;
    param_2[0xc] = param_1[10] >> 3 & 0xe03fffff;
    param_2[0xd] = uVar3;
    uVar3 = DAT_00563510;
    param_2[0xe] = param_1[0xb] >> 3 & 0xe03fffff;
    param_2[0xf] = uVar3;
    uVar3 = DAT_00563514;
    param_2[0x10] = param_1[0xc] >> 3 & 0xe03fffff;
    param_2[0x11] = uVar3;
    uVar3 = DAT_00563518;
    puVar2 = param_2 + 0x13;
    param_2[0x12] = param_1[0xd] >> 3 & 0xe03fffff;
    *puVar2 = uVar3;
  }
  puVar2 = puVar2 + 1;
LAB_005634d0:
  uVar3 = DAT_0056351c;
  *puVar2 = (uint)(byte)param_1[2];
  puVar2[1] = uVar3;
  return puVar2 + 2;
}

