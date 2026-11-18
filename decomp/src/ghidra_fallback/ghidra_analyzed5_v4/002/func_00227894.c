#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern float DAT_00227aa4;
extern float DAT_00227aa8;
extern float DAT_00227aac;
extern float DAT_00227ab0;
extern float DAT_00227ab4;
extern float DAT_00227ab8;
extern float DAT_00227abc;
extern float DAT_00227ac0;
extern float DAT_00227ac4;
extern float DAT_00227ac8;
extern float DAT_00227acc;
extern int DAT_00227ad0;

// USA 00227894 <- EU 00227894 (Ghidra, non-matching)
// GLOBAL DAT_00227aa4 float
// GLOBAL DAT_00227aa8 float
// GLOBAL DAT_00227aac float
// GLOBAL DAT_00227ab0 float
// GLOBAL DAT_00227ab4 float
// GLOBAL DAT_00227ab8 float
// GLOBAL DAT_00227abc float
// GLOBAL DAT_00227ac0 float
// GLOBAL DAT_00227ac4 float
// GLOBAL DAT_00227ac8 float
// GLOBAL DAT_00227acc float
// GLOBAL DAT_00227ad0 int

undefined4 func_00227894(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  fVar4 = DAT_00227ab8;
  cVar2 = *(char *)(param_1 + 0x73c);
  fVar8 = DAT_00227aa8;
  if ((cVar2 != '\0') && (fVar8 = DAT_00227aac, cVar2 != '\x01' && cVar2 != '\x02')) {
    fVar8 = DAT_00227ab0;
  }
  fVar12 = *(float *)(param_1 + 0x6fc) * DAT_00227ab4;
  if (*(char *)(param_1 + 0x46c) == '\r') goto LAB_002279c0;
  pfVar5 = (float *)(param_1 + 0x6f8);
  if (*(char *)(param_1 + 0x74e) == '\0') {
    *pfVar5 = *pfVar5 + (DAT_00227aa4 - *pfVar5) * DAT_00227ac0;
  }
  else {
    fVar9 = *pfVar5;
    uVar6 = in_fpscr & 0xfffffff;
    uVar1 = uVar6 | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e |
            (uint)(fVar8 <= fVar9) << 0x1d;
    in_fpscr = uVar1 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar3 >> 5 & 1)) {
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar10 = fVar9 - fVar8 * DAT_00227abc;
        in_fpscr = uVar6 | (uint)(fVar10 == fVar8) << 0x1e | (uint)(fVar8 <= fVar10) << 0x1d;
        bVar3 = (byte)(in_fpscr >> 0x18);
        if ((!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) ||
           (uVar6 = uVar6 | (uint)(fVar10 < fVar9) << 0x1f | (uint)(fVar10 == fVar9) << 0x1e,
           in_fpscr = uVar6 | (uint)(NAN(fVar10) || NAN(fVar9)) << 0x1c,
           bVar3 = (byte)(uVar6 >> 0x18),
           !(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)))
        goto LAB_00227934;
        goto LAB_00227954;
      }
    }
    else {
      fVar10 = fVar9 + fVar8 * DAT_00227abc;
      in_fpscr = uVar6 | (uint)(fVar8 == fVar10) << 0x1e | (uint)(fVar10 <= fVar8) << 0x1d;
      bVar3 = (byte)(in_fpscr >> 0x18);
      if ((!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) ||
         (uVar6 = uVar6 | (uint)(fVar9 < fVar10) << 0x1f | (uint)(fVar9 == fVar10) << 0x1e,
         in_fpscr = uVar6 | (uint)(NAN(fVar9) || NAN(fVar10)) << 0x1c, bVar3 = (byte)(uVar6 >> 0x18)
         , !(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
LAB_00227934:
        *pfVar5 = fVar8;
      }
      else {
LAB_00227954:
        *pfVar5 = fVar10;
      }
    }
  }
  fVar8 = *(float *)(param_1 + 0x6cc);
  fVar8 = fVar8 + (DAT_00227ac4 - fVar8) * DAT_00227ac8;
  *(float *)(param_1 + 0x6cc) = fVar8;
  *(int *)(param_1 + 0x6c8) = (int)(fVar8 * fVar12 * fVar4) + *(int *)(param_1 + 0x6c8);
LAB_002279c0:
  fVar8 = DAT_00227acc;
  uVar6 = *(uint *)(param_1 + 0x6c8);
  pfVar5 = (float *)(DAT_00227ad0 + (uVar6 >> 0x18) * 0x10);
  fVar13 = pfVar5[3];
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = fVar12 * DAT_00227acc;
  fVar9 = pfVar5[2];
  fVar11 = *(float *)(param_1 + 0x6f8);
  fVar14 = *pfVar5;
  fVar15 = pfVar5[1];
  iVar7 = *(int *)(param_1 + 0x594);
  fVar10 = (float)VectorUnsignedToFloat(uVar6 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  func_00491E80((float *)(iVar7 + 0x80),(int)((fVar9 + fVar13 * fVar12) * fVar4 * fVar11),0,
                (int)((fVar14 + fVar15 * fVar10 * fVar8) * fVar4 * fVar11));
  local_18 = *(float *)(param_1 + 0x3d0);
  local_14 = *(undefined4 *)(param_1 + 0x3d4);
  local_10 = *(undefined4 *)(param_1 + 0x3d8);
  func_00115C54(&local_18,&local_18,(float *)(param_1 + 0x730));
  iVar7 = *(int *)(param_1 + 0x594);
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  *(float *)(iVar7 + 0x8c) = local_18;
  *(undefined4 *)(iVar7 + 0x9c) = local_14;
  *(undefined4 *)(iVar7 + 0xac) = local_10;
  return func_004CEAF0(*(int *)(param_1 + 0x594));
}

