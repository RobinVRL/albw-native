#include "ghidra_types.h"

extern int func_00563220(int param_1,uint *param_2,int param_3);
extern uint DAT_005638c8;
extern uint DAT_005638cc;
extern float DAT_005638d0;
extern float DAT_005638d4;
extern float DAT_005638d8;
extern int DAT_005638dc;
extern float DAT_005638e0;
extern float DAT_005638e4;
extern uint DAT_005638e8;
extern uint DAT_005638ec;

// USA 00563750 <- EU 00563728 (Ghidra, non-matching)
// GLOBAL DAT_005638c8 uint
// GLOBAL DAT_005638cc uint
// GLOBAL DAT_005638d0 float
// GLOBAL DAT_005638d4 float
// GLOBAL DAT_005638d8 float
// GLOBAL DAT_005638dc int
// GLOBAL DAT_005638e0 float
// GLOBAL DAT_005638e4 float
// GLOBAL DAT_005638e8 uint
// GLOBAL DAT_005638ec uint

uint * func_00563750(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  if (param_3 != 0) {
    param_2 = func_00563220(param_1[8],param_2,1);
  }
  uVar2 = DAT_005638c8;
  *param_2 = *(uint *)((int)param_1 + 0x16) & 0xffffff |
             (uint)*(byte *)((int)param_1 + 0x19) << 0x18;
  param_2[1] = uVar2;
  param_2[2] = param_1[1] >> 0x10 | param_1[1] << 0x10;
  param_2[3] = uVar2 + 1;
  uVar2 = DAT_005638cc;
  cVar1 = (char)param_1[3];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  if ((char)param_1[2] == '\f') {
    iVar3 = 2;
  }
  else {
    iVar3 = 0;
  }
  param_2[4] = (uint)*(byte *)((int)param_1 + 0xb) << 1 | iVar5 << 2 | iVar3 << 4 |
               (uint)*(byte *)((int)param_1 + 9) << 8 | (uint)*(byte *)((int)param_1 + 10) << 0xc |
               (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  uVar4 = 0;
  uVar6 = uVar2 + 1;
  param_2[5] = uVar2;
  if ((char)param_1[3] == '\x03' || (char)param_1[3] == '\0') {
    param_2[6] = 0;
    param_2[7] = uVar6;
    goto LAB_005638a4;
  }
  fVar9 = ALBW_AS_F32(param_1[4]);
  if ((fVar9 != DAT_005638d0) && ((uint)((int)ALBW_AS_U32(fVar9) << 1) >> 0x18 != 0xff)) {
    fVar8 = (fVar9 + DAT_005638d4) * DAT_005638d8;
    fVar9 = DAT_005638d0;
    if (DAT_005638d0 <= fVar8) {
      bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),0x46000000);
      iVar5 = (int)ALBW_AS_U32(fVar8) + -0x46000000;
      fVar9 = DAT_005638e4;
      if ((int)ALBW_AS_U32(fVar8) < 0x46000000) {
        bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),DAT_005638dc);
        iVar5 = (int)ALBW_AS_U32(fVar8) - DAT_005638dc;
        fVar9 = fVar8;
      }
      if (iVar5 < 0 == bVar7) {
        uVar4 = VectorFloatToUnsigned(fVar9 - DAT_005638e0,3);
        goto LAB_00563888;
      }
    }
    uVar4 = VectorFloatToUnsigned(fVar9 + DAT_005638e0,3);
  }
LAB_00563888:
  param_2[6] = uVar4 | (uint)*(byte *)((int)param_1 + 0x15) << 0x10 | (uint)(byte)param_1[5] << 0x18
  ;
  param_2[7] = uVar6;
LAB_005638a4:
  uVar2 = DAT_005638e8;
  param_2[8] = *param_1 >> 3;
  uVar4 = DAT_005638ec;
  param_2[9] = uVar2;
  param_2[10] = (uint)(byte)param_1[2];
  param_2[0xb] = uVar4;
  return param_2 + 0xc;
}

