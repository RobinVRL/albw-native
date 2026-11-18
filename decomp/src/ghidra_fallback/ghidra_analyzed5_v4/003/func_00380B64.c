#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_004A3788(int *param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00542A94(int param_1);
extern int func_005811E8(int *param_1);
extern int func_00588BE4(int param_1);
extern int func_0058A1F4(int param_1);
extern int func_0068C690(float *param_1);
extern float DAT_00380ea0;
extern float DAT_00380ea4;
extern float DAT_00380ea8;
extern float *DAT_00380eac;
extern float DAT_00380eb0;
extern int *DAT_00380eb4;
extern int DAT_00380eb8;
extern float DAT_00380ebc;
extern int DAT_00380ec0;
extern undefined DAT_00380ec4;
extern float DAT_00380ee0;
extern float DAT_00380ee4;
extern int DAT_00380ee8;
extern float DAT_00381258;
extern float DAT_0038125c;
extern int *DAT_00381260;
extern float DAT_00381264;
extern char s__SE_IronSoldier_SWING_00380ec7[];
extern char s_cf_00380ec7[];
extern undefined4 _DAT_00380ec4;

// USA 00380B64 <- EU 00380B40 (Ghidra, non-matching)
// GLOBAL DAT_00380ea0 float
// GLOBAL DAT_00380ea4 float
// GLOBAL DAT_00380ea8 float
// GLOBAL DAT_00380eac float *
// GLOBAL DAT_00380eb0 float
// GLOBAL DAT_00380eb4 int *
// GLOBAL DAT_00380eb8 int
// GLOBAL DAT_00380ebc float
// GLOBAL DAT_00380ec0 int
// GLOBAL DAT_00380ec4 undefined
// GLOBAL DAT_00380ee0 float
// GLOBAL DAT_00380ee4 float
// GLOBAL DAT_00380ee8 int
// GLOBAL DAT_00381258 float
// GLOBAL DAT_0038125c float
// GLOBAL DAT_00381260 int *
// GLOBAL DAT_00381264 float
// GLOBAL s_cf_00380ec7 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00380B64(int param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x160];
  #define afStack_160 ((float *)(albw_frame + 0x0))
  #define local_f4 (*(float *)(albw_frame + 0x6c))
  #define local_f0 (*(float *)(albw_frame + 0x70))
  #define local_ec (*(float *)(albw_frame + 0x74))
  #define afStack_e8 ((float *)(albw_frame + 0x78))
  #define local_7c (*(float *)(albw_frame + 0xe4))
  #define local_78 (*(float *)(albw_frame + 0xe8))
  #define local_74 (*(float *)(albw_frame + 0xec))
  #define local_70 (*(float *)(albw_frame + 0xf0))
  #define local_6c (*(float *)(albw_frame + 0xf4))
  #define local_68 (*(float *)(albw_frame + 0xf8))
  #define local_64 (*(float *)(albw_frame + 0xfc))
  #define fStack_60 (*(float *)(albw_frame + 0x100))
  #define fStack_5c (*(float *)(albw_frame + 0x104))
  #define local_58 (*(float *)(albw_frame + 0x108))
  #define local_54 (*(char * *)(albw_frame + 0x10c))
  #define local_4c (*(float *)(albw_frame + 0x114))
  #define local_48 (*(float *)(albw_frame + 0x118))
  #define local_44 (*(float *)(albw_frame + 0x11c))
  iVar3 = DAT_00380ee8;
  fVar14 = DAT_00380ea8;
  fVar12 = DAT_00380ea4;
  fVar10 = DAT_00380ea0;
  local_64 = *DAT_00380eac;
  fStack_60 = DAT_00380eac[1];
  fStack_5c = DAT_00380eac[2];
  pfVar8 = (float *)(param_1 + 0x8c8);
  pfVar9 = (float *)(param_1 + 0xa84);
  if (*(char *)(param_1 + 0xb2d) != '\0') {
    *(float *)(param_1 + 0xb18) = DAT_00380ea4;
    fVar12 = *(float *)(param_1 + 0xa90) - *pfVar9;
    fVar10 = *(float *)(param_1 + 0xa98) - *(float *)(param_1 + 0xa8c);
    *(float *)(param_1 + 0xb08) = SQRT(fVar12 * fVar12 + fVar10 * fVar10);
    *(float *)(param_1 + 0xb0c) = fVar14;
    *pfVar8 = *(float *)(param_1 + 0xa90);
    *(undefined4 *)(param_1 + 0x8cc) = *(undefined4 *)(param_1 + 0xa94);
    *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_1 + 0xa98);
    *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x9ec) = *(undefined4 *)(param_1 + 0xa88);
    *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_1 + 0xa8c);
    fVar14 = *(float *)(param_1 + 0xb10) * fVar14;
    func_00115C70(&local_58,(float *)(param_1 + 0xa90),pfVar9);
    func_00115DC8(&local_58);
    func_00115D70(&local_58,&local_58,fVar14);
    uVar7 = 8;
    do {
      pfVar9 = pfVar8;
      if (uVar7 + 1 < 10) {
        pfVar9 = pfVar8 + (uVar7 + 1) * 8;
      }
      func_00115C54(&local_4c,pfVar9,&local_58);
      pfVar9 = pfVar8;
      if (uVar7 < 10) {
        pfVar9 = pfVar8 + uVar7 * 8;
      }
      pfVar9[2] = local_44;
      pfVar9[1] = local_48;
      uVar7 = uVar7 - 1;
      *pfVar9 = local_4c;
    } while (-1 < (int)uVar7);
    return;
  }
  fVar17 = fVar10;
  if (*(char *)(param_1 + 0xb2c) == '\0') {
    fVar11 = *(float *)(param_1 + 0xb18) - DAT_00380ee4;
    *(float *)(param_1 + 0xb18) = fVar11;
    if (fVar11 <= fVar10) {
      fVar11 = fVar10;
    }
    *(float *)(param_1 + 0xb18) = fVar11;
    if (*(int *)(param_1 + 0xb08) < iVar3) {
      *(undefined4 *)(param_1 + 0xacc) = 0;
      *(undefined4 *)(param_1 + 0xac8) = 0;
      *(float *)(param_1 + 0xb0c) = fVar10;
      goto LAB_00380dd0;
    }
  }
  else {
    fVar10 = *(float *)(param_1 + 0xb18) + DAT_00380eb0;
    *(float *)(param_1 + 0xb18) = fVar10;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar10)) {
      fVar10 = fVar12;
    }
    *(float *)(param_1 + 0xb18) = fVar10;
    pfVar2 = (float *)func_00520FC0();
    fVar10 = pfVar2[2] - *(float *)(param_1 + 0xa8c);
    fVar10 = SQRT((*pfVar2 - *pfVar9) * (*pfVar2 - *pfVar9) + fVar10 * fVar10);
    iVar3 = func_00588BE4(param_1);
    if (iVar3 == *DAT_00380eb4) {
      if (DAT_00380ec0 < (int)ALBW_AS_U32(fVar10)) {
        fVar10 = ALBW_AS_F32(_DAT_00380ec4);
      }
    }
    else if (DAT_00380eb8 < (int)ALBW_AS_U32(fVar10)) {
      fVar10 = DAT_00380ebc;
    }
    local_54 = s__SE_IronSoldier_SWING_00380ec7 + 1;
    local_58 = DAT_00380ee0;
    func_00150CD0(param_1,(int *)&local_58,param_1 + 0xa90,0,0);
  }
  if (*(int *)(param_1 + 0xacc) != 0) {
    pfVar2 = (float *)(param_1 + 0xa90);
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(&local_64,pfVar2,pfVar4);
    iVar3 = func_0068C690(&local_64);
    *(int *)(param_1 + 0xad0) = iVar3;
  }
