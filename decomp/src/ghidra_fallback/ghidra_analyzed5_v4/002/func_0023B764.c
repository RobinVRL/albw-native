#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0023b8f4;
extern uint *DAT_0023b8f8;
extern undefined4 *DAT_0023b8fc;
extern undefined4 DAT_0023b900;
extern float DAT_0023b904;
extern float DAT_0023b908;
extern float DAT_0023b90c;

// USA 0023B764 <- EU 0023B764 (Ghidra, non-matching)
// GLOBAL DAT_0023b8f4 int *
// GLOBAL DAT_0023b8f8 uint *
// GLOBAL DAT_0023b8fc undefined4 *
// GLOBAL DAT_0023b900 undefined4
// GLOBAL DAT_0023b904 float
// GLOBAL DAT_0023b908 float
// GLOBAL DAT_0023b90c float

undefined4 func_0023B764(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(uint *)(param_1 + 0x438) != 0) &&
     (puVar3 = (undefined4 *)func_0052FBA0(*DAT_0023b8f4 + 0x3dbbc,*(uint *)(param_1 + 0x438)),
     puVar3 != (undefined4 *)0x0)) {
    if (((*DAT_0023b8f8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0023b8f8), iVar4 != 0)) {
      *DAT_0023b8fc = DAT_0023b900;
    }
    iVar4 = (**(code **)*puVar3)(puVar3,DAT_0023b8fc);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (*(char *)(puVar3 + 0x230) == '\0') {
      fVar6 = *(float *)(param_1 + 0x3d4) - ALBW_AS_F32(puVar3[0xf5]);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < DAT_0023b904) << 0x1f |
              (uint)(fVar6 == DAT_0023b904) << 0x1e;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar6) || NAN(DAT_0023b904))) {
        iVar4 = *(int *)(param_1 + 0x43c);
        if (iVar4 < 1) {
          iVar4 = (int)(*(float *)(param_1 + 0x3e0) * DAT_0023b908);
          *(int *)(param_1 + 0x43c) = iVar4;
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0x43c) = iVar4;
        if (iVar4 < 1) {
          *(undefined4 *)(param_1 + 0x438) = 0;
        }
        fVar6 = DAT_0023b90c;
        fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(uVar1 >> 0x15) & 3);
        iVar5 = iVar4;
        if (iVar4 < 2) {
          iVar5 = 1;
        }
        fVar10 = *(float *)(param_1 + 0x3d0);
        fVar11 = *(float *)(param_1 + 0x3d8);
        fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(uVar1 >> 0x15) & 3);
        fVar7 = fVar10 + ((ALBW_AS_F32(puVar3[0xf4]) + ALBW_AS_F32(puVar3[0xf7]) * fVar7) - fVar10) *
                         (DAT_0023b90c / fVar8);
        iVar5 = iVar4;
        if (iVar4 < 2) {
          iVar5 = 1;
        }
        fVar8 = (float)VectorSignedToFloat(iVar4,(byte)(uVar1 >> 0x15) & 3);
        *(float *)(param_1 + 0x3d0) = fVar7;
        fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(uVar1 >> 0x15) & 3);
        fVar6 = fVar11 + ((ALBW_AS_F32(puVar3[0xf6]) + ALBW_AS_F32(puVar3[0xf9]) * fVar8) - fVar11) *
                         (fVar6 / fVar9);
        *(float *)(param_1 + 0x3d8) = fVar6;
        *(float *)(param_1 + 0x3dc) = fVar7 - fVar10;
        *(float *)(param_1 + 0x3e4) = fVar6 - fVar11;
        *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x3e0);
        return 1;
      }
    }
  }
  return 0;
}

