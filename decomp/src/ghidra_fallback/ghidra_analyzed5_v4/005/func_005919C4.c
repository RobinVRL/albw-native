#include "ghidra_types.h"

extern int DAT_00591ac8;
extern float DAT_00591acc;
extern float DAT_00591ad0;
extern float DAT_00591ad4;
extern float DAT_00591ad8;
extern float DAT_00591adc;

// USA 005919C4 <- EU 0059199C (Ghidra, non-matching)
// GLOBAL DAT_00591ac8 int
// GLOBAL DAT_00591acc float
// GLOBAL DAT_00591ad0 float
// GLOBAL DAT_00591ad4 float
// GLOBAL DAT_00591ad8 float
// GLOBAL DAT_00591adc float

/* WARNING: Restarted to delay deadcode elimination for space: stack */

float func_005919C4(uint *param_1,uint param_2,float fparam_0)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r4;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar5 = DAT_00591adc;
  fVar15 = DAT_00591acc;
  if (0xfeffffff < param_2 * 2) {
    *param_1 = 0xffffffff;
    return fparam_0;
  }
  uVar7 = param_2 << 8 | 0x80000000;
  uVar11 = ((param_2 << 1) >> 0x18) - 0x78;
  uVar9 = uVar11 & 0x1f;
  iVar6 = (int)uVar11 >> 5;
  uVar12 = 0x20 - uVar9;
  iVar10 = DAT_00591ac8 + 0x5919e4 + iVar6 * 4;
  lVar2 = (ulonglong)uVar7 *
          (ulonglong)
          (*(int *)(DAT_00591ac8 + 0x5919e4 + iVar6 * 4) << uVar9 |
          *(uint *)(iVar10 + 4) >> (uVar12 & 0xff));
  uVar8 = (uint)lVar2;
  lVar3 = (ulonglong)uVar7 *
          (ulonglong)(*(uint *)(iVar10 + 4) << uVar9 | *(uint *)(iVar10 + 8) >> (uVar12 & 0xff));
  uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar7 = (uint)((ulonglong)uVar7 *
                 (ulonglong)
                 (*(uint *)(iVar10 + 8) << uVar9 | *(uint *)(iVar10 + 0xc) >> (uVar12 & 0xff)) >>
                0x20);
  lVar4 = lVar3 + CONCAT44(uVar8,uVar7);
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
  iVar6 = (int)((ulonglong)lVar2 >> 0x20) +
          (uint)(CARRY4(uVar11,uVar8) || CARRY4(uVar11 + uVar8,(uint)CARRY4(uVar7,(uint)lVar3)));
  fVar14 = (float)VectorUnsignedToFloat((int)lVar4,(byte)(in_fpscr >> 0x15) & 3);
  uVar7 = iVar6 + 0x20U >> 6;
  bVar13 = (param_2 & 0x80000000) == 0;
  *param_1 = uVar7;
  fVar17 = (float)VectorSignedToFloat(iVar6 * 0x4000000 | (uVar9 >> 0x13) << 0xd,
                                      (byte)(in_fpscr >> 0x15) & 3);
  if (bVar13) {
    uVar7 = unaff_r4;
  }
  fVar16 = (float)VectorUnsignedToFloat(uVar9 * 0x2000,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = ALBW_AS_F32(((int)ALBW_AS_U32((fVar17 + fVar16 * fVar15 + fVar14 * DAT_00591ad0)) + 0x800U & 0xfffff000));
  fVar15 = fVar1 * DAT_00591ad4 +
           (fVar14 * DAT_00591ad0 - ((fVar1 - fVar17) - fVar16 * fVar15)) * DAT_00591ad8 +
           fVar1 * fVar5;
  if (!bVar13) {
    *param_1 = 0x10000000 - uVar7;
    return -fVar15;
  }
  return fVar15;
}

