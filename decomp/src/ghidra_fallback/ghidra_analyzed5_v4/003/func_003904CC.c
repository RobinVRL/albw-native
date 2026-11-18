#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_001E8348(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_0051D530(int param_1,undefined4 *param_2);
extern float DAT_00390788;
extern int *DAT_0039078c;
extern float DAT_00390790;
extern float DAT_00390794;
extern int *DAT_00390798;
extern float DAT_0039079c;
extern undefined4 *DAT_003907a0;
extern float DAT_003907a4;
extern float DAT_003907a8;
extern float DAT_003907ac;
extern undefined4 DAT_003907b0;
extern float *DAT_003907b4;

// USA 003904CC <- EU 003904A8 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00390788 float
// GLOBAL DAT_0039078c int *
// GLOBAL DAT_00390790 float
// GLOBAL DAT_00390794 float
// GLOBAL DAT_00390798 int *
// GLOBAL DAT_0039079c float
// GLOBAL DAT_003907a0 undefined4 *
// GLOBAL DAT_003907a4 float
// GLOBAL DAT_003907a8 float
// GLOBAL DAT_003907ac float
// GLOBAL DAT_003907b0 undefined4
// GLOBAL DAT_003907b4 float *

void func_003904CC(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define fStack_8c (*(float *)(albw_frame + 0x4))
  #define local_88 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_78 ((float *)(albw_frame + 0x18))
  #define afStack_40 ((float *)(albw_frame + 0x50))
  fVar11 = DAT_003907a4;
  puVar3 = DAT_003907a0;
  fVar18 = DAT_00390794;
  fVar17 = DAT_00390790;
  piVar2 = DAT_0039078c;
  fVar9 = DAT_00390788;
  if (0x77 < *(int *)(param_1 + 0x4b4)) {
    iVar8 = *(int *)(*DAT_00390798 + 0x18);
    iVar4 = *(int *)(param_1 + 0x4b4) + -0x78;
    if (iVar4 == 0) {
      iVar6 = 300;
      puVar5 = DAT_003907a0 + 5;
      *(undefined4 *)(param_1 + 0x45c) = *DAT_003907a0;
      *(undefined4 *)(param_1 + 0x460) = puVar3[1];
      *(undefined4 *)(param_1 + 0x464) = puVar3[2];
      *(undefined4 *)(param_1 + 0x468) = puVar3[3];
      uVar12 = *puVar5;
      uVar13 = puVar3[6];
      *(undefined4 *)(param_1 + 0x46c) = puVar3[4];
      *(undefined4 *)(param_1 + 0x470) = uVar12;
      *(undefined4 *)(param_1 + 0x474) = uVar13;
      *(undefined4 *)(param_1 + 0x478) = puVar3[7];
      *(undefined4 *)(param_1 + 0x47c) = puVar3[8];
      *(undefined4 *)(param_1 + 0x480) = puVar3[9];
      iVar7 = 0;
      *(undefined2 *)(param_1 + 0x484) = *(undefined2 *)(puVar3 + 10);
      iVar4 = 1;
      *(undefined2 *)(param_1 + 0x486) = *(undefined2 *)((int)puVar3 + 0x2a);
      iVar14 = *piVar2;
      fVar10 = fVar17;
      do {
        fVar15 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
        iVar1 = (iVar7 * iVar4) / 2;
        fVar16 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar17 <= fVar16 * fVar9 * fVar15 * fVar11) << 0x1d
        ;
        if (SUB41(in_fpscr >> 0x1d,0)) {
          fVar16 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
          fVar15 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar16 * fVar9 * fVar15 * fVar11;
        }
        else {
          fVar16 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
          fVar15 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
          fVar15 = -(fVar15 * fVar9 * fVar16 * fVar11);
        }
        iVar6 = iVar6 + -1;
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 1;
        fVar10 = fVar15 + fVar10;
      } while (iVar6 != 0);
      fVar9 = (float)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * fVar11;
      if (fVar9 <= fVar17) {
        fVar9 = -fVar9;
      }
      iVar4 = (int)((DAT_003907ac - fVar10 * DAT_003907a8) / fVar9);
      *(int *)(param_1 + 0x4bc) = iVar4;
      *(int *)(param_1 + 0x4bc) = iVar4 + 600;
      func_0051D530(iVar8,(undefined4 *)(param_1 + 0x488));
      *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(iVar8 + 0x1bc);
      *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(iVar8 + 0x1c0);
      *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(iVar8 + 0x1c4);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x4bc);
      if (iVar4 < iVar7) {
        iVar6 = *DAT_0039078c;
        if ((iVar4 < 300) || (iVar7 - iVar4 < 300)) {
          if (299 < iVar4) {
            iVar4 = iVar7 - iVar4;
          }
          fVar9 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar9 = (float)VectorSignedToFloat((int)((fVar9 + DAT_0039079c) * fVar9 * DAT_00390794),
                                             (byte)(in_fpscr >> 0x15) & 3);
          iVar6 = (int)(fVar11 * fVar9 * DAT_00390788);
        }
        *(int *)(param_1 + 0x464) = *(int *)(param_1 + 0x464) + iVar6;
      }
      else if (0x2c < iVar4 - iVar7) {
        if (*(int *)(param_1 + 0x4b8) < 0) {
          func_001E8348(iVar8,(undefined4 *)(param_1 + 0x444),(undefined4 *)(param_1 + 0x488));
          *(undefined4 *)(param_1 + 0x4b8) = 0;
        }
        goto LAB_00390770;
      }
    }
    local_88 = DAT_003907b0;
    local_90 = fVar17;
    fStack_8c = fVar18;
    func_0048B5D4(afStack_40,DAT_003907b4,*(uint *)(param_1 + 0x464));
    func_00491B3C(afStack_78,afStack_40);
    func_00115CA8(&local_90,afStack_78,&local_90);
    func_001E8348(iVar8,&local_90,(undefined4 *)(param_1 + 0x45c));
  }
LAB_00390770:
  *(int *)(param_1 + 0x4b4) = *(int *)(param_1 + 0x4b4) + 1;
  return;
}

