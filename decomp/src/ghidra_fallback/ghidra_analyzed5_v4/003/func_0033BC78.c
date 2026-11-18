#include "ghidra_types.h"

extern int func_00665E08(undefined4 *param_1,undefined1 param_2);
extern float DAT_0033be18;
extern float DAT_0033be1c;
extern undefined4 DAT_0033be20;
extern float DAT_0033be24;
extern float DAT_0033be28;
extern float DAT_0033be2c;
extern undefined4 DAT_0033be30;
extern undefined4 DAT_0033be34;
extern float DAT_0033be38;

// USA 0033BC78 <- EU 0033BC54 (Ghidra, non-matching)
// GLOBAL DAT_0033be18 float
// GLOBAL DAT_0033be1c float
// GLOBAL DAT_0033be20 undefined4
// GLOBAL DAT_0033be24 float
// GLOBAL DAT_0033be28 float
// GLOBAL DAT_0033be2c float
// GLOBAL DAT_0033be30 undefined4
// GLOBAL DAT_0033be34 undefined4
// GLOBAL DAT_0033be38 float

undefined4 func_0033BC78(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  fVar9 = DAT_0033be18;
  if (*(int *)(param_1 + 0x40c) < 0) {
    *(undefined1 *)(param_1 + 0x514) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x514) != '\0') {
      fVar9 = *(float *)(param_1 + 0x3dc);
      iVar5 = *(int *)(param_1 + 0x510);
      uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < DAT_0033be18) << 0x1f |
              (uint)(fVar9 == DAT_0033be18) << 0x1e;
      bVar2 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar9) || NAN(DAT_0033be18))) {
        iVar5 = -iVar5;
      }
      *(int *)(param_1 + 0x50c) = iVar5 + *(int *)(param_1 + 0x50c);
      if (*(int *)(param_1 + 0x43c) != 0) {
        iVar5 = 0;
        fVar9 = (float)VectorUnsignedToFloat
                                 (*(undefined4 *)(param_1 + 0x50c),(byte)(uVar1 >> 0x15) & 3);
        fVar9 = fVar9 * DAT_0033be1c;
        for (; piVar7 = *(int **)(*(int *)(param_1 + 0x43c) + 0x20), iVar5 < piVar7[1];
            iVar5 = iVar5 + 1) {
          *(float *)(*piVar7 + iVar5 * 0x154 + 0xf4) = fVar9;
          *(float *)(**(int **)(*(int *)(param_1 + 0x43c) + 0x20) + iVar5 * 0x154 + 0x10c) = fVar9;
          *(float *)(**(int **)(*(int *)(param_1 + 0x43c) + 0x20) + iVar5 * 0x154 + 0x124) = fVar9;
        }
      }
      if (*(uint *)(param_1 + 0x474) < *(uint *)(param_1 + 0x478)) {
        *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0033be38;
        *(uint *)(param_1 + 0x474) = *(uint *)(param_1 + 0x474) + 1;
        return 0;
      }
      return func_00665E08((undefined4 *)(param_1 + 0x40c),5);
    }
    *(undefined1 *)(param_1 + 0x514) = 1;
    uVar3 = DAT_0033be20;
    *(undefined4 *)(param_1 + 0x478) = 0x14;
    *(undefined4 *)(param_1 + 0x47c) = uVar3;
    *(undefined4 *)(param_1 + 0x474) = 0;
    fVar4 = DAT_0033be2c;
    fVar8 = DAT_0033be24;
    if (*(float *)(param_1 + 0x464) <= fVar9) {
      fVar8 = DAT_0033be28;
    }
    *(undefined4 *)(param_1 + 0x3e0) = DAT_0033be30;
    iVar5 = 0;
    *(float *)(param_1 + 0x3dc) = fVar8 * fVar4;
    if (*(int *)(param_1 + 0x43c) != 0) {
      for (; piVar7 = *(int **)(*(int *)(param_1 + 0x43c) + 0x20), iVar5 < piVar7[1];
          iVar5 = iVar5 + 1) {
        puVar6 = (ushort *)(*piVar7 + iVar5 * 0x154);
        *puVar6 = *puVar6 | 0x7000;
      }
    }
    *(undefined4 *)(param_1 + 0x510) = DAT_0033be34;
  }
  return 0;
}

