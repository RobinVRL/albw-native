#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00187C38(int param_1);
extern int func_00188F3C(int param_1);
extern int func_001891A0(int *param_1);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FC0(void);
extern int func_0052107C(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00659544(undefined4 *param_1,undefined1 param_2);
extern float DAT_00189f90;
extern float DAT_00189f94;
extern float DAT_00189f98;
extern int DAT_00189f9c;
extern int DAT_00189fa0;
extern int DAT_00189fbc;
extern float DAT_00189fc0;
extern int *DAT_00189fc4;
extern char s_SE_OBJ_FALL_WATER_FLAT_00189fa4[];

// USA 00189DE4 <- EU 00189DE4 (Ghidra, non-matching)
// GLOBAL DAT_00189f90 float
// GLOBAL DAT_00189f94 float
// GLOBAL DAT_00189f98 float
// GLOBAL DAT_00189f9c int
// GLOBAL DAT_00189fa0 int
// GLOBAL DAT_00189fbc int
// GLOBAL DAT_00189fc0 float
// GLOBAL DAT_00189fc4 int *
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_00189fa4 string

undefined4 func_00189DE4(int *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fparam_1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  param_1[0x14d] = param_1[0xf4];
  param_1[0x14e] = param_1[0xf5];
  param_1[0x14f] = param_1[0xf6];
  func_00188F3C((int)param_1);
  fparam_1 = ALBW_AS_F32(param_1[0xf8]) - DAT_00189f90;
  fVar3 = DAT_00189f94;
  if (DAT_00189f94 < fparam_1) {
    fVar3 = fparam_1;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar3);
  iVar2 = func_00187C38((int)param_1);
  fVar3 = DAT_00189f98;
  if ((param_1[0x13f] == 0) && (iVar2 != 0)) {
    param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + DAT_00189f98));
    fparam_1 = fVar3;
  }
  func_00520FC0();
  if (iVar2 == 0) goto LAB_00189f78;
  bVar1 = func_0052107C((int)param_1);
  if (bVar1) {
    iVar2 = DAT_00189f9c;
    if (*(char *)((int)param_1 + 0x701) != '\0') {
LAB_00189ea4:
      iVar2 = DAT_00189fa0;
    }
    param_1[0xf8] = iVar2;
  }
  else if (*(char *)((int)param_1 + 0x701) != '\0') goto LAB_00189ea4;
  iVar2 = func_00520EE4((int)param_1);
  if (iVar2 != 0) {
    return func_00659544(param_1 + 0x13f,8);
  }
  iVar2 = func_00520ED8((int)param_1);
  if (iVar2 != 0) {
    func_0010A464(auStack_78);
    local_14 = s_SE_OBJ_FALL_WATER_FLAT_00189fa4;
    local_18 = DAT_00189fbc;
    func_00150A84(param_1,&local_18,(int)auStack_78);
    func_0025B860((int)auStack_78,0,DAT_00189fc0,fparam_1);
    iVar2 = func_00588BE4((int)param_1);
    if (iVar2 == *DAT_00189fc4) {
      func_00659544(param_1 + 0x13f,6);
      return func_0025B874(auStack_78);
    }
    func_001891A0(param_1);
    return func_0025B874(auStack_78);
  }
LAB_00189f78:
  return func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
}

