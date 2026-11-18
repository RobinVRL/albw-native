#include "ghidra_types.h"

extern int func_005FF2C8(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5 ,uint param_6,undefined4 param_7,int param_8);
extern int func_00601468(void);
extern float DAT_003cb8dc;
extern float DAT_003cb8e0;
extern float DAT_003cb8e4;
extern float DAT_003cb8e8;
extern float DAT_003cb8ec;
extern int DAT_003cb8f0;
extern float DAT_003cb9dc;
extern int DAT_003cb9e0;
extern uint DAT_003cb9e4;

// USA 003CB5F0 <- EU 003CB5CC (Ghidra, non-matching)
// GLOBAL DAT_003cb8dc float
// GLOBAL DAT_003cb8e0 float
// GLOBAL DAT_003cb8e4 float
// GLOBAL DAT_003cb8e8 float
// GLOBAL DAT_003cb8ec float
// GLOBAL DAT_003cb8f0 int
// GLOBAL DAT_003cb9dc float
// GLOBAL DAT_003cb9e0 int
// GLOBAL DAT_003cb9e4 uint

void func_003CB5F0(undefined4 *param_1,uint param_2,int param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar4 = DAT_003cb8f0;
  fVar3 = DAT_003cb8ec;
  fVar2 = DAT_003cb8e0;
  uVar8 = 0;
  iVar9 = 0;
  uVar10 = 0;
  if ((param_2 & 1) != 0) {
    fVar13 = ALBW_AS_F32(param_1[4]);
    fVar12 = DAT_003cb8e0;
    if ((DAT_003cb8e0 <= fVar13) && (fVar12 = fVar13, 0x3f800000 < (int)ALBW_AS_U32(fVar13))) {
      fVar12 = DAT_003cb8dc;
    }
    uVar14 = VectorFloatToUnsigned(DAT_003cb8e8 + fVar12 * DAT_003cb8e4,3);
    fVar13 = ALBW_AS_F32(param_1[5]);
    uVar14 = uVar14 & 0xff;
    fVar12 = DAT_003cb8e0;
    if ((DAT_003cb8e0 <= fVar13) && (fVar12 = fVar13, 0x3f800000 < (int)ALBW_AS_U32(fVar13))) {
      fVar12 = DAT_003cb8dc;
    }
    uVar15 = VectorFloatToUnsigned(DAT_003cb8e8 + fVar12 * DAT_003cb8e4,3);
    fVar13 = ALBW_AS_F32(param_1[6]);
    uVar15 = uVar15 & 0xff;
    fVar12 = DAT_003cb8e0;
    if ((DAT_003cb8e0 <= fVar13) && (fVar12 = fVar13, 0x3f800000 < (int)ALBW_AS_U32(fVar13))) {
      fVar12 = DAT_003cb8dc;
    }
    cVar1 = *(char *)(param_1 + 1);
    uVar16 = VectorFloatToUnsigned(DAT_003cb8e8 + fVar12 * DAT_003cb8e4,3);
    uVar7 = uVar16 & 0xff;
    if (cVar1 == '\0') {
      fVar13 = ALBW_AS_F32(param_1[7]);
      fVar12 = DAT_003cb8e0;
      if ((DAT_003cb8e0 <= fVar13) && (fVar12 = DAT_003cb8dc, (int)ALBW_AS_U32(fVar13) < 0x3f800001)) {
        fVar12 = fVar13;
      }
      iVar9 = 0x20;
      uVar8 = param_1[2] * param_1[3] * 4;
      uVar10 = VectorFloatToUnsigned(DAT_003cb8e8 + fVar12 * DAT_003cb8e4,3);
      uVar10 = uVar14 << 0x18 | uVar15 << 0x10 | uVar7 << 8 | uVar10 & 0xff;
    }
    else if (cVar1 == '\x02') {
      fVar13 = ALBW_AS_F32(param_1[7]);
      fVar12 = DAT_003cb8e0;
      if ((DAT_003cb8e0 <= fVar13) && (fVar12 = DAT_003cb8dc, (int)ALBW_AS_U32(fVar13) < 0x3f800001)) {
        fVar12 = fVar13;
      }
      iVar9 = 0x10;
      uVar8 = param_1[2] * param_1[3] * 2;
      uVar10 = VectorFloatToUnsigned(DAT_003cb8e8 + fVar12 * DAT_003cb8e4,3);
      uVar10 = (uVar14 >> 3) << 0xb | (uVar15 >> 3) << 6 | (uVar7 >> 3) << 1 |
               (uint)(0x7f < (uVar10 & 0xff));
    }
    else {
      if (cVar1 == '\x03') {
        iVar11 = param_1[2] * param_1[3];
        uVar10 = (uVar14 >> 3) << 0xb | (uVar15 >> 2) << 5 | uVar7 >> 3;
      }
      else {
        if (cVar1 != '\x04') goto LAB_003cb81c;
        fVar13 = ALBW_AS_F32(param_1[7]);
        fVar12 = DAT_003cb8e0;
        if ((DAT_003cb8e0 <= fVar13) && (fVar12 = DAT_003cb8dc, (int)ALBW_AS_U32(fVar13) < 0x3f800001)) {
          fVar12 = fVar13;
        }
        iVar11 = param_1[2] * param_1[3];
        uVar8 = VectorFloatToUnsigned(DAT_003cb8e8 + fVar12 * DAT_003cb8e4,3);
        uVar10 = (uVar14 >> 4) << 0xc | (uVar15 >> 4) << 8 | uVar16 & 0xf0 | (uVar8 & 0xff) >> 4;
      }
      iVar9 = 0x10;
      uVar8 = iVar11 << 1;
    }
  }
LAB_003cb81c:
  uVar14 = 0;
  uVar15 = 0;
  iVar11 = 0;
  if ((param_2 & 6) != 0) {
    fVar13 = ALBW_AS_F32(param_1[0xd]);
    fVar12 = DAT_003cb8dc;
    if (((int)ALBW_AS_U32(fVar13) < 0x3f800001) && (fVar12 = fVar13, fVar13 < DAT_003cb8e0)) {
      fVar12 = DAT_003cb8e0;
    }
    cVar1 = *(char *)(param_1 + 10);
    uVar7 = 0;
    param_1[0xd] = ALBW_AS_U32(fVar12);
    if (cVar1 == '\x03') {
      uVar14 = param_1[0xb] * param_1[0xc] * 4;
      if ((fVar2 < fVar12) && ((uint)((int)ALBW_AS_U32(fVar12) << 1) >> 0x18 != 0xff)) {
        fVar12 = fVar12 * fVar3;
        if ((int)ALBW_AS_U32(fVar12) < iVar4) {
          uVar7 = VectorFloatToUnsigned(fVar12,3);
        }
        else {
          uVar7 = 0xffffff;
        }
      }
      iVar11 = 0x20;
      uVar15 = uVar7 | (uint)*(byte *)(param_1 + 0xe) << 0x18;
    }
    else if (cVar1 == '\0') {
      uVar14 = param_1[0xb] * param_1[0xc] * 2;
      uVar15 = uVar7;
      if (((fVar2 < fVar12) && ((uint)((int)ALBW_AS_U32(fVar12) << 1) >> 0x18 != 0xff)) &&
         (uVar15 = DAT_003cb9e4, (int)ALBW_AS_U32((fVar12 * DAT_003cb9dc)) < DAT_003cb9e0)) {
        uVar15 = VectorFloatToUnsigned(fVar12 * DAT_003cb9dc,3);
      }
      iVar11 = 0x10;
    }
    else if (cVar1 == '\x02') {
      uVar14 = param_1[0xb] * param_1[0xc] * 3;
      if ((fVar2 < fVar12) && ((uint)((int)ALBW_AS_U32(fVar12) << 1) >> 0x18 != 0xff)) {
        fVar12 = fVar12 * fVar3;
        if ((int)ALBW_AS_U32(fVar12) < iVar4) {
          uVar7 = VectorFloatToUnsigned(fVar12,3);
        }
        else {
          uVar7 = 0xffffff;
        }
      }
      iVar11 = 0x18;
      uVar15 = uVar7;
    }
  }
  if ((param_2 & 3) != 0) {
    if (param_3 != 0) {
      func_00601468();
    }
    uVar5 = 0;
    if ((param_2 & 6) != 0) {
      uVar5 = param_1[9];
    }
    uVar6 = 0;
    if ((param_2 & 1) != 0) {
      uVar6 = *param_1;
    }
    func_005FF2C8(uVar6,uVar8,uVar10,iVar9,uVar5,uVar14,uVar15,iVar11);
  }
  return;
}

