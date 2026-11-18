#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00187C38(int param_1);
extern int func_001891A0(int *param_1);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_0052107C(int param_1);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern int DAT_00188080;
extern int DAT_0018809c;
extern float DAT_001880a0;
extern char s_SE_OBJ_FALL_WATER_FLAT_00188084[];

// USA 00187FC0 <- EU 00187FC0 (Ghidra, non-matching)
// GLOBAL DAT_00188080 int
// GLOBAL DAT_0018809c int
// GLOBAL DAT_001880a0 float
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_00188084 string

undefined4 func_00187FC0(int *param_1)

{
  bool bVar1;
  int iVar2;
  float in_s1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define auStack_70 ((undefined4 *)(albw_frame + 0x0))
  #define local_10 (*(int *)(albw_frame + 0x60))
  #define local_c (*(char * *)(albw_frame + 0x64))
  iVar2 = func_00187C38((int)param_1);
  if (iVar2 != 0) {
    bVar1 = func_0052107C((int)param_1);
    if (bVar1) {
      param_1[0xf8] = DAT_00188080;
    }
    iVar2 = func_00520EE4((int)param_1);
    if (iVar2 == 0) {
      iVar2 = func_00520ED8((int)param_1);
      if (iVar2 != 0) {
        func_0010A464(auStack_70);
        local_c = s_SE_OBJ_FALL_WATER_FLAT_00188084;
        local_10 = DAT_0018809c;
        func_00150A84(param_1,&local_10,(int)auStack_70);
        func_0025B860((int)auStack_70,0,DAT_001880a0,in_s1);
        func_001891A0(param_1);
        return func_0025B874(auStack_70);
      }
    }
    else {
      func_00659544(param_1 + 0x13f,8);
    }
  }
  return 0;
}

