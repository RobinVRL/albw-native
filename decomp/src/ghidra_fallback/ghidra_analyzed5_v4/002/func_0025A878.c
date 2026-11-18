// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0025B61C(int param_1,int param_2,float fparam_0);
extern int func_0025B680(int param_1,int param_2,float fparam_0);
extern int func_0025B810(int param_1,int param_2,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_004EC988(int param_1,int *param_2,int param_3);
extern int func_005391D8(int param_1);
extern int *DAT_0025aa3c;
extern int DAT_0025aa5c;
extern int *DAT_0025aa60;
extern float DAT_0025aa64;
extern float DAT_0025aa68;
extern float DAT_0025aa6c;
extern float DAT_0025aa70;
extern float DAT_0025aa74;
extern char s_SE_ENV_WALKWAY_HYRULE_WIND_0025aa40[];

// USA 0025A878 <- EU 0025A8A0 (Ghidra, non-matching)
// GLOBAL DAT_0025aa3c int *
// GLOBAL DAT_0025aa5c int
// GLOBAL DAT_0025aa60 int *
// GLOBAL DAT_0025aa64 float
// GLOBAL DAT_0025aa68 float
// GLOBAL DAT_0025aa6c float
// GLOBAL DAT_0025aa70 float
// GLOBAL DAT_0025aa74 float
// GLOBAL s_SE_ENV_WALKWAY_HYRULE_WIND_0025aa40 string

undefined4 func_0025A878(int param_1)

{
  int iVar1;
  float in_s1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*DAT_0025aa3c != 0) {
    local_14 = s_SE_ENV_WALKWAY_HYRULE_WIND_0025aa40;
    local_18 = DAT_0025aa5c;
    func_004EC988(*DAT_0025aa60,&local_18,param_1 + 0x78);
    if (*(int *)(param_1 + 0x44) == 2) {
      iVar1 = func_005391D8(param_1 + 0x78);
      if (iVar1 != 0) {
        fVar2 = DAT_0025aa74;
        func_0025B860(param_1 + 0x78,0,DAT_0025aa70,in_s1);
        func_0025B810(param_1 + 0x78,0,fVar2);
        func_0025B61C(param_1 + 0x78,0,fVar2);
        return func_0025B680(param_1 + 0x78,0,fVar2);
      }
      if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
        fVar2 = DAT_0025aa74;
        func_0025B860(param_1 + 0x78,0x3c,DAT_0025aa70,in_s1);
        func_0025B810(param_1 + 0x78,0x3c,fVar2);
        func_0025B61C(param_1 + 0x78,0x3c,fVar2);
        return func_0025B680(param_1 + 0x78,0x3c,fVar2);
      }
    }
    else {
      iVar1 = func_005391D8(param_1 + 0x78);
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
          fVar2 = DAT_0025aa68;
          fVar3 = DAT_0025aa6c;
          func_0025B860(param_1 + 0x78,0x3c,DAT_0025aa64,in_s1);
          func_0025B61C(param_1 + 0x78,0x3c,fVar2);
          return func_0025B680(param_1 + 0x78,0x3c,fVar3);
        }
      }
      else {
        fVar2 = DAT_0025aa68;
        fVar3 = DAT_0025aa6c;
        func_0025B860(param_1 + 0x78,0,DAT_0025aa64,in_s1);
        func_0025B61C(param_1 + 0x78,0,fVar2);
        func_0025B680(param_1 + 0x78,0,fVar3);
      }
    }
  }
  return 0;
}

