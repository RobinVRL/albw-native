#include "ghidra_types.h"

extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern int func_00504804(int param_1);
extern int func_0051E918(int param_1);
extern int func_00564B90(int param_1,int param_2,uint param_3,int param_4);
extern int *DAT_00504168;
extern uint DAT_0050416c;
extern float DAT_00504170;

// USA 00503F50 <- EU 00503F28 (Ghidra, non-matching)
// GLOBAL DAT_00504168 int *
// GLOBAL DAT_0050416c uint
// GLOBAL DAT_00504170 float

undefined4 func_00503F50(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float in_s16;
  float fVar12;
  ulonglong uVar13;
  
  puVar3 = (undefined4 *)func_0051E918(*DAT_00504168);
  in_fpscr = in_fpscr & 0xfffffff;
  uVar10 = in_fpscr | (uint)(*(float *)(param_1 + 0x4c) == ALBW_AS_F32(puVar3[0xe])) << 0x1e;
  if ((((SUB41(uVar10 >> 0x1e,0)) &&
       (uVar10 = in_fpscr | (uint)(*(float *)(param_1 + 0x50) == ALBW_AS_F32(puVar3[0xf])) << 0x1e,
       SUB41(uVar10 >> 0x1e,0))) &&
      (uVar10 = in_fpscr | (uint)(*(float *)(param_1 + 0x3c) == ALBW_AS_F32(puVar3[10])) << 0x1e,
      SUB41(uVar10 >> 0x1e,0))) &&
     (uVar10 = in_fpscr | (uint)(*(float *)(param_1 + 0x40) == ALBW_AS_F32(puVar3[0xb])) << 0x1e,
     SUB41(uVar10 >> 0x1e,0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar8 = 0;
  **(undefined1 **)(*(int *)(param_1 + 0x10) + 8) = 0;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 0x218) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    uVar13 = (ulonglong)DAT_0050416c;
    fVar12 = DAT_00504170;
    do {
      if (bVar2) {
        if (uVar8 < *(uint *)(param_1 + 0x54)) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4);
        }
        else {
          iVar4 = 0;
        }
        *(undefined1 *)(iVar4 + 0x8a) = 1;
      }
      if (uVar8 < *(uint *)(param_1 + 0x54)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4);
      }
      else {
        iVar4 = 0;
      }
      func_00504804(iVar4);
      if (uVar8 < *(uint *)(param_1 + 0x54)) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4);
      }
      else {
        iVar4 = 0;
      }
      iVar6 = *(int *)(param_1 + 0x10);
      puVar5 = (undefined1 *)(*(int *)(iVar6 + 8) + (uint)*(byte *)(iVar4 + 0x70) * 0x218);
      *puVar5 = *(undefined1 *)(iVar4 + 0x88);
      if (*(char *)(iVar4 + 0x88) != '\0') {
        uVar9 = *(uint *)(iVar4 + 0x80);
        if (*(uint *)(iVar4 + 0x7c) < uVar9) {
          uVar7 = *(uint *)(iVar4 + 0x7c) + 1;
          if (uVar9 == 0 || uVar7 == 0) {
            in_s16 = ALBW_AS_F32(uVar13);
          }
          *(uint *)(iVar4 + 0x7c) = uVar7;
          *(undefined1 *)(iVar4 + 0x8a) = 1;
          if (uVar9 != 0 && uVar7 != 0) {
            if (uVar7 < uVar9) {
              in_s16 = *(float *)(iVar4 + 0x84);
              fVar11 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar10 >> 0x15) & 3);
              in_s16 = in_s16 / (fVar12 - (fVar11 * in_s16 - in_s16));
              uVar9 = uVar10 & 0xfffffff | (uint)(in_s16 < fVar12) << 0x1f |
                      (uint)(in_s16 == fVar12) << 0x1e;
              uVar10 = uVar9 | (uint)(NAN(in_s16) || NAN(fVar12)) << 0x1c;
              bVar1 = (byte)(uVar9 >> 0x18);
              if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar10 >> 0x1c) & 1))
              goto LAB_005040bc;
            }
            in_s16 = fVar12;
          }
LAB_005040bc:
          fVar11 = *(float *)(*(int *)(iVar4 + 4) + 0x38);
          *(float *)(*(int *)(iVar4 + 4) + 0x38) =
               fVar11 + (*(float *)(iVar4 + 0x78) - fVar11) * in_s16;
        }
        *puVar5 = 1;
        if (*(char *)(iVar4 + 0x8a) == '\0') {
          if (*(char *)(iVar4 + 0x89) != '\0') {
            puVar5[2] = *(undefined1 *)(*(int *)(iVar4 + 4) + 0x2c);
            puVar5[3] = *(undefined1 *)(*(int *)(iVar4 + 4) + 0x2d);
            puVar5[4] = *(undefined1 *)(*(int *)(iVar4 + 4) + 0x2e);
            puVar5[1] = *(byte *)(*(int *)(iVar4 + 4) + 0x29) & 1;
          }
        }
        else {
          func_00564B90(*(int *)(iVar4 + 4),iVar6,(uint)*(byte *)(iVar4 + 0x70),(int)puVar3);
        }
      }
      *(undefined1 *)(iVar4 + 0x89) = 0;
      *(undefined1 *)(iVar4 + 0x8a) = 0;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *(int *)(param_1 + 0x54));
  }
  return func_00115224((undefined4 *)(param_1 + 0x14),puVar3);
}

