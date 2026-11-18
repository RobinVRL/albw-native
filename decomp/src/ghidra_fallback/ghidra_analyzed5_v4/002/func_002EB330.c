#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002F14EC(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_003A42B0(int param_1,int param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_0054F764(undefined4 *param_1,uint param_2,uint *param_3);
extern int func_00668934(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float fRam002eb488;
extern float fRam002eb48c;
extern undefined4 uRam002eb490;
extern undefined4 DAT_002eb480;
extern int *DAT_002eb484;

// USA 002EB330 <- EU 002EB30C (Ghidra, non-matching)
// GLOBAL DAT_002eb480 undefined4
// GLOBAL DAT_002eb484 int *
// GLOBAL UNK_002eb488 float
// GLOBAL UNK_002eb48c float
// GLOBAL UNK_002eb490 undefined4

void func_002EB330(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  uVar3 = DAT_002eb480;
  *(undefined4 *)(param_1 + 0xc08) = DAT_002eb480;
  *(undefined4 *)(param_1 + 0x978) = 0x2a;
  *(undefined1 *)(param_1 + 0xa58) = 3;
  *(int *)(param_1 + 0x990) = param_1 + 0xcf8;
  func_0036C058(param_1 + 0x964,0,0,1);
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  iVar2 = func_0052FBA0(*DAT_002eb484 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  if (iVar2 != 0) {
    func_00668934((undefined4 *)(iVar2 + 0x40c),2);
  }
  func_004FABDC(param_1,0x1f,0xffffffff,0);
  func_004FAB60(param_1,3,0);
  func_002F14EC(param_1,0x28,fRam002eb48c,fRam002eb488);
  func_003A42B0(param_1 + 0x8ec,0);
  func_00115C70(afStack_20,(float *)(param_1 + 0xddc),(float *)(param_1 + 0xe30));
  iVar2 = func_0068C690(afStack_20);
  func_0054F764((undefined4 *)(param_1 + 0xe30),iVar2,(uint *)(param_1 + 0x1254));
  *(byte *)(param_1 + 0x768) = *(byte *)(param_1 + 0x768) & 0xfe;
  uVar1 = uRam002eb490;
  *(undefined4 *)(param_1 + 0xbe4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xbe8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xbec) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0xb10) = 0x5f;
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  *(undefined4 *)(param_1 + 0xb98) = uVar3;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  return;
}

