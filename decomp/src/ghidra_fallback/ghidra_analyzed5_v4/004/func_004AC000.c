#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001BAD4C(int param_1,uint param_2,int param_3);
extern int func_001E2444(int param_1,int *param_2,int param_3,undefined4 param_4);
extern int func_0027A4DC(int param_1);
extern int func_0029BD88(int *param_1,char *param_2);
extern int func_00504D48(int param_1,int param_2);
extern int *DAT_004ac41c;
extern int *DAT_004ac420;
extern undefined *DAT_004ac424;
extern undefined *DAT_004ac428;
extern char *DAT_004ac42c;
extern int DAT_004ac430;
extern undefined4 DAT_004ac7b8;
extern int *DAT_004ac7bc;
extern int *DAT_004ac7c0;
extern char s_Course_Demo090_Common_bch_004ac4bc[];
extern char s_Course_cave_Common_bch_004ac50c[];
extern char s_Course_dgn_CastleCommon_bch_004ac4f0[];
extern char s_Course_dgn_DarkCommon_bch_004ac748[];
extern char s_Course_dgn_DokuroCommon_bch_004ac780[];
extern char s_Course_dgn_EastCommon_bch_004ac6f4[];
extern char s_Course_dgn_GanonCommon_bch_004ac79c[];
extern char s_Course_dgn_HagureCommon_bch_004ac434[];
extern char s_Course_dgn_HeraCommon_bch_004ac72c[];
extern char s_Course_dgn_IceCommon_bch_004ac450[];
extern char s_Course_dgn_KameCommon_bch_004ac488[];
extern char s_Course_dgn_SandCommon_bch_004ac46c[];
extern char s_Course_dgn_WaterCommon_bch_004ac764[];
extern char s_Course_dgn_WindCommon_bch_004ac710[];
extern char s_Course_fld_o_Common_bch_004ac4a4[];
extern char s_Course_fld_u_Common_bch_004ac4d8[];
extern char s_Course_idr_Common_bch_004ac6dc[];
extern char s_cf_004ac434[];
extern char s_cf_004ac450[];
extern char s_cf_004ac46c[];
extern char s_cf_004ac488[];
extern char s_cf_004ac4a4[];
extern char s_cf_004ac4bc[];
extern char s_cf_004ac4d8[];
extern char s_cf_004ac4f0[];
extern char s_cf_004ac50c[];
extern char s_cf_004ac6dc[];
extern char s_cf_004ac6f4[];
extern char s_cf_004ac710[];
extern char s_cf_004ac72c[];
extern char s_cf_004ac748[];
extern char s_cf_004ac764[];
extern char s_cf_004ac780[];
extern char s_cf_004ac79c[];

// USA 004AC000 <- EU 004ABFD8 (Ghidra, non-matching)
// GLOBAL DAT_004ac41c int *
// GLOBAL DAT_004ac420 int *
// GLOBAL DAT_004ac424 undefined *
// GLOBAL DAT_004ac428 undefined *
// GLOBAL DAT_004ac42c char *
// GLOBAL DAT_004ac430 int
// GLOBAL DAT_004ac7b8 undefined4
// GLOBAL DAT_004ac7bc int *
// GLOBAL DAT_004ac7c0 int *
// GLOBAL s_cf_004ac4bc string
// GLOBAL s_cf_004ac50c string
// GLOBAL s_cf_004ac4f0 string
// GLOBAL s_cf_004ac748 string
// GLOBAL s_cf_004ac780 string
// GLOBAL s_cf_004ac6f4 string
// GLOBAL s_cf_004ac79c string
// GLOBAL s_cf_004ac434 string
// GLOBAL s_cf_004ac72c string
// GLOBAL s_cf_004ac450 string
// GLOBAL s_cf_004ac488 string
// GLOBAL s_cf_004ac46c string
// GLOBAL s_cf_004ac764 string
// GLOBAL s_cf_004ac710 string
// GLOBAL s_cf_004ac4a4 string
// GLOBAL s_cf_004ac4d8 string
// GLOBAL s_cf_004ac6dc string

