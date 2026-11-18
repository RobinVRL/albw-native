#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0051E5D8(int param_1);
extern int func_0051E6AC(int param_1);
extern int func_0051E918(int param_1);
extern int func_0051E92C(int param_1);
extern int func_0057D5C4(int *param_1);
extern int *DAT_002e38a0;
extern float DAT_002e38a4;
extern float DAT_002e38a8;
extern float DAT_002e38ac;
extern float DAT_002e38b0;
extern float DAT_002e38b4;
extern float DAT_002e38b8;

// USA 002E361C <- EU 002E35F8 (Ghidra, non-matching)
// GLOBAL DAT_002e38a0 int *
// GLOBAL DAT_002e38a4 float
// GLOBAL DAT_002e38a8 float
// GLOBAL DAT_002e38ac float
// GLOBAL DAT_002e38b0 float
// GLOBAL DAT_002e38b4 float
// GLOBAL DAT_002e38b8 float

int func_002E361C(int *param_1)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float * *)(albw_frame + 0x14))
  #define local_38 (*(float * *)(albw_frame + 0x18))
  iVar8 = *DAT_002e38a0;
  iVar7 = *param_1;
  local_3c = (float *)func_0051E6AC(iVar8);
  local_38 = (float *)func_0051E92C(iVar8);
  piVar4 = (int *)func_0051E5D8(iVar8);
  pfVar5 = (float *)func_0057D5C4(piVar4);
  pfVar6 = (float *)func_0051E918(iVar8);
  fVar3 = DAT_002e38ac;
  iVar8 = *(int *)(iVar7 + 0xdc);
  fVar14 = *(float *)(*(int *)(iVar7 + 0xd8) + 0x14) * DAT_002e38a4;
  if (fVar14 == DAT_002e38a8) {
    fVar14 = DAT_002e38a4;
  }
  if (iVar8 != 0) {
    fVar9 = ALBW_AS_F32(((int)ALBW_AS_U32(DAT_002e38ac) - 0x580000));
    iVar7 = (int)ALBW_AS_U32(DAT_002e38ac) + 0x80000000;
    uVar1 = (int)ALBW_AS_U32(DAT_002e38ac) << 7;
    fVar15 = DAT_002e38b8;
    fVar16 = DAT_002e38b0;
    fVar17 = DAT_002e38b4;
    do {
      func_00115CA8(&local_48,local_3c,(float *)(iVar8 + 0x2c));
      bVar2 = false;
      fVar13 = fVar15 / (pfVar5[0xd] * local_44 + pfVar5[0xe] * local_40 +
                        pfVar5[0xf] + pfVar5[0xc] * local_48);
      fVar10 = (pfVar5[3] + *pfVar5 * local_48 + pfVar5[1] * local_44 + pfVar5[2] * local_40) *
               fVar13;
      fVar12 = (pfVar5[7] + pfVar5[4] * local_48 + pfVar5[5] * local_44 + pfVar5[6] * local_40) *
               fVar13;
      local_40 = (pfVar5[0xb] + pfVar5[8] * local_48 + pfVar5[9] * local_44 + pfVar5[10] * local_40)
                 * fVar13;
      if ((uint)ALBW_AS_U32(fVar3) < (uint)ALBW_AS_U32((fVar10 + fVar14))) {
        local_48 = fVar10 + fVar14 + fVar16;
LAB_002e3780:
        bVar2 = true;
      }
      else {
        local_48 = fVar10;
        if (iVar7 < (int)ALBW_AS_U32((fVar10 - fVar14))) {
          local_48 = fVar10 - (fVar14 + fVar16);
          goto LAB_002e3780;
        }
      }
      if ((uint)ALBW_AS_U32(fVar9) < (uint)ALBW_AS_U32((fVar12 + fVar14))) {
        local_44 = fVar12 + fVar14 + fVar17;
LAB_002e37c4:
        fVar10 = pfVar6[2] * local_40;
        fVar11 = fVar15 / (pfVar6[0xd] * local_44 + pfVar6[0xe] * local_40 +
                          pfVar6[0xf] + pfVar6[0xc] * local_48);
        fVar12 = pfVar6[4] * local_48;
        fVar13 = pfVar6[6] * local_40;
        local_40 = (pfVar6[0xb] + pfVar6[8] * local_48 +
                   pfVar6[9] * local_44 + pfVar6[10] * local_40) * fVar11;
        local_48 = (pfVar6[3] + *pfVar6 * local_48 + pfVar6[1] * local_44 + fVar10) * fVar11;
        local_44 = (pfVar6[7] + fVar12 + pfVar6[5] * local_44 + fVar13) * fVar11;
        func_00115CA8(&local_48,local_38,&local_48);
        *(float *)(iVar8 + 0x2c) = local_48;
        *(float *)(iVar8 + 0x30) = local_44;
        *(float *)(iVar8 + 0x34) = local_40;
      }
      else {
        if ((int)((uint)ALBW_AS_U32(fVar9) & ~uVar1) < (int)ALBW_AS_U32((fVar12 - fVar14))) {
          local_44 = fVar12 - (fVar14 + fVar17);
          goto LAB_002e37c4;
        }
        local_44 = fVar12;
        if (bVar2) goto LAB_002e37c4;
      }
      iVar8 = *(int *)(iVar8 + 0x140);
    } while (iVar8 != 0);
  }
  return param_1[1];
}

