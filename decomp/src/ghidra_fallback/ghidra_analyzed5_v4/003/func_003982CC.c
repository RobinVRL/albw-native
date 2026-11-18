#include "ghidra_types.h"

extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_0058E2B8(int *param_1);
extern float DAT_003983e8;
extern int *DAT_003983ec;
extern float DAT_003983f0;
extern float DAT_003983f4;
extern float DAT_003983f8;

// USA 003982CC <- EU 003982A8 (Ghidra, non-matching)
// GLOBAL DAT_003983e8 float
// GLOBAL DAT_003983ec int *
// GLOBAL DAT_003983f0 float
// GLOBAL DAT_003983f4 float
// GLOBAL DAT_003983f8 float

void func_003982CC(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8dc) + 0x14);
  fVar7 = *(float *)(iVar5 + 8);
  fVar8 = *(float *)(iVar5 + 0xc);
  fVar10 = *(float *)(iVar5 + 0x14);
  uVar1 = in_fpscr & 0xfffffff;
  if (fVar7 < fVar8) {
    if (fVar8 < fVar10) {
      uVar2 = uVar1 | (uint)(DAT_003983e8 < fVar8) << 0x1f | (uint)(DAT_003983e8 == fVar8) << 0x1e;
      uVar6 = uVar2 | (uint)(NAN(DAT_003983e8) || NAN(fVar8)) << 0x1c;
      bVar3 = (byte)(uVar2 >> 0x18);
      if ((((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) ||
          (uVar6 = uVar1 | (uint)(DAT_003983e8 == fVar10) << 0x1e |
                   (uint)(fVar10 <= DAT_003983e8) << 0x1d, bVar3 = (byte)(uVar6 >> 0x18),
          (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6))) &&
         (uVar6 = uVar6 & 0xfffffff | (uint)(DAT_003983e8 == fVar7) << 0x1e |
                  (uint)(fVar7 <= DAT_003983e8) << 0x1d, bVar3 = (byte)(uVar6 >> 0x18),
         (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6))) goto LAB_0039833c;
    }
    else {
      uVar6 = uVar1 | (uint)(DAT_003983e8 == fVar7) << 0x1e | (uint)(fVar7 <= DAT_003983e8) << 0x1d;
      bVar3 = (byte)(uVar6 >> 0x18);
      if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) goto LAB_0039833c;
    }
  }
  else {
    uVar6 = uVar1 | (uint)(DAT_003983e8 <= fVar8) << 0x1d;
    if ((SUB41(uVar6 >> 0x1d,0)) ||
       (uVar1 = uVar1 | (uint)(fVar7 < DAT_003983e8) << 0x1f,
       uVar6 = uVar1 | (uint)(NAN(fVar7) || NAN(DAT_003983e8)) << 0x1c,
       (byte)(uVar1 >> 0x1f) != ((byte)(uVar6 >> 0x1c) & 1))) goto LAB_0039833c;
  }
  *(undefined1 *)(param_1 + 0xf8) = 1;
LAB_0039833c:
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x34) + 0x24) + 0x14) +
          *(int *)(param_1 + 0xfc) * 0x30;
  fVar7 = *(float *)(iVar5 + 0x1c);
  uVar9 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar5 + 0xc);
  *(float *)(param_1 + 0x40) = fVar7;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  piVar4 = DAT_003983ec;
  if ((int)ALBW_AS_U32((fVar7 - *(float *)(*(int *)(param_1 + 4) + 0x3d4))) < 0x3f800001) {
    if (*(char *)(param_1 + 0xfa) == '\0') {
      *(undefined1 *)(param_1 + 0xfa) = 1;
      func_004A8BFC(*piVar4,param_1 + 0x94,3);
    }
    local_10 = *(int *)(*(int *)(param_1 + 4) + 1000);
    iVar5 = func_0058E2B8(&local_10);
    fVar7 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
    *(float *)(param_1 + 0x40) =
         *(float *)(param_1 + 0x40) + (fVar7 * DAT_003983f0 - DAT_003983f4) * DAT_003983f8;
  }
  return;
}