undefined4 * func_004AC000(int param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_80 (*(int *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define iStack_78 (*(int *)(albw_frame + 0x18))
  #define pcStack_74 (*(char * *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define local_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x40))
  #define iStack_4c (*(int *)(albw_frame + 0x44))
  #define local_48 (*(undefined4 *)(albw_frame + 0x48))
  #define local_44 (*(undefined1 *)(albw_frame + 0x4c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x4d))
  #define local_42 (*(undefined1 *)(albw_frame + 0x4e))
  #define local_41 (*(undefined1 *)(albw_frame + 0x4f))
  #define local_40 (*(undefined1 *)(albw_frame + 0x50))
  #define local_3c (*(int *)(albw_frame + 0x54))
  #define local_38 (*(char * *)(albw_frame + 0x58))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(int * *)(albw_frame + 0x60))
  #define local_2c (*(undefined1 *)(albw_frame + 0x64))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x68))
  piVar5 = DAT_004ac41c;
  *(undefined4 *)(param_1 + 0x7730) = 0;
  pcVar12 = (char *)0x5b;
  iVar11 = *piVar5;
  pcVar17 = (char *)(iVar11 + 0x18);
  *(int *)(param_1 + 0x40) = param_1 + 0x44 + (short)*(char *)(iVar11 + 0x18) * 0x16c;
  if (*(char *)(*DAT_004ac420 + 0x25) == '\x02') {
    func_0029BD88(*(int **)(*(int *)(iVar11 + 0x14) + 0x138),
                  (char *)(*(int *)(iVar11 + 0x14) + 0xe0));
  }
  pcVar16 = *(char **)(param_1 + 0x44 + (short)*pcVar17 * 0x16c);
  func_0027A4DC((int)*pcVar17);
  if (0 < (int)pcVar16) {
    iVar6 = func_0010CEE0((int)pcVar16 * 0x38,(int *)0x0,4);
    iVar7 = 0;
    if (iVar6 != 0) {
      pcVar12 = pcVar16;
      iVar7 = func_00100118(iVar6,DAT_004ac424,0x38,(int)pcVar16);
    }
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x76a0) = iVar7;
      *(char **)(param_1 + 0x769c) = pcVar16;
    }
  }
  func_001BAD4C(*(int *)(param_1 + 0x40),(int)*pcVar17,(int)pcVar16);
  local_28 = (undefined4 *)(param_1 + 0x7728);
  *local_28 = 0;
  bVar4 = true;
  piVar13 = *(int **)(param_1 + 0x76b4);
  piVar14 = piVar13 + *(int *)(param_1 + 0x76ac);
  iVar7 = (int)*pcVar17;
  if (iVar7 - 9U < 0xd) {
    if ((iVar7 == 0xb || iVar7 == 0x11) || iVar7 == 0x14) {
      if ((int)*(char *)(*piVar5 + 0x18) - 9U < 0xd) {
        sVar2 = *(short *)(*(int *)(param_1 + 0x40) + 6);
        iVar6 = (int)sVar2;
        sVar3 = *(short *)(*(int *)(param_1 + 0x40) + 4);
        uVar10 = (uint)sVar3;
        iVar7 = (int)sVar2 * (int)sVar3;
        if (iVar7 == 0) goto LAB_004ac23c;
        uVar1 = (int)uVar10 >> 0x1f;
        if (iVar7 < 0) {
          iVar6 = iVar6 + ((uVar10 ^ uVar1) - uVar1);
        }
        else if (iVar6 < 1) {
          iVar6 = (uVar10 ^ uVar1) - uVar1;
        }
      }
      else {
LAB_004ac23c:
        iVar6 = 1;
      }
      pcVar16 = (char *)(iVar6 + 2);
      if (piVar13 != piVar14) {
        do {
          iVar7 = *piVar13;
          if (0 < (int)pcVar16) {
            iVar8 = func_0010CEE0((int)pcVar16 * 0xc,(int *)0x0,4);
            iVar6 = 0;
            if (iVar8 != 0) {
              pcVar12 = pcVar16;
              iVar6 = func_00100118(iVar8,DAT_004ac428,0xc,(int)pcVar16);
            }
            if (iVar6 != 0) {
              *(int *)(iVar7 + 8) = iVar6;
              *(char **)(iVar7 + 4) = pcVar16;
            }
          }
          piVar13 = piVar13 + 1;
        } while (piVar13 != piVar14);
      }
    }
    else {
      for (; piVar13 != piVar14; piVar13 = piVar13 + 1) {
        iVar7 = *piVar13;
        iVar6 = func_0010CEE0(0x84,(int *)0x0,4);
        if (iVar6 != 0) {
          pcVar12 = (char *)0xb;
          iVar6 = func_00100118(iVar6,DAT_004ac428,0xc,0xb);
          if (iVar6 != 0) {
            *(int *)(iVar7 + 8) = iVar6;
            *(undefined4 *)(iVar7 + 4) = 0xb;
          }
        }
      }
    }
  }
  else if (piVar13 != piVar14) {
    do {
      iVar7 = *piVar13;
      pcVar15 = pcVar16 + 1;
      if (0 < (int)pcVar15) {
        iVar8 = func_0010CEE0((int)(pcVar16 + 1) * 0xc,(int *)0x0,4);
        iVar6 = 0;
        if (iVar8 != 0) {
          pcVar12 = pcVar15;
          iVar6 = func_00100118(iVar8,DAT_004ac428,0xc,(int)pcVar15);
        }
        if (iVar6 != 0) {
          *(int *)(iVar7 + 8) = iVar6;
          *(char **)(iVar7 + 4) = pcVar15;
        }
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != piVar14);
  }
  iVar7 = DAT_004ac430;
  pcVar16 = DAT_004ac42c;
  iVar11 = *(int *)(iVar11 + 0x1c);
  local_90 = DAT_004ac430;
  local_8c = DAT_004ac42c;
  iVar6 = (int)*pcVar17;
  if (iVar6 == 0x10) {
    local_8c = s_Course_dgn_HagureCommon_bch_004ac434;
    goto switchD_004ac1a4_caseD_6;
  }
  if (0x10 < iVar6) {
    if (iVar6 == 0x24) goto switchD_004ac1a4_caseD_4;
    if (iVar6 < 0x25) {
      if (iVar6 != 0x14) {
        if (iVar6 < 0x15) {
          if (iVar6 == 0x11) {
            local_8c = s_Course_dgn_IceCommon_bch_004ac450;
          }
          else if (iVar6 == 0x12) {
            local_8c = s_Course_dgn_SandCommon_bch_004ac46c;
          }
          else if (iVar6 == 0x13) {
            local_8c = s_Course_dgn_KameCommon_bch_004ac488;
          }
          goto switchD_004ac1a4_caseD_6;
        }
        if (iVar6 != 0x15) {
          if (iVar6 != 0x20) goto switchD_004ac1a4_caseD_6;
          goto LAB_004ac580;
        }
      }
      goto switchD_004ac3dc_caseD_4;
    }
    if (iVar6 == 0x2d) goto switchD_004ac1a4_caseD_1;
    if (0x2d < iVar6) {
      if (iVar6 == 0x2f || iVar6 == 0x38) {
        local_8c = s_Course_fld_o_Common_bch_004ac4a4;
      }
      goto switchD_004ac1a4_caseD_6;
    }
    if (iVar6 == 0x25) {
      if ((iVar11 != 2) && (iVar11 != 3)) goto switchD_004ac1a4_caseD_6;
    }
    else {
      if (iVar6 == 0x28) {
        if (iVar11 != 0xe) goto switchD_004ac1a4_caseD_6;
        goto switchD_004ac1a4_caseD_4;
      }
      if (iVar6 != 0x2c) goto switchD_004ac1a4_caseD_6;
    }
    goto LAB_004ac580;
  }
  switch(iVar6) {
  case 0:
    if (iVar11 == 0x2a) {
      local_8c = s_Course_Demo090_Common_bch_004ac4bc;
      break;
    }
    goto LAB_004ac580;
  case 1:
switchD_004ac1a4_caseD_1:
    local_8c = s_Course_fld_u_Common_bch_004ac4d8;
    break;
  case 2:
    if (iVar11 != 4) {
      if (iVar11 == 6) goto switchD_004ac1a4_caseD_c;
      if (iVar11 != 0xc) goto switchD_004ac3dc_caseD_0;
    }
  case 4:
switchD_004ac1a4_caseD_4:
    local_8c = s_Course_cave_Common_bch_004ac50c;
    break;
  case 3:
    switch(iVar11) {
    default:
switchD_004ac3dc_caseD_0:
      local_8c = s_Course_idr_Common_bch_004ac6dc;
      break;
    case 1:
    case 5:
    case 6:
    case 7:
    case 0xb:
      goto switchD_004ac1a4_caseD_4;
    case 4:
switchD_004ac3dc_caseD_4:
      local_8c = s_Course_dgn_GanonCommon_bch_004ac79c;
      break;
    }
  case 5:
    if (iVar11 == 0) goto switchD_004ac1a4_caseD_e;
    goto switchD_004ac1a4_caseD_4;
  case 7:
    if (iVar11 != 1) break;
LAB_004ac580:
    local_8c = s_Course_fld_o_Common_bch_004ac4a4;
    break;
  case 9:
    local_8c = s_Course_dgn_EastCommon_bch_004ac6f4;
    break;
  case 10:
    local_8c = s_Course_dgn_WindCommon_bch_004ac710;
    break;
  case 0xb:
    local_8c = s_Course_dgn_HeraCommon_bch_004ac72c;
    break;
  case 0xc:
switchD_004ac1a4_caseD_c:
    local_8c = s_Course_dgn_CastleCommon_bch_004ac4f0;
    break;
  case 0xd:
    local_8c = s_Course_dgn_DarkCommon_bch_004ac748;
    break;
  case 0xe:
switchD_004ac1a4_caseD_e:
    local_8c = s_Course_dgn_WaterCommon_bch_004ac764;
    break;
  case 0xf:
    local_8c = s_Course_dgn_DokuroCommon_bch_004ac780;
  }
switchD_004ac1a4_caseD_6:
  local_7c = s_Course_dgn_IceCommon_bch_004ac450 + 0x18;
  local_80 = DAT_004ac430;
  (**(code **)(DAT_004ac430 + 8))(&local_90);
  (**(code **)(local_90 + 8))(&local_90);
  pcVar17 = local_8c;
  (**(code **)(local_80 + 8))(&local_80);
  if (pcVar17 != local_7c) {
    iVar11 = 0;
    do {
      pcVar12 = local_7c;
      if (local_8c[iVar11] != local_7c[iVar11]) break;
      if (local_8c[iVar11] == '\0') goto LAB_004ac618;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x40001);
    bVar4 = false;
  }
LAB_004ac618:
  puVar9 = (undefined4 *)0x0;
  if (!bVar4) {
    local_70 = 0;
    local_6c = 0;
    uStack_68 = 0x20;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    iStack_78 = iVar7;
    pcStack_74 = pcVar16;
    local_48 = DAT_004ac7b8;
    uStack_50 = 0;
    iStack_4c = iVar7;
    local_44 = 7;
    local_43 = 4;
    local_42 = 0;
    local_41 = 0;
    local_3c = iVar7;
    local_40 = 0;
    local_34 = 0;
    local_30 = (int *)0x0;
    local_38 = local_8c;
    local_2c = 1;
    local_30 = func_001E2444(*DAT_004ac7bc,&local_90,-1,pcVar12);
    puVar9 = (undefined4 *)0x0;
    if (local_30 != (int *)0x0) {
      local_42 = 7;
      puVar9 = func_00504D48(*DAT_004ac7c0,(int)&iStack_78);
      *local_28 = puVar9;
    }
  }
  return puVar9;
}

