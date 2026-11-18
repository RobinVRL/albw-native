// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B61C(int param_1,int param_2,float fparam_0);
extern int func_0025B680(int param_1,int param_2,float fparam_0);
extern int func_0025B810(int param_1,int param_2,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00294F4C(int param_1,int param_2,float fparam_0);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int func_005391D8(int param_1);
extern int func_00540304(int param_1);
extern int *DAT_0025ae64;
extern int DAT_0025ae80;
extern int *DAT_0025ae84;
extern float DAT_0025ae88;
extern float DAT_0025ae8c;
extern float DAT_0025ae90;
extern float DAT_0025ae94;
extern float DAT_0025ae98;
extern int DAT_0025ae9c;
extern int *DAT_0025aea0;
extern int DAT_0025aea4;
extern float DAT_0025aea8;
extern float DAT_0025aeac;
extern char s_SE_ENV_WALKWAY_LOWRULE_0025ae68[];

// USA 0025AC00 <- EU 0025AC28 (Ghidra, non-matching)
// GLOBAL DAT_0025ae64 int *
// GLOBAL DAT_0025ae80 int
// GLOBAL DAT_0025ae84 int *
// GLOBAL DAT_0025ae88 float
// GLOBAL DAT_0025ae8c float
// GLOBAL DAT_0025ae90 float
// GLOBAL DAT_0025ae94 float
// GLOBAL DAT_0025ae98 float
// GLOBAL DAT_0025ae9c int
// GLOBAL DAT_0025aea0 int *
// GLOBAL DAT_0025aea4 int
// GLOBAL DAT_0025aea8 float
// GLOBAL DAT_0025aeac float
// GLOBAL s_SE_ENV_WALKWAY_LOWRULE_0025ae68 string

undefined4 func_0025AC00(int param_1)

{
  int *piVar1;
  int iVar2;
  float in_s1;
  float fVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar1 = DAT_0025ae84;
  if (*DAT_0025ae64 != 0) {
    local_20 = DAT_0025ae80;
    local_1c = s_SE_ENV_WALKWAY_LOWRULE_0025ae68;
    func_004EC988(*DAT_0025ae84,&local_20,param_1 + 0x78);
    if (*(int *)(param_1 + 0x44) == 2) {
      iVar2 = func_005391D8(param_1 + 0x78);
      fVar4 = DAT_0025ae98;
      fVar5 = DAT_0025ae94;
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
          func_0025B860(param_1 + 0x78,0x3c,DAT_0025ae94,in_s1);
          func_0025B810(param_1 + 0x78,0x3c,fVar4);
          func_0025B61C(param_1 + 0x78,0x3c,fVar4);
          func_0025B680(param_1 + 0x78,0x3c,fVar4);
        }
      }
      else {
        func_0025B860(param_1 + 0x78,0,DAT_0025ae94,in_s1);
        func_0025B810(param_1 + 0x78,0,fVar4);
        func_0025B61C(param_1 + 0x78,0,fVar4);
        func_0025B680(param_1 + 0x78,0,fVar4);
      }
      iVar2 = func_00540304(*piVar1);
      if (iVar2 != 0) {
        fVar3 = **(float **)(*DAT_0025aea0 + 0x1c);
        if (DAT_0025ae9c < (int)ALBW_AS_U32(fVar3)) {
          return func_00294F4C(*piVar1,0,fVar4);
        }
        if (DAT_0025aea4 < (int)ALBW_AS_U32(fVar3)) {
          return func_00294F4C(*piVar1,0,(DAT_0025aea8 - fVar3) * DAT_0025aeac);
        }
        return func_00294F4C(*piVar1,0,fVar5);
      }
    }
    else {
      iVar2 = func_005391D8(param_1 + 0x78);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
          fVar4 = DAT_0025ae8c;
          fVar5 = DAT_0025ae90;
          func_0025B860(param_1 + 0x78,0x3c,DAT_0025ae88,in_s1);
          func_0025B61C(param_1 + 0x78,0x3c,fVar4);
          return func_0025B680(param_1 + 0x78,0x3c,fVar5);
        }
      }
      else {
        fVar4 = DAT_0025ae8c;
        fVar5 = DAT_0025ae90;
        func_0025B860(param_1 + 0x78,0,DAT_0025ae88,in_s1);
        func_0025B61C(param_1 + 0x78,0,fVar4);
        func_0025B680(param_1 + 0x78,0,fVar5);
      }
    }
  }
  return 0;
}

