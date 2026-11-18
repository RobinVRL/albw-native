#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00341A34(int param_1,undefined4 *param_2,int param_3,int param_4);
extern int func_00341D28(int param_1,int param_2,int param_3);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053FC7C(int param_1);
extern int func_0053FF58(int param_1);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern undefined DAT_0000000f;
extern float DAT_00340d20;
extern uint DAT_00340d24;
extern int *DAT_00340d28;
extern int *DAT_00340d2c;
extern int *DAT_00340d30;
extern int *DAT_00340d34;
extern int *DAT_00340d38;
extern int *DAT_00340d3c;
extern int *DAT_00340d40;
extern int *DAT_00340d44;
extern int *DAT_00340d48;
extern int *DAT_00340d4c;
extern int *DAT_00340d50;
extern int *DAT_00340d54;
extern int *DAT_00340d58;
extern int *DAT_00340d5c;
extern int *DAT_00340d60;
extern int *DAT_00341194;
extern uint DAT_00341198;
extern float DAT_0034119c;
extern float DAT_003411a0;
extern float DAT_003411a4;
extern int *DAT_003411a8;
extern float DAT_003411ac;

// USA 0034097C <- EU 00340958 (Ghidra, non-matching)
// GLOBAL DAT_0000000f undefined
// GLOBAL DAT_00340d20 float
// GLOBAL DAT_00340d24 uint
// GLOBAL DAT_00340d28 int *
// GLOBAL DAT_00340d2c int *
// GLOBAL DAT_00340d30 int *
// GLOBAL DAT_00340d34 int *
// GLOBAL DAT_00340d38 int *
// GLOBAL DAT_00340d3c int *
// GLOBAL DAT_00340d40 int *
// GLOBAL DAT_00340d44 int *
// GLOBAL DAT_00340d48 int *
// GLOBAL DAT_00340d4c int *
// GLOBAL DAT_00340d50 int *
// GLOBAL DAT_00340d54 int *
// GLOBAL DAT_00340d58 int *
// GLOBAL DAT_00340d5c int *
// GLOBAL DAT_00340d60 int *
// GLOBAL DAT_00341194 int *
// GLOBAL DAT_00341198 uint
// GLOBAL DAT_0034119c float
// GLOBAL DAT_003411a0 float
// GLOBAL DAT_003411a4 float
// GLOBAL DAT_003411a8 int *
// GLOBAL DAT_003411ac float

