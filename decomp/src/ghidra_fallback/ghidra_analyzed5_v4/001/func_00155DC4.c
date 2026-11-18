#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_00155f00;
extern float DAT_00155f04;
extern float DAT_00155f08;
extern float DAT_00155f0c;
extern float DAT_00155f10;
extern float DAT_00155f14;
extern int *DAT_00155f18;
extern int DAT_00155f1c;
extern float DAT_00155f20;
extern char s_SE_Crowly_HOVERING_00155eec[];

// USA 00155DC4 <- EU 00155DC8 (Ghidra, non-matching)
// GLOBAL DAT_00155f00 int
// GLOBAL DAT_00155f04 float
// GLOBAL DAT_00155f08 float
// GLOBAL DAT_00155f0c float
// GLOBAL DAT_00155f10 float
// GLOBAL DAT_00155f14 float
// GLOBAL DAT_00155f18 int *
// GLOBAL DAT_00155f1c int
// GLOBAL DAT_00155f20 float
// GLOBAL s_SE_Crowly_HOVERING_00155eec string

void func_00155DC4(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  local_28 = DAT_00155f00;
  local_24 = s_SE_Crowly_HOVERING_00155eec;
  func_001507D8(param_1,&local_28,0);
  fVar1 = DAT_00155f10;
  fVar6 = DAT_00155f04;
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x8bc),(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(*(int *)(*(int *)(param_1 + 0x410) + 0x14) + 0x10) =
       (DAT_00155f08 * (fVar5 - DAT_00155f04)) / DAT_00155f0c + DAT_00155f08;
  if (*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0x918) + fVar1) {
    *(float *)(param_1 + 0x3e0) =
         *(float *)(param_1 + 0x3e0) + *(float *)(param_1 + 0x910) * DAT_00155f14;
  }
  pfVar4 = (float *)(param_1 + 0x8f8);
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(pfVar4,pfVar2,(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x8fc) = fVar6;
  func_00115DC8(pfVar4);
  iVar3 = func_0068C690(pfVar4);
  func_0051D2F4((int *)(param_1 + 1000),iVar3,DAT_00155f1c,*DAT_00155f18,DAT_00155f20);
  if (99 < *(uint *)(param_1 + 0x8bc)) {
    func_00657E5C((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

