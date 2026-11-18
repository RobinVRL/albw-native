#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010A464(undefined4 *param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_001507A8(int param_1,int param_2);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001BF70C(int *param_1);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_0052108C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00539200(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_00140120;
extern int *DAT_00140124;
extern uint *DAT_00140128;
extern undefined4 *DAT_0014012c;
extern undefined4 DAT_00140130;
extern float DAT_00140134;
extern int DAT_00140138;
extern int DAT_0014013c;
extern int DAT_00140140;
extern int DAT_00140144;
extern int *DAT_00140148;
extern undefined DAT_0014015c;
extern int DAT_00140174;
extern undefined DAT_00140178;
extern float DAT_00140190;
extern char s_SE_GoroIwa_LAND_0014014c[];
extern char s__SE_IronBall_LAND_L_0014015f[];
extern char s_cf_0014015f[];
extern char s_cf_0014017a[];
extern char s_u_SE_GoroIwa_HIT_WALL_0014017a[];
extern undefined4 _DAT_0014015c;
extern undefined4 _DAT_00140178;

// USA 0013FE38 <- EU 0013FE38 (Ghidra, non-matching)
// GLOBAL DAT_00140120 int *
// GLOBAL DAT_00140124 int *
// GLOBAL DAT_00140128 uint *
// GLOBAL DAT_0014012c undefined4 *
// GLOBAL DAT_00140130 undefined4
// GLOBAL DAT_00140134 float
// GLOBAL DAT_00140138 int
// GLOBAL DAT_0014013c int
// GLOBAL DAT_00140140 int
// GLOBAL DAT_00140144 int
// GLOBAL DAT_00140148 int *
// GLOBAL DAT_0014015c undefined
// GLOBAL DAT_00140174 int
// GLOBAL DAT_00140178 undefined
// GLOBAL DAT_00140190 float
// GLOBAL s_cf_0014015f string
// GLOBAL s_SE_GoroIwa_LAND_0014014c string
// GLOBAL s_cf_0014017a string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool func_0013FE38(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_30 (*(int *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  piVar3 = (int *)func_0052FBA0(*DAT_00140120 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((piVar3 != (int *)0x0) && (iVar4 = func_00588BE4((int)piVar3), iVar4 == *DAT_00140124)) {
    if (((*DAT_00140128 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00140128), iVar4 != 0)) {
      *DAT_0014012c = DAT_00140130;
    }
    iVar4 = (**(code **)*piVar3)(piVar3,DAT_0014012c);
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      func_001BF70C(piVar3);
      return true;
    }
  }
  bVar1 = func_001507A8((int)param_1,param_2);
  iVar4 = DAT_00140138;
  fVar7 = DAT_00140134;
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 7U) != 0) ||
     (DAT_0014013c < *(int *)(param_2 + 8))) {
    param_1[0xf8] = DAT_00140140;
    param_1[0x127] = *(int *)(param_2 + 4);
    param_1[0x128] = *(int *)(param_2 + 8);
    param_1[0x129] = *(int *)(param_2 + 0xc);
    if ((*(char *)((int)param_1 + 0x51d) != '\0') &&
       (((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x160 && (DAT_00140144 < *(int *)(param_2 + 0x1c))
        ))) {
      iVar5 = func_00588BE4((int)param_1);
      if (iVar5 == *DAT_00140148) {
        func_0010A464(&local_90);
        local_2c = s_SE_GoroIwa_LAND_0014014c;
        local_30 = iVar4;
        func_00150A84(param_1,&local_30,(int)&local_90);
        bVar2 = func_00539200((int)&local_90);
        if (bVar2) {
          fVar6 = *(float *)(param_2 + 0x1c) * ALBW_AS_F32(_DAT_0014015c);
          if (fVar7 < fVar6) {
            fVar6 = fVar7;
          }
          func_0025B860((int)&local_90,0,fVar6,ALBW_AS_F32(_DAT_0014015c));
        }
        func_0025B874(&local_90);
      }
      else {
        local_8c = s__SE_IronBall_LAND_L_0014015f + 1;
        local_90 = iVar4;
        func_00150A84(param_1,&local_90,0);
      }
    }
    if (param_1[0x10a] != 0) {
      *(undefined1 *)(param_1[0x10a] + 0x44) = 1;
    }
  }
  iVar5 = func_0052108C((int)param_1);
  if (iVar5 != 0) {
    param_1[0x144] = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 8) < DAT_00140174) {
    *(undefined1 *)(param_1 + 0x148) = 1;
    param_1[0x12a] = *(int *)(param_2 + 4);
    param_1[299] = *(int *)(param_2 + 8);
    param_1[300] = *(int *)(param_2 + 0xc);
    if (((*(char *)((int)param_1 + 0x51d) != '\0') && (_DAT_00140178 < *(int *)(param_2 + 0x1c))) &&
       (*(char *)((int)param_1 + 0x522) == '\0')) {
      func_0010A464(&local_90);
      local_2c = s_u_SE_GoroIwa_HIT_WALL_0014017a + 2;
      local_30 = iVar4;
      func_0014DBF4(param_1,&local_30,param_2 + 0x10,(int)&local_90);
      bVar2 = func_00539200((int)&local_90);
      if (bVar2) {
        fVar6 = *(float *)(param_2 + 0x1c) * DAT_00140190;
        if (fVar7 < fVar6) {
          fVar6 = fVar7;
        }
        func_0025B860((int)&local_90,0,fVar6,DAT_00140190);
      }
      func_0025B874(&local_90);
    }
  }
  return bVar1;
}

