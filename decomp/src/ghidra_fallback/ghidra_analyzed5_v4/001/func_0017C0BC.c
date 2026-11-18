#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0017B378(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_002903C0(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_0017c3f4;
extern float *DAT_0017c3f8;
extern int DAT_0017c3fc;
extern float DAT_0017c400;
extern int *DAT_0017c404;
extern int *DAT_0017c408;
extern undefined DAT_0017c40c;
extern int DAT_0017c68c;
extern float *DAT_0017c690;
extern int DAT_0017c694;
extern float DAT_0017c698;
extern char s_SE_BirdLift_AWAY_0017c664[];
extern char s_SE_BirdLift_V_AWAY_0017c678[];
extern char s___SE_BirdLift_GET_ITEM_0017c40e[];
extern char s_cf_0017c40e[];
extern undefined4 _DAT_0017c40c;

// USA 0017C0BC <- EU 0017C0BC (Ghidra, non-matching)
// GLOBAL DAT_0017c3f4 float
// GLOBAL DAT_0017c3f8 float *
// GLOBAL DAT_0017c3fc int
// GLOBAL DAT_0017c400 float
// GLOBAL DAT_0017c404 int *
// GLOBAL DAT_0017c408 int *
// GLOBAL DAT_0017c40c undefined
// GLOBAL DAT_0017c68c int
// GLOBAL DAT_0017c690 float *
// GLOBAL DAT_0017c694 int
// GLOBAL DAT_0017c698 float
// GLOBAL s_cf_0017c40e string
// GLOBAL s_SE_BirdLift_AWAY_0017c664 string
// GLOBAL s_SE_BirdLift_V_AWAY_0017c678 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0017C0BC(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  int *piVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(char * *)(albw_frame + 0xc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(char * *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(int *)(albw_frame + 0x24))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(char * *)(albw_frame + 0x30))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(char * *)(albw_frame + 0x3c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_4c (*(char * *)(albw_frame + 0x44))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x48))
  #define fStack_44 (*(float *)(albw_frame + 0x4c))
  fVar17 = DAT_0017c400;
  pfVar12 = (float *)(param_1 + 0x20e);
  piVar13 = param_1 + 0x220;
  cVar1 = (char)param_1[0x220];
  uVar16 = (ulonglong)(uint)ALBW_AS_U32(DAT_0017c3f4);
  if (cVar1 == '\0') {
    func_00115C54(pfVar12,(float *)(param_1 + 2),DAT_0017c3f8);
    iVar7 = DAT_0017c3fc;
    if ((uint)param_1[0x214] < (uint)param_1[0x215]) {
      param_1[0x214] = param_1[0x214] + 1;
      if ((uint)param_1[0x217] < (uint)param_1[0x218]) {
        param_1[0x217] = param_1[0x217] + 1;
      }
      else if (**(int **)(param_1[0x1ed] + 0x14) != 4) {
        puVar6 = (uint *)func_002C11E8((int *)&local_88,4,10,0);
        func_0016898C(param_1[0x1ed],puVar6);
      }
    }
    else {
      param_1[0x218] = 0xdc;
      param_1[0x219] = iVar7;
      param_1[0x217] = 0;
      *(char *)piVar13 = (char)param_1[0x220] + '\x01';
    }
  }
  else if (cVar1 == '\x01') {
    puVar10 = (undefined4 *)param_1[0x1f7];
    puVar11 = puVar10 + param_1[0x1f5];
    local_60 = (char *)0x1;
    iVar7 = param_1[0xb3];
    for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
      iVar3 = func_0052FBA0(*DAT_0017c404 + 0x3dbbc,*(uint *)*puVar10);
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x478) == 0) {
          fVar14 = *(float *)(iVar3 + 0x3d0);
          local_60 = (char *)0x0;
          *pfVar12 = fVar14;
          param_1[0x20f] = *(int *)(iVar3 + 0x3d4);
          fVar15 = *(float *)(iVar3 + 0x3d8);
          param_1[0x210] = (int)ALBW_AS_U32(fVar15);
          param_1[0x20f] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[3]) + ALBW_AS_F32(uVar16)));
          fVar14 = ALBW_AS_F32(param_1[0xf4]) - fVar14;
          fVar15 = ALBW_AS_F32(param_1[0xf6]) - fVar15;
          if ((int)ALBW_AS_U32(SQRT(fVar14 * fVar14 + fVar15 * fVar15)) < 0x3f800000) {
            *(int *)(iVar3 + 0x478) = iVar7;
            iVar7 = (int)*(char *)(iVar3 + 0x418);
            if (iVar7 != -1) {
              iVar9 = *(int *)(iVar3 + 0x434);
              pcVar8 = *(code **)(iVar9 + iVar7 * 8);
              if ((pcVar8 != (code *)0x0) ||
                 ((uVar5 = *(uint *)(iVar9 + iVar7 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
                uVar5 = *(uint *)(iVar9 + iVar7 * 8 + 4);
                piVar4 = (int *)(*(int *)(iVar3 + 0x428) + ((int)uVar5 >> 1));
                if ((uVar5 & 1) != 0) {
                  pcVar8 = *(code **)(pcVar8 + *piVar4);
                }
                (*pcVar8)(piVar4,2);
              }
            }
            uVar2 = *(undefined1 *)(iVar3 + 0x418);
            *(undefined1 *)(iVar3 + 0x418) = 2;
            *(undefined4 *)(iVar3 + 0x414) = 0;
            *(undefined1 *)(iVar3 + 0x419) = uVar2;
            if (*(int *)(iVar3 + 0x424) != 0) {
              if (*(uint *)(iVar3 + 0x41c) < 3) {
                piVar4 = *(int **)(iVar3 + 0x420);
              }
              else {
                piVar4 = (int *)(*(int *)(iVar3 + 0x420) + 0x48);
              }
              (**(code **)(*piVar4 + 8))(piVar4);
              local_6c = piVar4[1];
              local_70 = fVar17;
              func_0010BEB4(*(int *)(iVar3 + 0x424),(int *)&local_70);
            }
            iVar9 = (int)*(char *)(iVar3 + 0x418);
            iVar7 = *(int *)(iVar3 + 0x42c);
            pcVar8 = *(code **)(iVar7 + iVar9 * 8);
            if ((pcVar8 != (code *)0x0) ||
               ((uVar5 = *(uint *)(iVar7 + iVar9 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
              uVar5 = *(uint *)(iVar7 + iVar9 * 8 + 4);
              if ((uVar5 & 1) != 0) {
                pcVar8 = *(code **)(pcVar8 + *(int *)(*(int *)(iVar3 + 0x428) + ((int)uVar5 >> 1)));
              }
              (*pcVar8)((int)(*(int *)(iVar3 + 0x428)) + ((int)uVar5 >> 1));
            }
            iVar7 = _DAT_0017c40c;
            param_1[0x21a] = 0;
            param_1[0x222] = iVar7;
            local_54 = s___SE_BirdLift_GET_ITEM_0017c40e + 2;
            local_58 = fVar17;
            func_00150A84(param_1,(int *)&local_58,0);
          }
          break;
        }
        iVar7 = *(int *)(iVar3 + 0x2cc);
      }
    }
    piVar4 = DAT_0017c408;
    if ((char)param_1[0x221] == '\0') {
      if ((uint)param_1[0x217] < (uint)param_1[0x218]) {
        param_1[0x217] = param_1[0x217] + 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x221) = 1;
        func_002903C0(*piVar4);
      }
    }
    if (local_60 != (char *)0x0) {
      if ((char)param_1[0x221] == '\0') {
        *(undefined1 *)(param_1 + 0x221) = 1;
        func_002903C0(*piVar4);
      }
      local_84 = s_SE_BirdLift_AWAY_0017c664;
      local_88 = fVar17;
      func_00150A84(param_1,(int *)&local_88,0);
      local_84 = s_SE_BirdLift_V_AWAY_0017c678;
      local_88 = fVar17;
      func_00150A84(param_1,(int *)&local_88,0);
      iVar7 = DAT_0017c68c;
      *(char *)piVar13 = (char)param_1[0x220] + '\x01';
      param_1[0x215] = 0x1e;
LAB_0017c4d4:
      param_1[0x216] = iVar7;
      param_1[0x214] = 0;
    }
  }
  else if (cVar1 == '\x02') {
    fVar17 = DAT_0017c3f4;
    func_00115C54(&local_64,(float *)(param_1 + 2),DAT_0017c690);
    iVar7 = param_1[0x215] - param_1[0x214];
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    local_58 = local_64;
    local_54 = local_60;
    uStack_50 = uStack_5c;
    fVar14 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar17 = fVar17 / fVar14;
    func_00115C70((float *)&local_4c,&local_58,pfVar12);
    local_78 = local_4c;
    uStack_74 = uStack_48;
    local_70 = fStack_44;
    func_00115D70((float *)&local_4c,(float *)&local_78,fVar17);
    local_84 = local_4c;
    uStack_80 = uStack_48;
    fStack_7c = fStack_44;
    func_00115C54(pfVar12,pfVar12,(float *)&local_84);
    uVar5 = param_1[0x214];
    if ((uint)param_1[0x215] <= uVar5) {
      *(char *)piVar13 = (char)param_1[0x220] + '\x01';
      iVar7 = DAT_0017c694;
      param_1[0x215] = 0x3c;
      goto LAB_0017c4d4;
    }
LAB_0017c5b4:
    param_1[0x214] = uVar5 + 1;
  }
  else if (cVar1 == '\x03') {
    uVar5 = param_1[0x214];
    if (uVar5 < (uint)param_1[0x215]) goto LAB_0017c5b4;
    *(undefined1 *)((int)param_1 + 0x883) = 1;
  }
  iVar7 = *(int *)(param_1[0x1ed] + 0x14);
  if (*(char *)(iVar7 + 0x1c) == '\0') {
    if (*(float *)(iVar7 + 0x10) < DAT_0017c698) {
      if (DAT_0017c698 < *(float *)(iVar7 + 8)) goto LAB_0017c644;
    }
    else if (*(float *)(iVar7 + 8) != *(float *)(iVar7 + 0x14)) goto LAB_0017c644;
    if (**(int **)(param_1[0x1ed] + 0x14) == 4) {
      puVar6 = (uint *)func_002C11E8((int *)&local_88,0,10,0);
      func_0016898C(param_1[0x1ed],puVar6);
    }
  }
LAB_0017c644:
  return func_0017B378((int)param_1,(int *)0x0,0,0);
}

