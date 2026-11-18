#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern undefined4 uRam0021bb44;
extern undefined4 uRam0021bb48;
extern undefined4 DAT_0021bb3c;
extern undefined4 DAT_0021bb40;

// USA 0021BA8C <- EU 0021BA8C (Ghidra, non-matching)
// GLOBAL DAT_0021bb3c undefined4
// GLOBAL DAT_0021bb40 undefined4
// GLOBAL UNK_0021bb44 undefined4
// GLOBAL UNK_0021bb48 undefined4

void func_0021BA8C(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(afStack_20,pfVar1,(float *)(param_1 + 0x3d0));
  *(undefined4 *)(param_1 + 0x132c) = DAT_0021bb3c;
  iVar2 = func_0068C690(afStack_20);
  uVar3 = DAT_0021bb40;
  *(int *)(param_1 + 1000) = iVar2;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  func_004FABDC(param_1,1,0xffffffff,0);
  uVar3 = *(undefined4 *)(param_1 + 0x3e0);
  func_0014FAFC(param_1,*(int *)(param_1 + 1000) + 0x80000000,*(float *)(param_1 + 0x132c));
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  uVar3 = uRam0021bb44;
  *(undefined4 *)(param_1 + 0x1364) = 2;
  *(undefined4 *)(param_1 + 0x1368) = uVar3;
  uVar3 = uRam0021bb48;
  *(undefined4 *)(param_1 + 0x1360) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x1338) = uVar3;
  return;
}