undefined4 func_0034097C(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint in_fpscr;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong lVar27;
  float fVar28;
  ulonglong uVar29;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_f0 (*(float *)(albw_frame + 0x0))
  #define local_ec (*(float *)(albw_frame + 0x4))
  #define local_e8 (*(float *)(albw_frame + 0x8))
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define fStack_e0 (*(float *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define local_cc (*(float *)(albw_frame + 0x24))
  #define local_c8 (*(float *)(albw_frame + 0x28))
  #define local_c4 (*(float *)(albw_frame + 0x2c))
  #define local_c0 (*(float *)(albw_frame + 0x30))
  #define local_bc (*(float *)(albw_frame + 0x34))
  #define local_b8 (*(float *)(albw_frame + 0x38))
  #define local_b4 (*(undefined1 * *)(albw_frame + 0x3c))
  #define local_b0 (*(float * *)(albw_frame + 0x40))
  #define local_a8 (*(undefined1 *)(albw_frame + 0x48))
  #define local_a4 (*(float * *)(albw_frame + 0x4c))
  #define local_a0 (*(float * *)(albw_frame + 0x50))
  #define local_98 (*(undefined1 *)(albw_frame + 0x58))
  #define local_94 (*(float *)(albw_frame + 0x5c))
  #define local_90 (*(float *)(albw_frame + 0x60))
  #define local_8c (*(float *)(albw_frame + 0x64))
  #define local_88 (*(float * *)(albw_frame + 0x68))
  #define local_84 (*(float *)(albw_frame + 0x6c))
  #define local_80 (*(float *)(albw_frame + 0x70))
  #define local_7c (*(float *)(albw_frame + 0x74))
  #define auStack_78 ((undefined4 *)(albw_frame + 0x78))
  #define local_70 (*(float *)(albw_frame + 0x80))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x84))
  #define local_68 (*(int *)(albw_frame + 0x88))
  #define auStack_58 ((undefined4 *)(albw_frame + 0x98))
  *(undefined1 *)(param_1 + 0x16e) = 0;
  func_00341D28(param_1,1,1);
  bVar1 = *(byte *)(param_1 + 0x324);
  lVar27 = (ulonglong)(uint)ALBW_AS_U32(DAT_00340d20) << 0x20;
  pfVar18 = (float *)(param_1 + 0x4d8);
  if (((bVar1 & 1) != 0) &&
     (((((bVar1 & 2) == 0 || ((bVar1 & 4) != 0)) &&
       (bVar1 = *(byte *)(param_1 + 0x300), (bVar1 & 1) != 0)) &&
      (((bVar1 & 2) == 0 || ((bVar1 & 4) != 0)))))) {
    fVar23 = *(float *)(*(int *)(param_1 + 0x44) + 4);
    uVar16 = in_fpscr & 0xfffffff;
    in_fpscr = uVar16 | (uint)(fVar23 == DAT_00340d20) << 0x1e |
               (uint)(DAT_00340d20 <= fVar23) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      pfVar6 = *(float **)(param_1 + 0x60);
      in_fpscr = uVar16 | (uint)(*pfVar6 == DAT_00340d20) << 0x1e;
      bVar21 = false;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        in_fpscr = uVar16 | (uint)(pfVar6[1] == DAT_00340d20) << 0x1e;
        bVar21 = SUB41(in_fpscr >> 0x1e,0);
      }
      bVar19 = false;
      if (bVar21) {
        in_fpscr = in_fpscr & 0xfffffff | (uint)(pfVar6[2] == DAT_00340d20) << 0x1e;
        bVar19 = SUB41(in_fpscr >> 0x1e,0);
      }
      if (bVar19) {
        iVar7 = func_0053FF58(*(int *)(*(int *)(param_1 + 0x24) + 0x614));
        fVar23 = ALBW_AS_F32(((ulonglong)lVar27 >> 0x20));
        if (iVar7 != 0) {
          puVar8 = *(undefined4 **)(param_1 + 0x3c);
          puVar14 = *(undefined4 **)(param_1 + 0x40);
          *puVar8 = *puVar14;
          puVar8[1] = puVar14[1];
          puVar8[2] = puVar14[2];
          func_00115C54(*(float **)(param_1 + 0x3c),*(float **)(param_1 + 0x3c),pfVar18);
          bVar21 = false;
          if (*pfVar18 == fVar23) {
            bVar21 = *(float *)(param_1 + 0x4dc) == fVar23;
          }
          bVar19 = false;
          if (bVar21) {
            bVar19 = *(float *)(param_1 + 0x4e0) == fVar23;
          }
          if (!bVar19) {
            func_00341D28(param_1,0,1);
          }
          *(undefined1 *)(param_1 + 0x324) = *(undefined1 *)(param_1 + 0x300);
          *(undefined1 *)(param_1 + 0x325) = *(undefined1 *)(param_1 + 0x301);
          *(undefined2 *)(param_1 + 0x326) = *(undefined2 *)(param_1 + 0x302);
          *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_1 + 0x304);
          *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(param_1 + 0x308);
          *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x30c);
          *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x310);
          *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x314);
          *(undefined1 *)(param_1 + 0x33c) = *(undefined1 *)(param_1 + 0x318);
          *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x31c);
          *(undefined1 *)(param_1 + 0x344) = *(undefined1 *)(param_1 + 800);
          *(undefined2 *)(param_1 + 0x345) = *(undefined2 *)(param_1 + 0x321);
          *(undefined1 *)(param_1 + 0x347) = *(undefined1 *)(param_1 + 0x323);
          return 0;
        }
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0x324);
  bVar19 = (bVar1 & 1) == 0;
  bVar20 = (bVar1 & 8) == 0;
  bVar21 = bVar19 && bVar20;
  if (bVar19 && bVar20) {
    bVar21 = *(char *)(param_1 + 0x168) == '\0';
  }
  if (bVar21) {
    return 0;
  }
  if (((bVar1 & 2) != 0) && ((bVar1 & 4) == 0)) {
    return 0;
  }
  if (DAT_00340d24 <= *(uint *)(*(int *)(param_1 + 0x3c) + 4)) {
    return 0;
  }
  cVar2 = *(char *)(param_1 + 0x16e);
  bVar21 = cVar2 != '\0';
  if (!bVar21) {
    cVar2 = *(char *)(param_1 + 0x1e0);
  }
  if (bVar21 || cVar2 != '\0') {
    return 0;
  }
  uVar16 = DAT_00340d24;
  bVar21 = func_0053FC7C(*(int *)(*(int *)(param_1 + 0x24) + 0x614));
  if (bVar21) {
    return 0;
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0xd0) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 500) == 0) {
    return 0;
  }
  fVar23 = ALBW_AS_F32(((ulonglong)lVar27 >> 0x20));
  in_fpscr = in_fpscr & 0xfffffff;
  uVar22 = in_fpscr | (uint)(**(float **)(param_1 + 0x44) == fVar23) << 0x1e;
  if (SUB41(uVar22 >> 0x1e,0)) {
    uVar22 = in_fpscr | (uint)((*(float **)(param_1 + 0x44))[2] == fVar23) << 0x1e;
    bVar21 = false;
    if (SUB41(uVar22 >> 0x1e,0)) {
      uVar22 = in_fpscr | (uint)(*pfVar18 == fVar23) << 0x1e;
      bVar21 = SUB41(uVar22 >> 0x1e,0);
    }
    if (bVar21) {
      uVar10 = uVar22 & 0xfffffff;
      uVar22 = uVar10 | (uint)(*(float *)(param_1 + 0x4dc) == fVar23) << 0x1e;
      bVar21 = false;
      if (SUB41(uVar22 >> 0x1e,0)) {
        uVar22 = uVar10 | (uint)(*(float *)(param_1 + 0x4e0) == fVar23) << 0x1e;
        bVar21 = SUB41(uVar22 >> 0x1e,0);
      }
      if (bVar21) {
        return 0;
      }
    }
  }
  bVar21 = false;
  pcVar9 = (char *)(*DAT_00340d28 + 0x18);
  cVar2 = *pcVar9;
  if (cVar2 == '\n') {
    pcVar9 = *(char **)(*DAT_00340d28 + 0x1c);
  }
  if ((cVar2 == '\n' && pcVar9 == (char *)0x2) && (iVar7 = func_00581D60(*DAT_00340d2c), iVar7 == 0)
     ) {
    bVar21 = true;
  }
  piVar5 = DAT_00340d38;
  piVar4 = DAT_00340d34;
  piVar3 = DAT_00340d30;
  fVar23 = ALBW_AS_F32(((ulonglong)lVar27 >> 0x20));
  uVar10 = *(uint *)(param_1 + 500);
  uVar17 = 0;
  if (0 < (int)uVar10) {
    do {
      if (uVar17 < uVar10) {
        uVar16 = *(uint *)(param_1 + 0x1fc);
        piVar11 = (int *)(uVar16 + uVar17 * 4);
      }
      else {
        piVar11 = *(int **)(param_1 + 0x1fc);
      }
      if (*piVar11 != 0) {
        if (uVar17 < uVar10) {
          uVar16 = *(uint *)(param_1 + 0x1fc);
        }
        if (uVar17 < uVar10) {
          puVar15 = (uint *)(uVar16 + uVar17 * 4);
        }
        else {
          puVar15 = *(uint **)(param_1 + 0x1fc);
        }
        iVar7 = func_0052FBA0(*piVar3 + 0x3dbbc,*puVar15);
        if (iVar7 == 0) {
          return 0;
        }
        iVar12 = func_00588BE4(iVar7);
        iVar7 = *piVar4;
        bVar19 = iVar12 != iVar7;
        if (bVar19) {
          iVar7 = *piVar5;
        }
        if ((((((bVar19 && iVar12 != iVar7) && (iVar12 != *DAT_00340d3c)) &&
              (iVar12 != *DAT_00340d40)) &&
             (((iVar12 != *DAT_00340d44 && (iVar12 != *DAT_00340d48)) &&
              ((iVar12 != *DAT_00340d4c && ((iVar12 != *DAT_00340d50 && (iVar12 != *DAT_00340d54))))
              )))) && (iVar12 != *DAT_00340d58)) &&
           ((iVar12 != *DAT_00340d5c && (iVar12 != *DAT_00340d60)))) {
          if (!bVar21) {
            return 0;
          }
          if (*DAT_00341194 != iVar12) {
            return 0;
          }
        }
      }
      fVar23 = ALBW_AS_F32(((ulonglong)lVar27 >> 0x20));
      uVar10 = *(uint *)(param_1 + 500);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)uVar10);
  }
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x70);
  uVar16 = uVar22 & 0xfffffff | (uint)(*pfVar18 == fVar23) << 0x1e;
  bVar19 = false;
  if (SUB41(uVar16 >> 0x1e,0)) {
    uVar16 = uVar22 & 0xfffffff | (uint)(*(float *)(param_1 + 0x4e0) == fVar23) << 0x1e;
    bVar19 = SUB41(uVar16 >> 0x1e,0);
  }
  local_dc = fVar23;
  local_d8 = fVar23;
  local_d4 = fVar23;
  if (bVar19) {
    fVar24 = *(float *)(param_1 + 0x4dc);
    uVar22 = uVar16 & 0xfffffff | (uint)(fVar24 < fVar23) << 0x1f | (uint)(fVar24 == fVar23) << 0x1e
    ;
    uVar16 = uVar22 | (uint)(NAN(fVar24) || NAN(fVar23)) << 0x1c;
    bVar1 = (byte)(uVar22 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar16 >> 0x1c) & 1)) goto LAB_00341158;
  }
  iVar12 = 0;
  uVar29 = (ulonglong)DAT_00341198;
  local_70 = ALBW_AS_F32((param_1 + 0x184));
  iVar7 = 0;
  local_88 = (float *)0x0;
  local_68 = 0;
  pfVar6 = (float *)0x0;
  fVar24 = DAT_003411a4;
  fVar28 = DAT_003411a0;
  fVar26 = DAT_0034119c;
  local_84 = fVar23;
  local_80 = fVar23;
  local_7c = fVar23;
  do {
    while( true ) {
      func_004D80A4(&local_cc,iVar7 << 0x1d,ALBW_AS_F32(uVar29));
      if (bVar21) {
        pfVar18 = (float *)&DAT_0000000f;
      }
      local_e8 = **(float **)(param_1 + 0x3c) + local_cc * fVar26;
      if (!bVar21) {
        pfVar18 = (float *)0x1;
      }
      local_90 = (*(float **)(param_1 + 0x3c))[1] + fVar28;
      fStack_e0 = *(float *)(*(int *)(param_1 + 0x3c) + 8) + local_c4 * fVar26;
      local_e4 = *(float *)(*(int *)(param_1 + 0x3c) + 4) - fVar28;
      local_c8 = fVar23;
      local_94 = local_e8;
      local_8c = fStack_e0;
      puVar8 = func_004331A0(auStack_58);
      func_00436384(&local_c0,puVar8);
      piVar3 = DAT_003411a8;
      local_98 = 1;
      local_bc = local_70;
      *(float *)(param_1 + 0x1d8) = fVar24;
      local_a4 = &local_e8;
      local_a0 = &local_94;
      iVar13 = func_004A8030(*piVar3,(int *)&local_c0,(uint)pfVar18);
      fVar25 = fVar24;
      if (iVar13 != 0) {
        fVar25 = *(float *)(param_1 + 0x1d8);
      }
      fVar25 = fVar25 - *(float *)(*(int *)(param_1 + 0x3c) + 4);
      uVar22 = uVar16 & 0xfffffff | (uint)(fVar25 < fVar23) << 0x1f |
               (uint)(fVar25 == fVar23) << 0x1e;
      uVar16 = uVar22 | (uint)(NAN(fVar25) || NAN(fVar23)) << 0x1c;
      bVar1 = (byte)(uVar22 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar16 >> 0x1c) & 1)) {
        fVar25 = -fVar25;
      }
      if (0x3e800000 < (int)ALBW_AS_U32(fVar25)) {
        func_00115C54(&local_84,&local_84,&local_cc);
        iVar12 = iVar12 + 1;
      }
      pfVar18 = (float *)(uint)(0x3e800000 < (int)ALBW_AS_U32(fVar25));
      if (iVar7 != 0) break;
      iVar7 = 1;
      pfVar6 = pfVar18;
      local_88 = pfVar18;
    }
    if (pfVar6 != pfVar18) {
      local_68 = local_68 + 1;
      pfVar6 = pfVar18;
    }
    if (iVar7 == 7) {
      if (local_88 != pfVar18) {
        local_68 = local_68 + 1;
      }
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  if (iVar12 == 8) {
    bVar19 = false;
LAB_00340f80:
    func_00115DC8(&local_84);
    if (5 < iVar12) {
      iVar12 = 5;
    }
    fVar26 = (float)VectorSignedToFloat(iVar12,(byte)(uVar16 >> 0x15) & 3);
    local_dc = -local_84;
    local_d8 = -local_80;
    local_d4 = -local_7c;
    func_00115D70(&local_dc,&local_dc,fVar26 * DAT_003411ac);
    func_00115C54(&local_c0,*(float **)(param_1 + 0x3c),&local_dc);
    local_d0 = local_c0;
    local_c8 = local_b8;
    local_cc = local_bc + fVar28;
    local_f0 = local_c0;
    local_e8 = local_b8;
    if (bVar21) {
      uVar16 = 0xf;
    }
    else {
      uVar16 = 1;
    }
    local_ec = local_bc - fVar28;
    puVar8 = func_004331A0(&uStack_6c);
    func_00436384(&local_c0,puVar8);
    piVar3 = DAT_003411a8;
    local_98 = 1;
    local_bc = local_70;
    *(float *)(param_1 + 0x1d8) = fVar24;
    local_a4 = &local_f0;
    local_a0 = &local_d0;
    iVar7 = func_004A8030(*piVar3,(int *)&local_c0,uVar16);
    if (iVar7 != 0) {
      fVar24 = *(float *)(param_1 + 0x1d8);
    }
    fVar24 = fVar24 - *(float *)(*(int *)(param_1 + 0x3c) + 4);
    if (fVar24 <= fVar23) {
      fVar24 = -fVar24;
    }
    if (0x3e800000 < (int)ALBW_AS_U32(fVar24)) {
      return 0;
    }
  }
  else {
    bVar19 = local_68 < 3;
    if (iVar12 != 0) goto LAB_00340f80;
  }
  if (!bVar19) {
    return 0;
  }
  if ((local_dc != fVar23) || (local_d8 != fVar23 || local_d4 != fVar23)) {
    pfVar18 = *(float **)(param_1 + 0x3c);
    func_00115C54(&local_d0,pfVar18,&local_dc);
    local_f0 = local_d0;
    local_ec = local_cc;
    local_e8 = local_c8;
    puVar8 = func_004331A0(auStack_78);
    func_00436384(&local_d0,puVar8);
    local_cc = ALBW_AS_F32((param_1 + 0x1a4));
    local_a8 = 1;
    local_b4 = (undefined1 *)&local_f0;
    local_b0 = pfVar18;
    iVar7 = func_004A8030(*DAT_003411a8,(int *)&local_d0,0xf);
    if (iVar7 != 0) {
      return 0;
    }
  }
LAB_00341158:
  func_00115C54(&local_d0,*(float **)(param_1 + 0x3c),&local_dc);
  local_f0 = local_d0;
  local_ec = local_cc;
  local_e8 = local_c8;
  return func_00341A34(param_1,&local_f0,0,0);
}