LAB_00380dd0:
  uVar7 = func_0058A1F4(param_1);
  pfVar2 = (float *)(param_1 + 0xb08);
  if ((uVar7 != 0) || (bVar1 = func_00542A94(param_1), bVar1)) {
    *pfVar2 = *pfVar2 + (fVar17 - *pfVar2) * fVar12;
    iVar3 = func_00588BE4(param_1);
    if (iVar3 == *DAT_00380eb4) {
      iVar3 = func_005811E8((int *)(param_1 + 0xb44));
      if (iVar3 != 0) {
        func_004A3788((int *)(param_1 + 0xb44));
      }
      iVar3 = func_005811E8((int *)(param_1 + 0xb3c));
      if (iVar3 != 0) {
        func_004A3788((int *)(param_1 + 0xb3c));
      }
      iVar3 = func_005811E8((int *)(param_1 + 0xb54));
      if (iVar3 != 0) {
        func_004A3788((int *)(param_1 + 0xb54));
      }
      iVar3 = func_005811E8((int *)(param_1 + 0xb4c));
      if (iVar3 != 0) {
        func_004A3788((int *)(param_1 + 0xb4c));
      }
    }
  }
  else {
    *pfVar2 = *pfVar2 + (fVar10 - *pfVar2) * *(float *)(param_1 + 0xb0c);
    fVar11 = *(float *)(param_1 + 0xb0c);
    *(float *)(param_1 + 0xb0c) = fVar11 + (fVar14 - fVar11) * fVar14;
    if (fVar10 != fVar17) {
      fVar10 = *(float *)(param_1 + 0xb08) + DAT_00381258;
      if (fVar10 < DAT_0038125c) {
        fVar10 = DAT_0038125c;
      }
      *(float *)(param_1 + 0xb08) = fVar10;
    }
  }
  pfVar2 = (float *)*DAT_00381260;
  func_0051D2F4((int *)(param_1 + 0xacc),DAT_00381260[1],DAT_00381260[-1],(int)pfVar2,DAT_00381264);
  *(int *)(param_1 + 0xac8) = *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xac8);
  local_70 = fVar17;
  local_6c = fVar17;
  local_68 = fVar12;
  func_004D7F70(&local_70,*(uint *)(param_1 + 0xac8));
  fVar10 = *(float *)(param_1 + 0xb08) * fVar14;
  func_00115D70(&local_70,&local_70,fVar10);
  local_7c = fVar17;
  local_78 = fVar17;
  local_74 = fVar17;
  uVar7 = 8;
  do {
    pfVar4 = afStack_e8 + uVar7 * 3;
    do {
      pfVar5 = afStack_e8;
      if (uVar7 + 1 < 10) {
        pfVar5 = afStack_e8 + (uVar7 + 1) * 3;
      }
      bVar1 = uVar7 < 10;
      fVar11 = *pfVar5;
      if (bVar1) {
        pfVar5 = (float *)(uVar7 * 3);
      }
      pfVar6 = afStack_e8;
      if (bVar1) {
        pfVar6 = afStack_e8 + (int)pfVar5;
      }
      *pfVar4 = fVar11 + local_70;
      pfVar6[1] = *(float *)(param_1 + 0xa88);
      pfVar4 = afStack_e8;
      if (bVar1) {
        pfVar4 = afStack_e8 + uVar7 * 3;
      }
      pfVar5 = afStack_e8;
      if (uVar7 + 1 < 10) {
        pfVar5 = afStack_e8 + (uVar7 + 1) * 3;
      }
      uVar7 = uVar7 - 1;
      pfVar4[2] = pfVar5[2] + local_68;
      if (0x7fffffff < uVar7) {
        local_70 = fVar17;
        local_6c = fVar17;
        local_68 = fVar12;
        func_004D7F70(&local_70,*(int *)(param_1 + 0xac8) + *(int *)(param_1 + 0xacc) * -10);
        func_00115D70(&local_70,&local_70,fVar10);
        local_f4 = fVar17;
        local_f0 = fVar17;
        local_ec = fVar17;
        uVar7 = 8;
        do {
          pfVar4 = afStack_160 + uVar7 * 3;
          do {
            pfVar5 = afStack_160;
            if (uVar7 + 1 < 10) {
              pfVar5 = afStack_160 + (uVar7 + 1) * 3;
            }
            bVar1 = uVar7 < 10;
            fVar10 = *pfVar5;
            if (bVar1) {
              pfVar5 = (float *)(uVar7 * 3);
            }
            pfVar6 = afStack_160;
            if (bVar1) {
              pfVar6 = afStack_160 + (int)pfVar5;
            }
            *pfVar4 = fVar10 + local_70;
            pfVar6[1] = *(float *)(param_1 + 0xa88);
            pfVar4 = afStack_160;
            if (bVar1) {
              pfVar4 = afStack_160 + uVar7 * 3;
            }
            pfVar5 = afStack_160;
            if (uVar7 + 1 < 10) {
              pfVar5 = afStack_160 + (uVar7 + 1) * 3;
            }
            uVar7 = uVar7 - 1;
            pfVar4[2] = pfVar5[2] + local_68;
            if (0x7fffffff < uVar7) {
              uVar16 = CONCAT44(fVar12,fVar17);
              uVar7 = 8;
              do {
                pfVar4 = afStack_160 + uVar7 * 3;
                if (uVar7 < 10) {
                  pfVar6 = afStack_e8 + uVar7 * 3;
                  pfVar5 = pfVar4;
                  goto LAB_00381164;
                }
                while( true ) {
                  pfVar6 = afStack_e8;
                  pfVar5 = afStack_160;
LAB_00381164:
                  fVar15 = ALBW_AS_F32(uVar16);
                  fVar13 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
                  fVar12 = fVar13 - fVar15;
                  fVar10 = *pfVar6;
                  fVar11 = *pfVar5;
                  bVar1 = 9 < uVar7;
                  if (bVar1) {
                    pfVar5 = afStack_160;
                    pfVar6 = afStack_e8;
                  }
                  *pfVar4 = fVar10 * fVar12 + fVar11 * fVar15;
                  if (!bVar1) {
                    pfVar5 = afStack_160 + uVar7 * 3;
                    pfVar6 = afStack_e8 + uVar7 * 3;
                  }
                  pfVar4 = pfVar8;
                  if (!bVar1) {
                    pfVar4 = pfVar8 + uVar7 * 8;
                  }
                  if (bVar1) {
                    pfVar2 = afStack_160;
                  }
                  pfVar5[2] = pfVar6[2] * fVar12 + pfVar5[2] * fVar15;
                  if (bVar1) {
                    pfVar5 = afStack_e8;
                  }
                  else {
                    pfVar5 = afStack_e8 + uVar7 * 3;
                    pfVar2 = afStack_160 + uVar7 * 3;
                  }
                  fVar12 = *(float *)(param_1 + 0xb18);
                  fVar10 = pfVar5[2];
                  fVar13 = fVar13 - fVar12;
                  fVar11 = pfVar2[2];
                  pfVar6 = pfVar8;
                  if (!bVar1) {
                    pfVar6 = pfVar8 + uVar7 * 8;
                  }
                  *pfVar4 = *pfVar5 * fVar12 + *pfVar2 * fVar13;
                  pfVar4[1] = fVar17;
                  pfVar4[2] = fVar10 * fVar12 + fVar11 * fVar13;
                  func_00115C54(pfVar6,pfVar6,pfVar9);
                  uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),ALBW_AS_F32(uVar16) + fVar14);
                  uVar7 = uVar7 - 1;
                  if ((int)uVar7 < 0) {
                    *(undefined4 *)(param_1 + 0x9e8) = *(undefined4 *)(param_1 + 0xa84);
                    *(undefined4 *)(param_1 + 0x9ec) = *(undefined4 *)(param_1 + 0xa88);
                    *(undefined4 *)(param_1 + 0x9f0) = *(undefined4 *)(param_1 + 0xa8c);
                    *(float *)(param_1 + 0xa90) = *pfVar8;
                    *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x8cc);
                    *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_1 + 0x8d0);
                    return;
                  }
                  if (uVar7 < 10) break;
                  pfVar4 = afStack_160;
                }
              } while( true );
            }
            pfVar4 = afStack_160;
          } while (9 < uVar7);
        } while( true );
      }
      pfVar4 = afStack_e8;
    } while (9 < uVar7);
  } while( true );
}

