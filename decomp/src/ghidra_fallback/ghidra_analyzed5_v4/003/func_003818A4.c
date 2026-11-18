#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern float func_004F898C(void);
extern float func_004F9594(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float *DAT_00381994;
extern int DAT_00381998;
extern float DAT_0038199c;
extern float DAT_003819a0;
extern float DAT_003819a4;
extern int DAT_003819a8;

// USA 003818A4 <- EU 00381880 (Ghidra, non-matching)
// GLOBAL DAT_00381994 float *
// GLOBAL DAT_00381998 int
// GLOBAL DAT_0038199c float
// GLOBAL DAT_003819a0 float
// GLOBAL DAT_003819a4 float
// GLOBAL DAT_003819a8 int

void func_003818A4(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((int *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  local_2c = *DAT_00381994;
  fStack_28 = DAT_00381994[1];
  local_24 = DAT_00381994[2];
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&local_2c,pfVar3,(float *)(param_1 + 0x3d0));
  iVar4 = func_0068C690(&local_2c);
  fparam_0 = DAT_0038199c;
  *(int *)(param_1 + 0xad8) = iVar4;
  func_0051D2F4((int *)(param_1 + 1000),iVar4,0,DAT_00381998,fparam_0);
  uVar5 = *(uint *)(param_1 + 1000);
  fVar6 = func_004F898C();
  fVar6 = *(float *)(param_1 + 0x3e0) - fVar6;
  fVar7 = func_004F9594();
  fVar2 = DAT_003819a4;
  fVar1 = DAT_003819a0;
  if (fVar6 < -fVar7) {
    fVar6 = -fVar7;
  }
  *(float *)(param_1 + 0x3e0) = fVar6;
  fVar7 = *(float *)(param_1 + 0xb04);
  fVar7 = fVar7 + (fVar1 - fVar7) * fVar2;
  *(float *)(param_1 + 0xb04) = fVar7;
  func_0014FAFC(param_1,uVar5,fVar7);
  *(float *)(param_1 + 0x3e0) = fVar6;
  if (*(int *)(param_1 + 0xa18) != 0) {
    local_40[0] = *(int *)(param_1 + 1000) - uVar5;
    iVar4 = func_0058E2B8(local_40);
    if (iVar4 < DAT_003819a8) {
      iVar4 = DAT_003819a8;
    }
    func_0051D2F4((int *)(param_1 + 0xa18),0,DAT_003819a8,iVar4,fparam_0);
  }
  return;
}

