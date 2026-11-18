// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_00255D74(int param_1,short param_2);
extern int func_0030E1D8(int *param_1);
extern int func_0030E2B8(int param_1);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004BC7BC(int param_1);
extern int func_004E74E8(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00556C94(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_005841D8(int param_1,undefined4 param_2);
extern int *DAT_0030ede8;
extern float DAT_0030edec;
extern float DAT_0030edf0;
extern float DAT_0030edf4;
extern float DAT_0030edf8;
extern float DAT_0030edfc;
extern float DAT_0030ee00;
extern float DAT_0030ee04;
extern float DAT_0030ee08;
extern undefined4 *DAT_0030ee0c;
extern int *DAT_0030ee10;
extern float DAT_0030ee2c;
extern int *DAT_0030ee30;
extern int DAT_0030ee34;
extern uint DAT_0030ee38;
extern int DAT_0030f174;
extern char s_SE_PL_RECOVER_FAIRY_BIG_0030ee14[];

// USA 0030EA5C <- EU 0030EA38 (Ghidra, non-matching)
// GLOBAL DAT_0030ede8 int *
// GLOBAL DAT_0030edec float
// GLOBAL DAT_0030edf0 float
// GLOBAL DAT_0030edf4 float
// GLOBAL DAT_0030edf8 float
// GLOBAL DAT_0030edfc float
// GLOBAL DAT_0030ee00 float
// GLOBAL DAT_0030ee04 float
// GLOBAL DAT_0030ee08 float
// GLOBAL DAT_0030ee0c undefined4 *
// GLOBAL DAT_0030ee10 int *
// GLOBAL DAT_0030ee2c float
// GLOBAL DAT_0030ee30 int *
// GLOBAL DAT_0030ee34 int
// GLOBAL DAT_0030ee38 uint
// GLOBAL DAT_0030f174 int
// GLOBAL s_SE_PL_RECOVER_FAIRY_BIG_0030ee14 string

/* WARNING: Type propagation algorithm not settling */

uint func_0030EA5C(int *param_1)

{
  char cVar1;
  int *piVar2;
  ushort uVar3;
  float *pfVar4;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  uint uVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define fStack_74 (*(float *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define fStack_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define fStack_50 (*(float *)(albw_frame + 0x40))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x44))
  uint uVar5;
  
  piVar2 = DAT_0030ee10;
  puVar6 = DAT_0030ee0c;
  fVar18 = DAT_0030edec;
  piVar7 = DAT_0030ede8;
  uVar13 = 3;
  uVar9 = param_1[0x26d] + 1;
  param_1[0x26d] = uVar9;
  fVar14 = DAT_0030edf0;
  cVar1 = *(char *)((int)param_1 + 0x9bb);
  iVar10 = *piVar7;
  if (cVar1 == '\b') {
    cVar1 = (char)param_1[0x26f];
    if (cVar1 == '\0') {
      iVar10 = 0;
      fVar14 = DAT_0030ee04;
      fVar15 = DAT_0030edfc;
      fVar16 = DAT_0030ee00;
      fVar19 = DAT_0030edf0;
      fVar21 = DAT_0030edf8;
      fVar22 = DAT_0030ee08;
      fVar20 = DAT_0030edf4;
      do {
        local_84 = ALBW_AS_F32(param_1[0xf4]);
        local_80 = ALBW_AS_F32(param_1[0xf5]);
        local_7c = (char *)param_1[0xf6];
        uVar13 = func_00111A64((uint *)(param_1 + 0x268));
        fVar17 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
        local_84 = fVar17 * fVar21 * fVar20 + fVar15 + local_84;
        pfVar4 = (float *)func_00520FC0();
        func_00115C70(&local_84,&local_84,pfVar4);
        local_80 = fVar19;
        uVar13 = func_00111A64((uint *)(param_1 + 0x268));
        fVar17 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
        func_00115D70(&local_84,&local_84,
                      (fVar17 * fVar21 * fVar16 + fVar14) /
                      SQRT(local_84 * local_84 + local_80 * local_80 +
                           ALBW_AS_F32(local_7c) * ALBW_AS_F32(local_7c)));
        local_80 = fVar22;
        puVar6 = (undefined4 *)func_00520FC0();
        local_68 = *puVar6;
        local_60 = ALBW_AS_F32(puVar6[2]);
        local_64 = fVar18;
        func_001D6FD0(&local_68,1,8,(int *)&local_84,-1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 10);
    }
    else {
      if (cVar1 != '\x01') goto joined_r0x0030ee58;
      func_00255D74(iVar10,0x32);
      func_00255B48(*piVar7,-0x32,uVar9);
    }
  }
  else {
    if (cVar1 < '\b') {
      if (cVar1 == '\0') {
        if (*(char *)((int)param_1 + 0x9ba) != 0) {
          if (uVar9 == 0x3c) {
            func_001DD484(iVar10,(int)*(char *)((int)param_1 + 0x9ba),1);
            local_7c = s_SE_PL_RECOVER_FAIRY_BIG_0030ee14;
            local_80 = DAT_0030ee2c;
            func_004EA104(*DAT_0030ee30,(int *)&local_80,0);
          }
          if (param_1[0x263] != 0) {
            pfVar12 = (float *)(param_1 + 0x265);
            pfVar4 = (float *)func_00520FC0();
            local_60 = *pfVar4;
            fStack_5c = pfVar4[1];
            local_58 = pfVar4[2];
            iVar10 = 0x3c - param_1[0x26d];
            if (iVar10 < 2) {
              iVar10 = 1;
            }
            fVar14 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
            fVar18 = fVar18 / fVar14;
            func_00115C70(&local_54,&local_60,pfVar12);
            local_78 = local_54;
            fStack_74 = fStack_50;
            uStack_70 = uStack_4c;
            func_00115D70(&local_54,&local_78,fVar18);
            local_84 = local_54;
            local_80 = fStack_50;
            local_7c = (char *)uStack_4c;
            func_00115C54(pfVar12,pfVar12,&local_84);
            iVar10 = param_1[0x263];
            if ((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) == param_1[0x264])) {
              func_004A2F38(iVar10,pfVar12);
            }
          }
          iVar10 = param_1[0x263];
          if ((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) == param_1[0x264])) {
            if ((*(uint *)(iVar10 + 0x3c) & 4) != 0 || (*(uint *)(iVar10 + 0x3c) & 0x40) != 0) {
              return 0;
            }
            iVar8 = *(int *)(iVar10 + 0x20);
            if (((iVar8 != 0) && (*(int *)(iVar10 + 0x24) == *(int *)(iVar8 + 0xc))) &&
               (0 < *(int *)(iVar8 + 4))) {
              return 0;
            }
          }
          if ((uint)param_1[0x26d] < 0x3c) {
            return 0;
          }
        }
        return 1;
      }
      if (cVar1 != '\x01') {
        return 1;
      }
      if ((char)param_1[0x218] != '\x01') {
        fVar15 = *(float *)(*(int *)(param_1[0x1eb] + 0x14) + 8);
        if (DAT_0030ee34 <= (int)ALBW_AS_U32(fVar15)) {
          iVar10 = (int)(*(float *)(*(int *)(param_1[0x1eb] + 0x14) + 0x14) - fVar15);
          if (iVar10 < 2) {
            iVar10 = 1;
          }
          fVar15 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
          fVar16 = ALBW_AS_F32(param_1[0x26c]);
          fVar16 = fVar16 + (DAT_0030edf0 - fVar16) * (fVar18 / fVar15);
          param_1[0x26c] = (int)ALBW_AS_U32(fVar16);
          *(float *)(param_1[0x1e8] + 0x158) = fVar16;
        }
        iVar10 = *(int *)(param_1[0x1eb] + 0x14);
        if (*(char *)(iVar10 + 0x1c) != '\0') {
          return 0;
        }
        if (*(float *)(iVar10 + 0x10) < fVar14) {
          if (fVar14 < *(float *)(iVar10 + 8)) {
            return 0;
          }
        }
        else if (*(float *)(iVar10 + 8) != *(float *)(iVar10 + 0x14)) {
          return 0;
        }
        iVar10 = param_1[0x263];
        if ((iVar10 != 0) && (*(int *)(iVar10 + 0x1c) == param_1[0x264])) {
          if ((*(uint *)(iVar10 + 0x3c) & 4) != 0 || (*(uint *)(iVar10 + 0x3c) & 0x40) != 0) {
            return 0;
          }
          iVar8 = *(int *)(iVar10 + 0x20);
          if (((iVar8 != 0) && (*(int *)(iVar10 + 0x24) == *(int *)(iVar8 + 0xc))) &&
             (0 < *(int *)(iVar8 + 4))) {
            return 0;
          }
        }
        func_004BC7BC((int)param_1);
        uVar9 = func_005841D8(*piVar2,*puVar6);
        uVar3 = func_00556C94(*piVar7);
        uVar5 = (uint)uVar3;
        if (uVar5 < DAT_0030ee38) {
          if (1999 < uVar5) {
            uVar13 = 4;
          }
          if (uVar5 < 1000) {
            if (uVar5 < 500) {
              if (uVar5 < 0xfa) {
                uVar13 = 0;
              }
              else {
                uVar13 = 1;
              }
            }
            else {
              uVar13 = 2;
            }
          }
        }
        else {
          uVar13 = 5;
        }
        local_80 = 0.0;
        for (; uVar9 < uVar13; uVar9 = uVar9 + 1) {
          func_004E74E8(param_1 + 0xf4,&local_80,0,-1);
        }
        return 1;
      }
      return 1;
    }
    if (cVar1 != '\t') {
      if (cVar1 != '\n') {
        return 1;
      }
      iVar10 = *piVar2;
      piVar11 = *(int **)(DAT_0030f174 + iVar10);
      for (piVar7 = (int *)func_005841A8(iVar10,*puVar6,*(int **)(DAT_0030f174 + -8 + iVar10));
          piVar7 != piVar11; piVar7 = (int *)func_005841A8(*piVar2,*puVar6,piVar7)) {
        *(undefined1 *)(*piVar7 + 0x2d7) = 1;
      }
      return 1;
    }
    cVar1 = (char)param_1[0x26f];
    if (cVar1 == '\0') {
      iVar10 = 0;
      fVar14 = DAT_0030ee04;
      fVar15 = DAT_0030edfc;
      fVar16 = DAT_0030ee00;
      fVar19 = DAT_0030edf0;
      fVar21 = DAT_0030edf8;
      fVar22 = DAT_0030ee08;
      fVar20 = DAT_0030edf4;
      do {
        local_84 = ALBW_AS_F32(param_1[0xf4]);
        local_80 = ALBW_AS_F32(param_1[0xf5]);
        local_7c = (char *)param_1[0xf6];
        uVar13 = func_00111A64((uint *)(param_1 + 0x268));
        fVar17 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
        local_84 = fVar17 * fVar21 * fVar20 + fVar15 + local_84;
        pfVar4 = (float *)func_00520FC0();
        func_00115C70(&local_84,&local_84,pfVar4);
        local_80 = fVar19;
        uVar13 = func_00111A64((uint *)(param_1 + 0x268));
        fVar17 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
        func_00115D70(&local_84,&local_84,
                      (fVar17 * fVar21 * fVar16 + fVar14) /
                      SQRT(local_84 * local_84 + local_80 * local_80 +
                           ALBW_AS_F32(local_7c) * ALBW_AS_F32(local_7c)));
        local_80 = fVar22;
        puVar6 = (undefined4 *)func_00520FC0();
        local_68 = *puVar6;
        local_60 = ALBW_AS_F32(puVar6[2]);
        local_64 = fVar18;
        func_001D6FD0(&local_68,2,8,(int *)&local_84,-1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 10);
    }
    else {
      if (cVar1 != '\x01') {
joined_r0x0030ee58:
        if (cVar1 != '\x02') {
          if (cVar1 != '\x03') {
            return 0;
          }
          uVar13 = func_0030E1D8(param_1);
          return uVar13;
        }
        if (uVar9 < 0x5b) {
          return 0;
        }
        *(char *)(param_1 + 0x26f) = '\x03';
        uVar13 = func_0030E2B8((int)param_1);
        return uVar13 ^ 1;
      }
      func_00255D74(iVar10,200);
      func_00255B48(*piVar7,-200,uVar9);
    }
  }
  *(char *)(param_1 + 0x26f) = (char)param_1[0x26f] + '\x01';
  return 0;
}

