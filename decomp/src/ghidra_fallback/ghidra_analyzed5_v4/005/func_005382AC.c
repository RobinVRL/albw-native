#include "ghidra_types.h"

extern int func_0049940C(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern float func_00523718(int param_1);
extern int func_00537B38(int param_1);
extern int func_00540A70(int param_1,int *param_2);
extern int func_005471AC(int param_1,int *param_2);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_00584B94(int param_1,int param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_0058843C(int param_1,char *param_2);
extern int *DAT_005385a4;
extern float DAT_005385a8;
extern undefined4 *DAT_005385ac;
extern int *DAT_005385b0;
extern int *DAT_005385b4;
extern int DAT_005385b8;
extern int DAT_005385bc;
extern int DAT_005385c0;
extern int DAT_005385c4;
extern int DAT_005385c8;
extern int *DAT_005385dc;
extern undefined4 *DAT_005385e0;
extern int DAT_00538934;
extern int DAT_00538eb8;
extern int DAT_00538ebc;
extern int *DAT_00538ec0;
extern int DAT_00538ec4;
extern int DAT_00538ec8;
extern int DAT_00538ecc;
extern char s_BGM_Demo_d_00538918[];
extern char s_BGM_EVENT_HYRULE_BARRIER_00538938[];
extern char s_BGM_EVENT_MEDIUM_005385e4[];
extern char s_BGM_RENTAL_SHOP_00538924[];
extern char s_SE_S_TELEPATHY_005385cc[];
extern char s__Lv_d_00538ed0[];
extern char s_cf_00538918[];
extern char s_cf_00538ed0[];

// USA 005382AC <- EU 00538284 (Ghidra, non-matching)
// GLOBAL DAT_005385a4 int *
// GLOBAL DAT_005385a8 float
// GLOBAL DAT_005385ac undefined4 *
// GLOBAL DAT_005385b0 int *
// GLOBAL DAT_005385b4 int *
// GLOBAL DAT_005385b8 int
// GLOBAL DAT_005385bc int
// GLOBAL DAT_005385c0 int
// GLOBAL DAT_005385c4 int
// GLOBAL DAT_005385c8 int
// GLOBAL DAT_005385dc int *
// GLOBAL DAT_005385e0 undefined4 *
// GLOBAL DAT_00538934 int
// GLOBAL DAT_00538eb8 int
// GLOBAL DAT_00538ebc int
// GLOBAL DAT_00538ec0 int *
// GLOBAL DAT_00538ec4 int
// GLOBAL DAT_00538ec8 int
// GLOBAL DAT_00538ecc int
// GLOBAL s_cf_00538918 string
// GLOBAL s_BGM_EVENT_HYRULE_BARRIER_00538938 string
// GLOBAL s_BGM_EVENT_MEDIUM_005385e4 string
// GLOBAL s_BGM_RENTAL_SHOP_00538924 string
// GLOBAL s_SE_S_TELEPATHY_005385cc string
// GLOBAL s_cf_00538ed0 string

/* WARNING: Type propagation algorithm not settling */

undefined4 func_005382AC(undefined4 param_1,int *param_2,char *param_3,int param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(char * *)(albw_frame + 0xc))
  #define local_50 (*(int *)(albw_frame + 0x10))
  #define local_4c (*(char * *)(albw_frame + 0x14))
  #define local_48 (*(int *)(albw_frame + 0x18))
  #define local_44 (*(int *)(albw_frame + 0x1c))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define piStack_30 (*(int * *)(albw_frame + 0x30))
  #define pcStack_2c (*(char * *)(albw_frame + 0x34))
  #define local_28 (*(int *)(albw_frame + 0x38))
  if (param_2 == (int *)0x0) {
    return 0;
  }
  uVar7 = (uint)*param_3;
  uVar8 = *(uint *)(param_3 + 4);
  uStack_34 = param_1;
  piStack_30 = param_2;
  pcStack_2c = param_3;
  local_28 = param_4;
  piVar3 = (int *)func_00582260(*DAT_005385a4,uVar7,uVar8);
  iVar6 = DAT_005385b8;
  puVar1 = DAT_005385ac;
  iVar11 = *piVar3;
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  *(undefined1 *)param_2[1] = 0;
  local_58 = 0;
  local_54 = (char *)0x0;
  local_48 = 0;
  local_44 = 0;
  iVar9 = *DAT_005385b0;
  iVar10 = *DAT_005385b4;
  fVar13 = DAT_005385a8;
  if (iVar11 == 0) {
    uVar4 = (int)*param_3 - 4;
    if (1 < uVar4) {
      uVar4 = (int)*param_3 - 0x16;
    }
    if (uVar4 < 2) {
      func_004994B0((int)param_2,puVar1[0xc],uVar8,param_4);
      goto LAB_00538e7c;
    }
    switch(uVar7) {
    case 0:
      if (iVar9 == 0) goto LAB_0053849c;
      bVar2 = func_00584B94(iVar9,0xfb);
      if ((bVar2) && (bVar2 = func_00584B94(iVar9,DAT_005385bc), !bVar2)) break;
      bVar2 = func_00584B94(iVar9,0x174);
      if (((!bVar2) ||
          ((bVar2 = func_00584B94(iVar9,DAT_005385c0), !bVar2 ||
           (bVar2 = func_00584B94(iVar9,DAT_005385c4), bVar2)))) ||
         (bVar2 = func_00584B94(iVar9,DAT_005385c8), bVar2)) {
LAB_0053849c:
        bVar2 = false;
      }
      else {
        local_54 = s_SE_S_TELEPATHY_005385cc;
        local_58 = iVar6;
        iVar11 = func_005471AC(*DAT_005385dc,&local_58);
        if (iVar11 != 0) goto LAB_0053849c;
        bVar2 = true;
      }
      if (bVar2) break;
      goto LAB_00538aec;
    case 1:
switchD_00538368_caseD_1:
      piVar3 = DAT_005385dc;
      local_54 = (char *)puVar1[5];
      local_58 = iVar6;
      iVar11 = func_00540A70(*DAT_005385dc,&local_58);
      if (iVar11 == 0) {
        local_4c = (char *)puVar1[7];
        local_50 = iVar6;
        iVar11 = func_00540A70(*piVar3,&local_50);
        if ((iVar11 != 0) || ((iVar9 != 0 && (bVar2 = func_00584B94(iVar9,DAT_00538ec4), bVar2)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          func_004994B0((int)param_2,puVar1[7],uVar8,param_4);
          break;
        }
        local_44 = puVar1[6];
        local_48 = iVar6;
        iVar6 = func_00540A70(*piVar3,&local_48);
        if (((iVar6 == 0) && (iVar6 = func_0058843C(*piVar3,param_3), iVar6 == 0)) &&
           ((iVar9 == 0 || (bVar2 = func_00584B94(iVar9,DAT_00538eb8), bVar2)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          func_004994B0((int)param_2,puVar1[6],uVar8,param_4);
          break;
        }
      }
      func_004994B0((int)param_2,puVar1[5],uVar8,param_4);
      break;
    case 2:
      goto switchD_00538368_caseD_2;
    default:
      goto switchD_00538368_caseD_3;
    case 7:
      func_004994B0((int)param_2,puVar1[0x10],uVar8,param_4);
      break;
    case 8:
      if (*(uint *)(param_3 + 4) < 10) {
        func_004994B0((int)param_2,s_BGM_Demo_d_00538918,*(uint *)(param_3 + 4) + 1,param_4);
      }
      break;
    case 9:
      if (((*(int *)(param_3 + 4) != 2) || (iVar9 == 0)) ||
         (bVar2 = func_00584B94(iVar9,0xfa), bVar2)) {
        func_004994B0((int)param_2,*DAT_005385e0,uVar8,param_4);
      }
      else {
        func_004994B0((int)param_2,s_BGM_EVENT_MEDIUM_005385e4,uVar8,param_4);
      }
      break;
    case 10:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      func_004994B0((int)param_2,DAT_005385e0[uVar7 - 9],uVar8,param_4);
      break;
    case 0xc:
      if (*(int *)(param_3 + 4) == 5) {
        if ((iVar9 != 0) && (bVar2 = func_00584B94(iVar9,0x1a4), !bVar2)) {
          func_004994B0((int)param_2,puVar1[0x18],uVar8,param_4);
        }
      }
      else {
        func_004994B0((int)param_2,DAT_005385e0[3],uVar8,param_4);
      }
      break;
    case 0x14:
      goto switchD_00538368_caseD_14;
    case 0x18:
    case 0x19:
    case 0x1a:
      func_004994B0((int)param_2,puVar1[0x14],uVar8,param_4);
    }
    goto LAB_00538e7c;
  }
  if ((((local_28 != 0) && ((uVar7 == 2 || iVar11 == 3) || iVar11 == 4)) && (iVar10 != 0)) &&
     ((*(char *)(iVar10 + 0x70) == '\x04' && (fVar12 = func_00523718(iVar10), fVar13 < fVar12)))) {
    func_004994B0((int)param_2,puVar1[0x1a],uVar8,param_4);
    goto switchD_005386cc_caseD_20;
  }
  if (iVar11 == 0x1b) {
    if (((iVar9 == 0) || (bVar2 = func_00584B94(iVar9,0x174), !bVar2)) ||
       ((bVar2 = func_00584B94(iVar9,DAT_005385c0), !bVar2 ||
        ((bVar2 = func_00584B94(iVar9,DAT_005385c4), bVar2 ||
         (bVar2 = func_00584B94(iVar9,DAT_005385c8), bVar2)))))) {
LAB_005389e4:
      bVar2 = false;
    }
    else {
      local_4c = s_SE_S_TELEPATHY_005385cc;
      local_50 = iVar6;
      iVar5 = func_005471AC(*DAT_005385dc,&local_50);
      if (iVar5 != 0) goto LAB_005389e4;
      bVar2 = true;
    }
    if (!bVar2) {
LAB_005389f0:
      local_58 = 1;
    }
  }
  else if (iVar11 < 0x1b) {
    if (iVar11 == 0x17) {
      local_44 = 1;
    }
    else if (iVar11 < 0x17) {
      if (iVar11 == 1) {
        if (iVar9 != 0) {
          bVar2 = func_00584B94(iVar9,0x104);
          if (bVar2) {
            func_004994B0((int)param_2,s_BGM_RENTAL_SHOP_00538924,uVar8,param_4);
          }
          else {
            bVar2 = func_00584B94(iVar9,0x6e);
            if ((!bVar2) || (bVar2 = func_00584B94(iVar9,0xd2), bVar2)) {
              bVar2 = func_00584B94(iVar9,0xd2);
              if (bVar2) {
                func_004994B0((int)param_2,puVar1[0x16],uVar8,param_4);
              }
              else {
                bVar2 = func_00584B94(iVar9,7);
                if (bVar2) {
                  func_004994B0((int)param_2,puVar1[2],uVar8,param_4);
                }
              }
            }
          }
        }
      }
      else if (iVar11 == 10) {
        if ((iVar9 != 0) && (bVar2 = func_00584B94(iVar9,DAT_005385bc), bVar2)) {
          func_004994B0((int)param_2,puVar1[9],uVar8,param_4);
        }
      }
      else if (iVar11 == 0xd) {
        if ((iVar9 == 0) || (bVar2 = func_00584B94(iVar9,0x144), bVar2)) {
          func_004994B0((int)param_2,puVar1[0xd],uVar8,param_4);
        }
        else {
          func_004994B0((int)param_2,puVar1[0x17],uVar8,param_4);
        }
      }
    }
    else if (iVar11 == 0x18 || iVar11 == 0x19) {
      if (uVar7 != 10) {
        if ((int)uVar7 < 0xb) {
          if ((uVar7 != 0 && uVar7 != 2) && (uVar7 != 4 && uVar7 != 9)) {
LAB_0053890c:
            local_54 = (char *)0x1;
            goto switchD_005386cc_caseD_20;
          }
        }
        else if ((uVar7 != 0xb && uVar7 != 0xc) && (uVar7 != 0x12 && uVar7 != 0x16))
        goto LAB_0053890c;
      }
      goto LAB_005389f0;
    }
  }
  else {
    switch(iVar11) {
    case 0x1c:
    case 0x1d:
      if (((iVar9 != 0) && (bVar2 = func_00584B94(iVar9,0x69), bVar2)) &&
         (bVar2 = func_00584B94(iVar9,0x6e), !bVar2)) {
        func_004994B0((int)param_2,puVar1[0x15],uVar8,param_4);
        break;
      }
      goto LAB_005389f0;
    case 0x1e:
      if (iVar9 == 0) goto LAB_005389f0;
      bVar2 = func_00584B94(iVar9,0xfb);
      if ((!bVar2) || (bVar2 = func_00584B94(iVar9,0x134), bVar2)) {
        bVar2 = func_00584B94(iVar9,DAT_005385bc);
        if ((!bVar2) || (bVar2 = func_00584B94(iVar9,DAT_00538934), bVar2)) goto LAB_005389f0;
      }
      else {
        func_004994B0((int)param_2,s_BGM_EVENT_HYRULE_BARRIER_00538938,uVar8,param_4);
      }
      break;
    case 0x1f:
      if ((iVar9 != 0) && (bVar2 = func_00584B94(iVar9,DAT_00538eb8), bVar2)) goto LAB_0053890c;
      break;
    case 0x24:
      local_48 = 1;
    }
  }
switchD_005386cc_caseD_20:
  if (*(char *)param_2[1] == '\0') {
    func_004994B0((int)param_2,*(undefined4 *)(DAT_00538ebc + iVar11 * 4),uVar8,param_4);
  }
switchD_00538368_caseD_3:
  if (local_48 == 0) {
LAB_00538ae0:
    if (local_58 == 0) {
      if (local_54 != (char *)0x0) goto switchD_00538368_caseD_1;
      if (local_44 == 0) goto LAB_00538e7c;
switchD_00538368_caseD_14:
      if (iVar9 != 0) {
        bVar2 = func_00584B94(iVar9,DAT_00538ec8);
        uVar7 = (uint)bVar2;
        bVar2 = func_00584B94(iVar9,0x2c8);
        if (bVar2) {
          uVar7 = uVar7 + 1;
        }
        bVar2 = func_00584B94(iVar9,DAT_00538ecc);
        if (bVar2) {
          uVar7 = uVar7 + 1;
        }
        bVar2 = func_00584B94(iVar9,0x2cc);
        if (bVar2) {
          uVar7 = uVar7 + 1;
        }
        if (iVar11 == 0x17) {
          if (uVar7 != 4) {
            *(undefined1 *)param_2[1] = 0;
            goto LAB_00538e7c;
          }
          func_004994B0((int)param_2,puVar1[10],uVar8,param_4);
        }
        else {
          func_004994B0((int)param_2,puVar1[10],uVar8,param_4);
          if (uVar7 == 0) goto LAB_00538e7c;
        }
        func_0049940C(param_2,s__Lv_d_00538ed0,uVar7 + 1,param_4);
      }
      goto LAB_00538e7c;
    }
LAB_00538aec:
    if (local_28 != 0 && iVar10 != 0) {
LAB_00538afc:
      if ((*(char *)(iVar10 + 0x70) == '\x04') && (fVar12 = func_00523718(iVar10), fVar13 < fVar12))
      {
        func_004994B0((int)param_2,puVar1[0x1a],uVar8,param_4);
        goto LAB_00538e7c;
      }
    }
  }
  else {
switchD_00538368_caseD_2:
    if ((local_28 != 0 && iVar10 != 0) && (*(char *)(iVar10 + 0x70) == '\x04')) {
      fVar12 = func_00523718(iVar10);
      if (fVar13 < fVar12) {
        func_004994B0((int)param_2,puVar1[0x1a],uVar8,param_4);
        goto LAB_00538ae0;
      }
      goto LAB_00538afc;
    }
  }
  func_004994B0((int)param_2,*puVar1,uVar8,param_4);
  piVar3 = DAT_00538ec0;
  if (((*DAT_00538ec0 != 0) && (iVar11 = func_00537B38(*DAT_00538ec0), iVar11 != 0)) &&
     (iVar11 = func_00537B38(*piVar3), iVar11 != 4)) {
    local_54 = (char *)puVar1[4];
    local_58 = iVar6;
    iVar6 = func_00540A70(*DAT_005385dc,&local_58);
    if (iVar6 == 0) {
      func_004994B0((int)param_2,puVar1[3],uVar8,param_4);
    }
    else {
      func_004994B0((int)param_2,puVar1[4],uVar8,param_4);
    }
    goto LAB_00538e7c;
  }
  local_54 = (char *)puVar1[1];
  local_58 = iVar6;
  iVar6 = func_00540A70(*DAT_005385dc,&local_58);
  if (iVar6 == 0) {
    if (iVar9 == 0) goto LAB_00538e7c;
    bVar2 = func_00584B94(iVar9,1);
    if ((bVar2) && (bVar2 = func_00584B94(iVar9,0xe1), !bVar2)) {
      func_004994B0((int)param_2,puVar1[2],uVar8,param_4);
      goto LAB_00538e7c;
    }
    bVar2 = func_00584B94(iVar9,0xa6);
    if (bVar2) goto LAB_00538e7c;
  }
  func_004994B0((int)param_2,puVar1[1],uVar8,param_4);
LAB_00538e7c:
  if (*(char *)param_2[1] == '\0') {
    return 0;
  }
  iVar6 = func_00587FCC(*DAT_005385dc,param_2);
  if (iVar6 != -1) {
    return 1;
  }
  *(undefined1 *)param_2[1] = 0;
  return 0;
}

