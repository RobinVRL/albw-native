#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_0042D8F4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5);
extern float DAT_0042c148;
extern float *DAT_0042c14c;
extern uint *DAT_0042c150;
extern float *DAT_0042c154;
extern float *DAT_0042c158;
extern float *DAT_0042c15c;
extern float DAT_0042c160;
extern int DAT_0042c164;
extern float DAT_0042c168;

// USA 0042BD5C <- EU 0042BD3C (Ghidra, non-matching)
// GLOBAL DAT_0042c148 float
// GLOBAL DAT_0042c14c float *
// GLOBAL DAT_0042c150 uint *
// GLOBAL DAT_0042c154 float *
// GLOBAL DAT_0042c158 float *
// GLOBAL DAT_0042c15c float *
// GLOBAL DAT_0042c160 float
// GLOBAL DAT_0042c164 int
// GLOBAL DAT_0042c168 float

undefined1
func_0042BD5C(int param_1,float *param_2,float *param_3,int param_4,float fparam_0,float fparam_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c4 (*(float *)(albw_frame + 0xc))
  #define local_c0 (*(float *)(albw_frame + 0x10))
  #define local_bc (*(float *)(albw_frame + 0x14))
  #define local_b4 (*(float *)(albw_frame + 0x1c))
  #define local_b0 (*(float *)(albw_frame + 0x20))
  #define local_ac (*(float *)(albw_frame + 0x24))
  #define local_a8 (*(float *)(albw_frame + 0x28))
  #define local_a4 (*(float *)(albw_frame + 0x2c))
  #define local_a0 (*(float *)(albw_frame + 0x30))
  #define local_9c (*(float *)(albw_frame + 0x34))
  #define local_98 (*(float *)(albw_frame + 0x38))
  #define local_94 (*(float *)(albw_frame + 0x3c))
  #define local_90 ((float *)(albw_frame + 0x40))
  #define local_84 (*(float * *)(albw_frame + 0x4c))
  #define local_80 ((float *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x64))
  #define local_68 (*(float *)(albw_frame + 0x68))
  #define local_64 (*(float *)(albw_frame + 0x6c))
  #define local_60 (*(float *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(float *)(albw_frame + 0x78))
  #define local_54 (*(float *)(albw_frame + 0x7c))
  #define fStack_50 (*(float *)(albw_frame + 0x80))
  #define fStack_4c (*(float *)(albw_frame + 0x84))
  #define local_48 (*(float *)(albw_frame + 0x88))
  #define local_44 (*(float *)(albw_frame + 0x8c))
  #define local_40 ((float *)(albw_frame + 0x90))
  local_84 = (float *)(param_1 + 4);
  uVar15 = CONCAT44(fparam_0,fparam_1);
  func_00115D70(&local_c4,(float *)(param_1 + 0x58),DAT_0042c148);
  pfVar7 = DAT_0042c14c;
  local_a0 = ALBW_AS_F32(uVar15);
  local_a8 = local_c4 + local_a0;
  local_a4 = local_c0 + local_a0;
  local_a0 = local_bc + local_a0;
  if (((*DAT_0042c150 & 1) == 0) &&
     (iVar1 = func_00100174((int *)DAT_0042c150), pfVar2 = DAT_0042c154, iVar1 != 0)) {
    fVar5 = DAT_0042c154[1];
    fVar8 = DAT_0042c154[2];
    *pfVar7 = *DAT_0042c154;
    pfVar7[1] = fVar5;
    pfVar7[2] = fVar8;
    pfVar3 = DAT_0042c158;
    fVar5 = pfVar2[1];
    fVar8 = pfVar2[2];
    pfVar7[3] = -*pfVar2;
    pfVar7[4] = -fVar5;
    pfVar7[5] = -fVar8;
    fVar5 = pfVar3[1];
    fVar8 = pfVar3[2];
    pfVar7[6] = *pfVar3;
    pfVar7[7] = fVar5;
    pfVar7[8] = fVar8;
    pfVar2 = DAT_0042c15c;
    fVar8 = pfVar3[1];
    fVar5 = pfVar3[2];
    pfVar7[9] = -*pfVar3;
    pfVar7[10] = -fVar8;
    pfVar7[0xb] = -fVar5;
    fVar5 = pfVar2[1];
    fVar8 = pfVar2[2];
    pfVar7[0xc] = *pfVar2;
    pfVar7[0xd] = fVar5;
    pfVar7[0xe] = fVar8;
    fVar5 = pfVar2[1];
    fVar8 = pfVar2[2];
    pfVar7[0xf] = -*pfVar2;
    pfVar7[0x10] = -fVar5;
    pfVar7[0x11] = -fVar8;
  }
  fVar8 = *param_3;
  fVar14 = param_3[1];
  fVar5 = param_3[2];
  local_b4 = *(float *)(param_1 + 100) * fVar8 + *(float *)(param_1 + 0x70) * fVar14 +
             *(float *)(param_1 + 0x7c) * fVar5;
  local_b0 = *(float *)(param_1 + 0x68) * fVar8 + *(float *)(param_1 + 0x74) * fVar14 +
             *(float *)(param_1 + 0x80) * fVar5;
  local_ac = *(float *)(param_1 + 0x6c) * fVar8 + *(float *)(param_1 + 0x78) * fVar14 +
             *(float *)(param_1 + 0x84) * fVar5;
  local_6c = *param_2;
  local_68 = param_2[1];
  local_64 = param_2[2];
  func_00115C70(&local_6c,&local_6c,(float *)(param_1 + 4));
  iVar1 = DAT_0042c164;
  iVar10 = 0;
  iVar11 = DAT_0042c164 + -0x18;
  local_90[0] = *(float *)(param_1 + 100) * local_6c + *(float *)(param_1 + 0x70) * local_68 +
                *(float *)(param_1 + 0x7c) * local_64;
  local_90[1] = *(float *)(param_1 + 0x68) * local_6c + *(float *)(param_1 + 0x74) * local_68 +
                *(float *)(param_1 + 0x80) * local_64;
  local_90[2] = *(float *)(param_1 + 0x6c) * local_6c + *(float *)(param_1 + 0x78) * local_68 +
                *(float *)(param_1 + 0x84) * local_64;
  fVar5 = DAT_0042c168;
  fVar8 = DAT_0042c160;
  do {
    iVar9 = *(int *)(iVar1 + iVar10 * 4);
    pfVar2 = &local_b4;
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        pfVar2 = &local_b0;
      }
      else {
        pfVar2 = &local_ac;
      }
    }
    if (*pfVar2 * *(float *)(iVar11 + iVar10 * 4) < fVar5) {
      pfVar2 = &local_a8;
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          pfVar2 = &local_a4;
        }
        else {
          pfVar2 = &local_a0;
        }
      }
      func_00115D70(&local_9c,pfVar7 + iVar10 * 3,*pfVar2);
      local_60 = local_9c;
      local_5c = local_98;
      pfVar2 = &local_b4;
      local_58 = local_94;
      if (iVar9 != 0) {
        if (iVar9 == 1) {
          pfVar2 = &local_b0;
        }
        else {
          pfVar2 = &local_ac;
        }
      }
      fVar14 = *pfVar2;
      if (fVar14 <= fVar5) {
        fVar14 = -fVar14;
      }
      fVar13 = fVar5;
      if (0x34000000 < (int)ALBW_AS_U32(fVar14)) {
        pfVar2 = local_90;
        if (iVar9 == 0) {
          pfVar3 = &local_60;
        }
        else {
          if (iVar9 == 1) {
            pfVar2 = local_90 + 1;
          }
          else {
            pfVar2 = local_90 + 2;
          }
          pfVar6 = &local_48;
          if (iVar9 != 1) {
            pfVar6 = local_40;
          }
          pfVar3 = pfVar6 + -6;
          if (iVar9 == 1) {
            pfVar3 = pfVar6 + -5;
          }
        }
        pfVar6 = &local_b4;
        if (iVar9 != 0) {
          if (iVar9 == 1) {
            pfVar6 = &local_b0;
          }
          else {
            pfVar6 = &local_ac;
          }
        }
        fVar13 = (*pfVar3 - *pfVar2) / *pfVar6;
      }
      if (fVar5 <= fVar13) {
        fVar14 = ALBW_AS_F32(((ulonglong)uVar15 >> 0x20));
        bVar12 = NAN(fVar13) || NAN(fVar14);
        if (fVar13 <= fVar14) {
          bVar12 = NAN(fVar13) || NAN(fVar8);
          fVar14 = fVar8;
        }
        if (fVar13 == fVar14 || fVar13 < fVar14 != bVar12) {
          fVar14 = fVar5;
          func_00115D70(&local_48,&local_b4,fVar13);
          local_54 = local_48;
          fStack_50 = local_44;
          fStack_4c = local_40[0];
          func_00115C54(&local_48,local_90,&local_54);
          local_80[0] = local_48;
          local_80[1] = local_44;
          local_80[2] = local_40[0];
          iVar4 = 0;
          do {
            if (iVar4 != iVar9) {
              pfVar2 = local_80;
              if (iVar4 != 0) {
                if (iVar4 == 1) {
                  pfVar2 = local_80 + 1;
                }
                else {
                  pfVar2 = local_80 + 2;
                }
              }
              fVar13 = *pfVar2;
              pfVar2 = &local_a8;
              if (fVar13 <= fVar14) {
                fVar13 = -fVar13;
              }
              if (iVar4 != 0) {
                if (iVar4 == 1) {
                  pfVar2 = &local_a4;
                }
                else {
                  pfVar2 = &local_a0;
                }
              }
              if (*pfVar2 < fVar13) break;
            }
            iVar4 = iVar4 + 1;
            if (2 < iVar4) {
              if (param_4 == 0) {
                return 1;
              }
              *(float *)(param_4 + 0x10) = local_48;
              pfVar7 = pfVar7 + iVar10 * 3;
              *(float *)(param_4 + 0x14) = local_44;
              *(float *)(param_4 + 0x18) = local_40[0];
              *(float *)(param_4 + 4) = *pfVar7;
              *(float *)(param_4 + 8) = pfVar7[1];
              *(float *)(param_4 + 0xc) = pfVar7[2];
              *(float *)(param_4 + 0x1c) = fVar5;
              fVar8 = fVar5;
              if (fVar5 < local_a8) {
                fVar8 = local_c4 / local_a8;
              }
              fVar14 = fVar5;
              if (fVar5 < local_a4) {
                fVar14 = local_c0 / local_a4;
              }
              fVar13 = fVar5;
              if (fVar5 < local_a0) {
                fVar13 = local_bc / local_a0;
              }
              *(float *)(param_4 + 0x10) = local_48 * fVar8;
              *(float *)(param_4 + 0x14) = local_44 * fVar14;
              *(float *)(param_4 + 0x18) = local_40[0] * fVar13;
              if (fVar5 < ALBW_AS_F32(uVar15)) {
                local_60 = local_b4;
                local_5c = local_b0;
                local_58 = local_ac;
                func_00115D70(&local_60,&local_60,ALBW_AS_F32(((ulonglong)uVar15 >> 0x20)));
                fVar8 = ALBW_AS_F32(uVar15);
                func_00115C54(&local_60,&local_60,local_90);
                fVar5 = func_0042D8F4((float *)(param_4 + 0x10),local_90,&local_60,(float *)0x0,
                                      (float *)0x0);
                if (fVar8 * fVar8 < fVar5) {
                  return 0;
                }
              }
              func_00115CE4((float *)(param_4 + 0x10),(float *)(param_1 + 100),
                            (float *)(param_4 + 0x10));
              func_00115C54((float *)(param_4 + 0x10),(float *)(param_4 + 0x10),local_84);
              func_00115CE4((float *)(param_4 + 4),(float *)(param_1 + 100),(float *)(param_4 + 4));
              return 1;
            }
          } while( true );
        }
      }
    }
    iVar10 = iVar10 + 1;
    if (5 < iVar10) {
      return 0;
    }
  } while( true );
}

