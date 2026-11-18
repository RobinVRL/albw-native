#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0012A134(int param_1);
extern int func_0012A4C4(int param_1,int param_2);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004904CC(float fparam_0,float fparam_1);
extern float func_004F898C(void);
extern float func_004F9594(void);
extern int func_00656A1C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0012ab4c;
extern float DAT_0012ab50;
extern float DAT_0012ab54;

// USA 0012AA00 <- EU 0012AA00 (Ghidra, non-matching)
// GLOBAL DAT_0012ab4c int
// GLOBAL DAT_0012ab50 float
// GLOBAL DAT_0012ab54 float

undefined4 func_0012AA00(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  iVar1 = func_0012A134(param_1);
  if (iVar1 != 0) {
    return func_00656A1C((undefined4 *)(param_1 + 0x8bc),2);
  }
  fVar3 = *(float *)(param_1 + 0x918) - *(float *)(param_1 + 0x3d0);
  fVar6 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x3d8);
  if (DAT_0012ab4c < (int)ALBW_AS_U32((fVar3 * fVar3 + fVar6 * fVar6))) {
    func_00115C70(local_20,(float *)(param_1 + 0x918),(float *)(param_1 + 0x3d0));
    iVar1 = func_004904CC(local_20[0],local_18);
    *(int *)(param_1 + 0x930) = iVar1;
  }
  else if (*(uint *)(param_1 + 0x968) < *(uint *)(param_1 + 0x96c)) {
    *(uint *)(param_1 + 0x968) = *(uint *)(param_1 + 0x968) + 1;
  }
  else if (*(char *)(param_1 + 0x97a) == '\0') {
    return func_00656A1C((undefined4 *)(param_1 + 0x8bc),0);
  }
  func_0012A4C4(param_1,0);
  uVar2 = *(uint *)(param_1 + 1000);
  fVar4 = func_004F898C();
  fVar4 = *(float *)(param_1 + 0x3e0) - fVar4;
  fVar5 = func_004F9594();
  fVar6 = DAT_0012ab54;
  fVar3 = DAT_0012ab50;
  if (fVar4 < -fVar5) {
    fVar4 = -fVar5;
  }
  *(float *)(param_1 + 0x3e0) = fVar4;
  fVar5 = *(float *)(param_1 + 0x92c);
  fVar5 = fVar5 + (fVar3 - fVar5) * fVar6;
  *(float *)(param_1 + 0x92c) = fVar5;
  func_0014FAFC(param_1,uVar2,fVar5);
  *(float *)(param_1 + 0x3e0) = fVar4;
  return 0;
}

