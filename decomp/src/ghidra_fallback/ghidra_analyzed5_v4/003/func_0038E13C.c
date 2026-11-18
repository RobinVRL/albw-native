#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001DB854(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_001DC3C4(int param_1,undefined4 param_2,int param_3);
extern int func_001DD48C(int param_1,int param_2,undefined4 param_3);
extern int func_00270300(int param_1,int param_2,int param_3);
extern int func_002706E0(int param_1,int param_2);
extern int func_0028C328(int param_1);
extern int func_0028C388(int param_1);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_002916E8(void);
extern int func_002E3608(int param_1,undefined1 param_2,uint param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A37EC(int *param_1,float *param_2,undefined4 *param_3,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_0051D188(int *param_1,int param_2,int param_3);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0038e4d0;
extern float DAT_0038e4d4;
extern int *DAT_0038e4d8;
extern char *DAT_0038e4dc;
extern int *DAT_0038e4f0;
extern undefined4 DAT_0038e4f4;
extern int *DAT_0038e51c;
extern float DAT_0038e868;
extern undefined DAT_0038e86c;
extern int *DAT_0038e8a0;
extern char s_SE_PL_DAMAGE_0038e848[];
extern char s_SE_PL_WALL_IN_0038e4e0[];
extern char s_SE_PL_WALL_OUT_0038e520[];
extern char s_SE_PL_WALL_OUT_FORCE_0038e548[];
extern char s_SE_PL_WALL_OUT_GRASS_0038e888[];
extern char s_SE_PV_DAMAGE_0038e858[];
extern char s_SE_PV_WALL_OUT_FORCE_0038e530[];
extern char s_ToImageB_0038e504[];
extern char s_ToImageG_0038e4f8[];
extern char s_ToImageR_0038e510[];
extern char s_WallOutGrass_0038e878[];
extern char s__WallOut_0038e86f[];
extern char s_cf_0038e86f[];
extern undefined4 _DAT_0038e86c;

// USA 0038E13C <- EU 0038E118 (Ghidra, non-matching)
// GLOBAL DAT_0038e4d0 undefined4
// GLOBAL DAT_0038e4d4 float
// GLOBAL DAT_0038e4d8 int *
// GLOBAL DAT_0038e4dc char *
// GLOBAL DAT_0038e4f0 int *
// GLOBAL DAT_0038e4f4 undefined4
// GLOBAL DAT_0038e51c int *
// GLOBAL DAT_0038e868 float
// GLOBAL DAT_0038e86c undefined
// GLOBAL DAT_0038e8a0 int *
// GLOBAL s_cf_0038e86f string
// GLOBAL s_SE_PL_DAMAGE_0038e848 string
// GLOBAL s_SE_PL_WALL_IN_0038e4e0 string
// GLOBAL s_SE_PL_WALL_OUT_0038e520 string
// GLOBAL s_SE_PL_WALL_OUT_FORCE_0038e548 string
// GLOBAL s_SE_PL_WALL_OUT_GRASS_0038e888 string
// GLOBAL s_SE_PV_DAMAGE_0038e858 string
// GLOBAL s_SE_PV_WALL_OUT_FORCE_0038e530 string
// GLOBAL s_ToImageB_0038e504 string
// GLOBAL s_ToImageG_0038e4f8 string
// GLOBAL s_ToImageR_0038e510 string
// GLOBAL s_WallOutGrass_0038e878 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0038E13C(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  _Alignas(8) unsigned char albw_frame[0x70]; /* entry_sp - 0x70 .. entry_sp + 0x0 */
#define stack0xffffff90 (*(undefined4 *)(albw_frame + 0x0))
  char cVar1;
  short sVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  undefined8 uVar13;
  #define in_stack_ffffff90 (*(char * *)(albw_frame + 0x0)) /* V4: frame slot (callee-filled) */
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_68 (*(char * *)(albw_frame + 0x8))
  #define pcStack_64 (*(char * *)(albw_frame + 0xc))
  #define pcStack_60 (*(char * *)(albw_frame + 0x10))
  #define pcStack_5c (*(char * *)(albw_frame + 0x14))
  #define local_58 (*(char * *)(albw_frame + 0x18))
  #define local_54 (*(char * *)(albw_frame + 0x1c))
  #define local_50 (*(char * *)(albw_frame + 0x20))
  #define local_4c (*(char * *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define fStack_44 (*(float *)(albw_frame + 0x2c))
  #define fStack_40 (*(float *)(albw_frame + 0x30))
  #define pcStack_3c (*(char * *)(albw_frame + 0x34))
  #define pcStack_38 (*(char * *)(albw_frame + 0x38))
  #define pcStack_34 (*(char * *)(albw_frame + 0x3c))
  pcVar4 = DAT_0038e4dc;
  piVar3 = DAT_0038e4d8;
  fVar7 = DAT_0038e4d4;
  uVar8 = DAT_0038e4d0;
  *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x15c) = DAT_0038e4d0;
  sVar2 = *(short *)(param_2 + 2);
  if (sVar2 != 0x67) {
    if (sVar2 == 0x68) {
      *(undefined1 *)(param_1 + 0x72) = 1;
      iVar10 = 0x85;
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x50) + 0x28) + 0x24) != '\x01') {
        if (*(char *)(*(int *)(param_1 + 0x28) + 0x5ac) == '\0') {
          iVar10 = 0x84;
        }
        else {
          iVar10 = 0x83;
        }
      }
      iVar12 = *(int *)(param_1 + 0x4c);
      func_0028D580((uint *)(iVar12 + 0x3c),iVar10,1,1,6);
      param_4 = (int *)0x1;
      in_stack_ffffff90 = (char *)0x6;
      func_0028D580((uint *)(iVar12 + 0x5c),iVar10,1,1,6);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x5c0);
    }
    else if (sVar2 != 0x69 && sVar2 != 0x6a) {
      return 0;
    }
    local_4c = s_SE_PL_WALL_OUT_0038e520;
    local_50 = pcVar4;
    uVar9 = 0;
    func_004EA104(*piVar3,(int *)&local_50,0);
    if (*(short *)(param_2 + 2) == 0x69) {
      func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar9,param_4);
      local_6c = s_SE_PV_WALL_OUT_FORCE_0038e530;
      func_004EAF8C(*piVar3,(int *)&stack0xffffff90,0);
      local_6c = s_SE_PL_WALL_OUT_FORCE_0038e548;
      uVar9 = 0;
      in_stack_ffffff90 = pcVar4;
      func_004EA104(*piVar3,(int *)&stack0xffffff90,0);
    }
    if (*(short *)(param_2 + 2) == 0x6a) {
      func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar9,param_4);
      func_001DD48C(*(int *)(param_1 + 0x28),*(int *)(param_2 + 0x24),1);
      func_0028C328(*(int *)(param_1 + 0x4c));
      func_0028C388(*(int *)(param_1 + 0x4c));
      local_6c = s_SE_PL_DAMAGE_0038e848;
      func_004EA104(*piVar3,(int *)&stack0xffffff90,0);
      local_6c = s_SE_PV_DAMAGE_0038e858;
      func_004EAF8C(*piVar3,(int *)&stack0xffffff90,0);
      local_6c = s_SE_PL_WALL_OUT_FORCE_0038e548;
      in_stack_ffffff90 = pcVar4;
      func_004EA104(*piVar3,(int *)&stack0xffffff90,0);
    }
    iVar10 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar10 + 0x5b4);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar10 + 0x5b8);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar10 + 0x5bc);
    func_00115DC8((float *)(param_1 + 0x7c));
    iVar10 = func_0068C690((float *)(param_1 + 0x7c));
    **(int **)(param_1 + 0x3c) = iVar10;
    *(undefined4 *)(param_1 + 0xb4) = uVar8;
    *(undefined4 *)(param_1 + 0xb8) = uVar8;
    *(undefined4 *)(param_1 + 0xbc) = uVar8;
    uVar13 = CONCAT44(DAT_0038e868,fVar7);
    fVar7 = DAT_0038e868;
    if (*(short *)(param_2 + 2) == 0x6a) {
      fVar7 = ALBW_AS_F32(_DAT_0038e86c);
    }
    func_00115D70((float *)&local_6c,(float *)(param_1 + 0x7c),fVar7);
    *(char **)(param_1 + 0xc0) = local_6c;
    *(char **)(param_1 + 0xc4) = local_68;
    *(char **)(param_1 + 200) = pcStack_64;
    iVar10 = *(int *)(param_1 + 0x28);
    if ((*(ushort *)(*(int *)(iVar10 + 0x5f4) + 0x3bac) & 0x7e0) == 0x2e0) {
      pfVar11 = (float *)(param_1 + 0xa8);
      if (*(int *)(iVar10 + 0x344) == 0) {
        *pfVar11 = 0.0;
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
      else {
        fVar7 = *pfVar11;
        if ((fVar7 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar7) + 0x1c) == *(int *)(param_1 + 0xac))) {
          func_00110848((int)ALBW_AS_U32(fVar7));
        }
        func_004A1B9C((int *)&local_68,*(int *)(iVar10 + 0x344),(uint *)s_WallOutGrass_0038e878);
        *pfVar11 = ALBW_AS_F32(local_68);
        *(char **)(param_1 + 0xac) = pcStack_64;
      }
      local_54 = s_SE_PL_WALL_OUT_GRASS_0038e888;
      local_58 = pcVar4;
      func_004EA104(*piVar3,(int *)&local_58,0);
    }
    else {
      pfVar11 = (float *)(param_1 + 0xa8);
      if (*(int *)(iVar10 + 0x344) == 0) {
        *pfVar11 = 0.0;
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
      else {
        fVar7 = *pfVar11;
        if ((fVar7 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar7) + 0x1c) == *(int *)(param_1 + 0xac))) {
          func_00110848((int)ALBW_AS_U32(fVar7));
        }
        func_004A1B9C((int *)&local_68,*(int *)(iVar10 + 0x344),(uint *)(s__WallOut_0038e86f + 1));
        *pfVar11 = ALBW_AS_F32(local_68);
        *(char **)(param_1 + 0xac) = pcStack_64;
      }
    }
    func_004A37EC((int *)(param_1 + 0xa8),(float *)(param_1 + 0x7c),*(undefined4 **)(param_1 + 0x30)
                  ,ALBW_AS_F32(uVar13));
    pfVar11 = *(float **)(param_1 + 0x30);
    local_48 = *pfVar11;
    fStack_44 = pfVar11[1];
    fStack_40 = pfVar11[2];
    func_00115D70((float *)&stack0xffffff90,(float *)(param_1 + 0x7c),
                  ALBW_AS_F32(((ulonglong)uVar13 >> 0x20)));
    uVar8 = (undefined4)uVar13;
    pcStack_38 = local_6c;
    pcStack_34 = local_68;
    pcStack_3c = in_stack_ffffff90;
    func_00115C54((float *)&stack0xffffff90,&local_48,(float *)&pcStack_3c);
    pcStack_60 = local_6c;
    pcStack_5c = local_68;
    pcStack_64 = in_stack_ffffff90;
    func_001DB854(*(int *)(param_1 + 0x28),&pcStack_64,&local_48);
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x5a8) = uVar8;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if (*(char *)(*(int *)(param_1 + 0x2c) + 0x96) == '\0') {
      func_002916E8();
    }
    else {
      *(uint *)(*(int *)(*DAT_0038e8a0 + 0x18) + 0x188) =
           *(uint *)(*(int *)(*DAT_0038e8a0 + 0x18) + 0x188) & 0xfffffffe;
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x90) = 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x28) + 0x6ba) == '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x6ba) = 1;
      *(undefined1 *)(param_1 + 0xa4) = 1;
      *(undefined1 *)(param_1 + 0xa5) = 1;
      *(undefined1 *)(param_1 + 0xa6) = 0;
    }
    return func_002706E0(*DAT_0038e51c,-1);
  }
  local_54 = s_SE_PL_WALL_IN_0038e4e0;
  local_58 = pcVar4;
  func_004EA104(*piVar3,(int *)&local_58,0);
  func_002E3608(*DAT_0038e4f0,0,0xb);
  func_001DC3C4(*(int *)(param_1 + 0x28),DAT_0038e4f4,0);
  puVar5 = *(undefined4 **)(param_1 + 0x34);
  *puVar5 = uVar8;
  puVar5[2] = uVar8;
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x80) = uVar8;
  *(undefined4 *)(param_1 + 0x84) = uVar9;
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  uVar9 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  *(undefined4 *)(param_1 + 0x90) = uVar9;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x20);
  iVar10 = *(int *)(param_1 + 0x28);
  iVar12 = *(int *)(iVar10 + 0x4b0);
  if (iVar12 == 2) {
    if (*(int *)(iVar10 + 0x344) != 0) {
      fVar6 = *(float *)(param_1 + 0xa8);
      if ((fVar6 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar6) + 0x1c) == *(int *)(param_1 + 0xac))) {
        func_00110848((int)ALBW_AS_U32(fVar6));
      }
      func_004A1B9C((int *)&local_68,*(int *)(iVar10 + 0x344),(uint *)s_ToImageG_0038e4f8);
      *(float *)(param_1 + 0xa8) = ALBW_AS_F32(local_68);
      *(char **)(param_1 + 0xac) = pcStack_64;
      goto LAB_0038e308;
    }
