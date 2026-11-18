#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_00141f48;
extern int *DAT_00141f60;
extern int DAT_00141f64;
extern float DAT_00141f8c;
extern undefined DAT_00141f90;
extern char s_ReactInvalid_00141f7c[];
extern char s_SE_Javelin_STICK_00141f68[];
extern char s_SE_Javelin_THROWN_00141f4c[];
extern char s__SE_Javelin_REFRECT_00141f93[];
extern char s_cf_00141f93[];
extern undefined4 _DAT_00141f90;

// USA 00141D9C <- EU 00141D9C (Ghidra, non-matching)
// GLOBAL DAT_00141f48 float
// GLOBAL DAT_00141f60 int *
// GLOBAL DAT_00141f64 int
// GLOBAL DAT_00141f8c float
// GLOBAL DAT_00141f90 undefined
// GLOBAL s_cf_00141f93 string
// GLOBAL s_ReactInvalid_00141f7c string
// GLOBAL s_SE_Javelin_STICK_00141f68 string
// GLOBAL s_SE_Javelin_THROWN_00141f4c string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00141D9C(int *param_1,int param_2)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(char * *)(albw_frame + 0x0))
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(char * *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  fVar5 = DAT_00141f48;
  param_1[0x141] = 0;
  if (param_2 == 0) {
    local_34 = s_SE_Javelin_THROWN_00141f4c;
    local_38 = fVar5;
    func_00150A84(param_1,(int *)&local_38,0);
    goto LAB_00141f38;
  }
  if (param_2 == 1) {
    iVar3 = func_0052FBA0(*DAT_00141f60 + 0x3dbbc,param_1[0x145]);
    iVar2 = DAT_00141f64;
    if (iVar3 == 0) goto LAB_00141e9c;
    param_1[0xf7] = DAT_00141f64;
    param_1[0xf8] = iVar2;
    param_1[0xf9] = iVar2;
    *(undefined1 *)((int)param_1 + 0x4fd) = 0;
    local_34 = s_SE_Javelin_STICK_00141f68;
    local_38 = fVar5;
    func_00150A84(param_1,(int *)&local_38,0);
    pcVar4 = (char *)0x0;
    fVar5 = 0.0;
    if (param_1[0xd1] != 0) {
      func_004A1B9C((int *)&local_40,param_1[0xd1],(uint *)s_ReactInvalid_00141f7c);
      pcVar4 = local_40;
      fVar5 = fStack_3c;
    }
    func_00115C54(&local_30,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x14c));
    ppcVar1 = &local_28;
    if ((pcVar4 == (char *)0x0) || (*(float *)(pcVar4 + 0x1c) != fVar5)) goto LAB_00141f38;
  }
  else {
    if (param_2 != 2) goto LAB_00141f38;
LAB_00141e9c:
    fVar6 = DAT_00141f8c;
    func_004D80A4((float *)(param_1 + 0xf7),param_1[0xfa] + 0x80000000,DAT_00141f8c);
    iVar2 = _DAT_00141f90;
    param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
    param_1[0x142] = iVar2;
    *(undefined1 *)((int)param_1 + 0x4fd) = 0;
    local_2c = s__SE_Javelin_REFRECT_00141f93 + 1;
    local_30 = fVar5;
    func_00150A84(param_1,(int *)&local_30,0);
    pcVar4 = (char *)0x0;
    fVar5 = 0.0;
    if (param_1[0xd1] != 0) {
      func_004A1B9C((int *)&local_28,param_1[0xd1],(uint *)s_ReactInvalid_00141f7c);
      pcVar4 = local_28;
      fVar5 = fStack_24;
    }
    func_00115C54(&fStack_3c,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x14c));
    ppcVar1 = &local_34;
    if ((pcVar4 == (char *)0x0) || (*(float *)(pcVar4 + 0x1c) != fVar5)) goto LAB_00141f38;
  }
  func_004A2F38((int)pcVar4,ppcVar1 + -2);
LAB_00141f38:
  *(char *)(param_1 + 0x140) = (char)param_2;
  return;
}

