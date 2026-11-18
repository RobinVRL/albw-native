#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int iRam0020b42c;
extern int DAT_0020b404;
extern float DAT_0020b408;
extern uint DAT_0020b40c;
extern int DAT_0020b428;
extern char s_SE_DeguRock_HEAD_ATTACK_0020b410[];

// USA 0020B2A0 <- EU 0020B2A0 (Ghidra, non-matching)
// GLOBAL DAT_0020b404 int
// GLOBAL DAT_0020b408 float
// GLOBAL DAT_0020b40c uint
// GLOBAL DAT_0020b428 int
// GLOBAL UNK_0020b42c int
// GLOBAL s_SE_DeguRock_HEAD_ATTACK_0020b410 string

void func_0020B2A0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  iVar2 = DAT_0020b404;
  param_1[0x326] = DAT_0020b404;
  param_1[0x325] = iVar2;
  param_1[0x30d] = iVar2;
  pfVar3 = (float *)(param_1 + 0x309);
  *(char *)(param_1 + 0x30e) = (char)param_1[0x30e] + '\x01';
  param_1[0x311] = param_1[0x311] + -1;
  pfVar1 = (float *)func_00520FC0();
  func_00115C54(pfVar3,pfVar3,pfVar1);
  func_00115D70(pfVar3,pfVar3,DAT_0020b408);
  iVar2 = func_00520FC0();
  param_1[0x30a] = *(int *)(iVar2 + 4);
  if (pfVar3 == (float *)0x0) {
    pfVar3 = (float *)func_00520FC0();
  }
  func_00115C70(&local_1c,pfVar3,(float *)(param_1 + 0x26d));
  local_28 = local_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  iVar2 = func_0068C690(&local_28);
  local_34 = iVar2 - param_1[0xfa];
  uVar4 = func_0058E2B8(&local_34);
  if (DAT_0020b40c < uVar4) {
    iVar5 = param_1[0xfa];
    iVar6 = iVar2 - iVar5;
    if (iVar2 != iVar5 && -1 < iVar6) {
      iVar2 = iVar5 + DAT_0020b40c;
    }
    if (iVar6 < 1) {
      iVar2 = iVar5 - DAT_0020b40c;
    }
  }
  param_1[0x310] = iVar2;
  local_30 = DAT_0020b428;
  param_1[0x30f] = param_1[0xfa];
  param_1[0x278] = 0;
  *(undefined1 *)(param_1 + 0x29b) = 0;
  local_2c = s_SE_DeguRock_HEAD_ATTACK_0020b410;
  func_00150A84(param_1,&local_30,0);
  param_1[0x328] = 0;
  param_1[0x2e4] = 0;
  func_004FC570(param_1);
  func_004FABDC((int)param_1,0x14,1,0);
  param_1[0x316] = iRam0020b42c;
  return;
}