LAB_0038e300:
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  else {
    if (iVar12 == 3) {
      if (*(int *)(iVar10 + 0x344) == 0) goto LAB_0038e300;
      iVar12 = *(int *)(param_1 + 0xa8);
      if ((iVar12 != 0) && (*(int *)(iVar12 + 0x1c) == *(int *)(param_1 + 0xac))) {
        func_00110848(iVar12);
      }
      func_004A1B9C((int *)&local_68,*(int *)(iVar10 + 0x344),(uint *)s_ToImageB_0038e504);
      local_6c = pcStack_64;
    }
    else {
      if (iVar12 != 4) goto LAB_0038e308;
      if (*(int *)(iVar10 + 0x344) == 0) goto LAB_0038e300;
      iVar12 = *(int *)(param_1 + 0xa8);
      local_68 = in_stack_ffffff90;
      if ((iVar12 != 0) && (*(int *)(iVar12 + 0x1c) == *(int *)(param_1 + 0xac))) {
        func_00110848(iVar12);
        local_68 = in_stack_ffffff90;
      }
      func_004A1B9C((int *)&stack0xffffff90,*(int *)(iVar10 + 0x344),(uint *)s_ToImageR_0038e510);
    }
    *(char **)(param_1 + 0xa8) = local_68;
    *(char **)(param_1 + 0xac) = local_6c;
  }
LAB_0038e308:
  func_004A37EC((int *)(param_1 + 0xa8),(float *)(param_1 + 0x7c),(undefined4 *)(param_1 + 0x88),
                fVar7);
  *(undefined2 *)(param_1 + 0x74) = 2;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 1;
  iVar10 = func_0068C690((float *)(param_1 + 0x7c));
  iVar12 = *(int *)(param_1 + 0x28);
  uVar8 = *(undefined4 *)(param_1 + 0x80);
  uVar9 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(iVar12 + 0x5b4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(iVar12 + 0x5b8) = uVar8;
  *(undefined4 *)(iVar12 + 0x5bc) = uVar9;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x5c0) = *(undefined4 *)(param_1 + 0x94);
  cVar1 = *(char *)(*(int *)(param_1 + 0x2c) + 0x161);
  if (cVar1 == '\0') {
    uVar8 = func_0051D188(*(int **)(param_1 + 0x3c),iVar10,**(int **)(param_1 + 0x3c));
    **(undefined1 **)(param_1 + 0x40) = (char)uVar8;
  }
  else {
    *(bool *)*(undefined4 *)(param_1 + 0x40) = cVar1 == '\x01';
  }
  return func_00270300(*DAT_0038e51c,1,-1);
}

