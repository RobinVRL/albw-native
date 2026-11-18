#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00352198(int param_1,int *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern int iRam002f40f8;
extern undefined4 uRam002f40e4;
extern undefined4 uRam002f40e8;
extern undefined4 uRam002f40fc;
extern char s_cf_002f40ec[];

// USA 002F3FE8 <- EU 002F3FC4 (Ghidra, non-matching)
// GLOBAL UNK_002f40e4 undefined4
// GLOBAL UNK_002f40e8 undefined4
// GLOBAL UNK_002f40f8 int
// GLOBAL UNK_002f40fc undefined4

void func_002F3FE8(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_30 ((float *)(albw_frame + 0x0))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define pcStack_1c (*(char * *)(albw_frame + 0x14))
  *(undefined1 *)(param_1 + 0xd3f) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b | 1;
  func_004FABDC(param_1,0,0xffffffff,0);
  uVar4 = uRam002f40e4;
  *(undefined4 *)(param_1 + 0x3dc) = uRam002f40e4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  pfVar2 = (float *)func_00520FC0();
  *(undefined4 *)(param_1 + 0xbb4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 3000) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xbbc) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_1 + 0x3d8);
  func_00115C70(afStack_30,pfVar2,(float *)(param_1 + 0xbb4));
  iVar3 = func_0068C690(afStack_30);
  *(int *)(param_1 + 0xc88) = iVar3;
  uVar1 = uRam002f40e8;
  *(undefined4 *)(param_1 + 0xb10) = 10;
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  iStack_20 = iRam002f40f8;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  pcStack_1c = (char *)((int)s_cf_002f40ec);
  func_00352198(param_1 + 0x324,&iStack_20);
  uVar1 = uRam002f40fc;
  *(undefined4 *)(param_1 + 0xba0) = 0x55;
  *(undefined4 *)(param_1 + 0xba4) = uVar1;
  *(undefined4 *)(param_1 + 0xb9c) = 0;
  *(undefined4 *)(param_1 + 0xb7c) = 0;
  *(undefined4 *)(param_1 + 0xb8c) = uVar4;
  *(undefined1 *)(param_1 + 0xd3d) = 0;
  return;
}

