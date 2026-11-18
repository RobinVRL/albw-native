#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern uint DAT_003c3368;

// USA 003C3230 <- EU 003C320C (Ghidra, non-matching)
// GLOBAL DAT_003c3368 uint

void func_003C3230(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int *in_r12;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  
  uVar10 = 0;
  uVar14 = (ulonglong)DAT_003c3368;
  do {
    piVar8 = param_1;
    if (uVar10 < 3) {
      piVar8 = param_1 + uVar10 * 9;
    }
    if ((char)piVar8[8] != '\0') {
      bVar11 = uVar10 < 3;
      piVar8 = param_1;
      if (bVar11) {
        piVar8 = param_1 + uVar10 * 9;
      }
      piVar6 = param_1;
      if (bVar11) {
        piVar6 = param_1 + uVar10 * 9;
      }
      piVar4 = param_1;
      piVar2 = param_1;
      piVar3 = in_r12;
      if (bVar11) {
        piVar4 = param_1 + uVar10 * 9;
        piVar2 = param_1 + uVar10 * 9;
        piVar3 = (int *)(uVar10 * 9);
      }
      in_r12 = param_1;
      if (bVar11) {
        in_r12 = param_1 + (int)piVar3;
      }
      iVar9 = piVar6[3];
      iVar5 = func_0051D2F4(in_r12,piVar8[1],iVar9,piVar2[4],ALBW_AS_F32(piVar4[6]));
      if (iVar5 != 0) {
        piVar8 = param_1;
        if (uVar10 < 3) {
          iVar9 = uVar10 * 9;
          piVar8 = param_1 + uVar10 * 9;
        }
        piVar6 = param_1;
        if (uVar10 < 3) {
          piVar6 = param_1 + iVar9;
        }
        fVar13 = (float)VectorSignedToFloat(piVar8[1],(byte)(in_fpscr >> 0x15) & 3);
        fVar13 = fVar13 * -ALBW_AS_F32(piVar6[7]);
        iVar9 = (int)fVar13;
        fVar12 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
        uVar7 = in_fpscr & 0xfffffff;
        in_fpscr = uVar7 | (uint)(fVar12 == fVar13) << 0x1e | (uint)(fVar13 <= fVar12) << 0x1d;
        bVar1 = (byte)(in_fpscr >> 0x18);
        bVar11 = (bool)(bVar1 >> 6);
        if (!bVar11) {
          in_fpscr = uVar7 | (uint)(ALBW_AS_F32(uVar14) == fVar13) << 0x1e |
                     (uint)(fVar13 <= ALBW_AS_F32(uVar14)) << 0x1d;
          bVar1 = (byte)(in_fpscr >> 0x18);
          bVar11 = (bool)(bVar1 >> 6);
        }
        if ((bool)(bVar1 >> 5 & 1) && !bVar11) {
          iVar9 = iVar9 + -1;
        }
        piVar8[1] = iVar9;
        piVar8 = param_1;
        if (uVar10 < 3) {
          piVar8 = param_1 + uVar10 * 9;
        }
        piVar6 = param_1;
        if (uVar10 < 3) {
          piVar6 = param_1 + uVar10 * 9;
        }
        uVar7 = func_0058E2B8(piVar6 + 1);
        if (uVar7 < (uint)piVar8[5]) {
          piVar8 = param_1;
          if (uVar10 < 3) {
            piVar8 = param_1 + uVar10 * 9;
          }
          piVar8[1] = 0;
        }
      }
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 3);
  return;
}

