#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam00157ae8;
extern int iRam00157aec;
extern int iRam00157af0;
extern int DAT_00157ae0;
extern float DAT_00157ae4;
extern char s_SE_Gapura_ATTACK_00157acc[];

// USA 00157A24 <- EU 00157A28 (Ghidra, non-matching)
// GLOBAL DAT_00157ae0 int
// GLOBAL DAT_00157ae4 float
// GLOBAL UNK_00157ae8 int
// GLOBAL UNK_00157aec int
// GLOBAL UNK_00157af0 int
// GLOBAL s_SE_Gapura_ATTACK_00157acc string

void func_00157A24(int *param_1)

{
  float fparam_0;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  local_18 = DAT_00157ae0;
  local_14 = s_SE_Gapura_ATTACK_00157acc;
  func_00150A84(param_1,&local_18,0);
  fparam_0 = DAT_00157ae4;
  param_1[0x290] = (int)ALBW_AS_U32(DAT_00157ae4);
  func_004D80A4((float *)(param_1 + 0xf7),param_1[0xfa],fparam_0);
  if ((uint)param_1[0xfa] < 0x80000000) {
    func_004FABDC((int)param_1,8,0,0);
  }
  else {
    func_004FABDC((int)param_1,5,0,0);
  }
  iVar2 = iRam00157af0;
  iVar1 = iRam00157ae8;
  piVar3 = (int *)param_1[0x289];
  iVar4 = param_1[0x290];
  *piVar3 = iVar4;
  piVar3[1] = iVar2;
  iVar2 = iRam00157aec;
  piVar3[2] = iVar1;
  piVar3[4] = iVar4;
  piVar3[3] = iVar2;
  return;
}

