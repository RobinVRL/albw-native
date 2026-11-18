#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0034CC9C(int param_1,uint param_2);
extern int func_0034DF14(int param_1,float *param_2,int param_3,int param_4,float fparam_0);
extern int func_003517A4(int param_1,float *param_2,undefined4 param_3,float *param_4,float fparam_0);
extern int func_0036FA1C(undefined4 *param_1,undefined1 param_2);
extern float func_00542330(undefined4 param_1,int param_2);
extern float func_005548EC(int param_1,int param_2);
extern int func_005581D4(float *param_1,float *param_2,int param_3,byte *param_4);
extern undefined4 DAT_0034f730;
extern int *DAT_0034f734;
extern float DAT_0034f738;

// USA 0034F5B8 <- EU 0034F594 (Ghidra, non-matching)
// GLOBAL DAT_0034f730 undefined4
// GLOBAL DAT_0034f734 int *
// GLOBAL DAT_0034f738 float

void func_0034F5B8(int param_1,float *param_2,uint param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((float *)(albw_frame + 0x8))
  fVar5 = func_00542330(param_1 + 0x98,param_4);
  *(float *)(param_1 + 0x24) = fVar5;
  func_0034CC9C(param_1,param_3);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  uVar2 = DAT_0034f730;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  pfVar3 = *(float **)(param_4 + 4);
  param_2[3] = *pfVar3;
  param_2[4] = pfVar3[1];
  param_2[5] = pfVar3[2];
  bVar4 = *(char *)(param_1 + 0x20) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x137);
  }
  if (bVar4 && cVar1 != '\0') {
    func_0036FA1C((undefined4 *)(param_1 + 0x44),0);
  }
  func_005581D4((float *)(param_1 + 0x44),local_28,(uint)(*(char *)(param_1 + 0x20) == '\0'),
                (byte *)0x0);
  func_00115C54(param_2 + 3,param_2 + 3,local_28);
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar5 = *(float *)(param_1 + 0x24);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x1c4);
  }
  param_2[4] = param_2[4] + fVar5;
  if (((*(char *)(param_1 + 0x20) == '\0') && (*(char *)(*(int *)(param_1 + 0x90) + 0x24) != '\0'))
     && ((*(char *)(param_1 + 0x133) == '\0' || (*(char *)(*DAT_0034f734 + 0x95) == '\0')))) {
    fVar6 = *(float *)(*(int *)(param_1 + 0x90) + 0x18);
    fVar5 = func_005548EC(param_1,0);
    fVar5 = (fVar6 + fVar5 + *(float *)(param_4 + 0x28)) - param_2[4];
    if (fVar5 <= DAT_0034f738) {
      fVar5 = -fVar5;
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0xa0);
  }
  func_003517A4(param_1,param_2 + 3,param_2 + 3,(float *)0x0,fVar5);
  local_28[0] = 1.4013e-45;
  func_0034DF14(param_1,param_2,0,1,*(float *)(param_1 + 0xa0));
  param_2[6] = *(float *)(param_1 + 0xa8);
  return;
}

