#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_002BF520(undefined4 *param_1);
extern int func_002C00C0(int param_1);
extern undefined4 DAT_004843d4;
extern undefined4 DAT_004843d8;
extern int DAT_004843e4;
extern undefined DAT_00484408;
extern char s_Disable_004843e8[];
extern char s_Enable_004843dc[];
extern char s_TouchDecide_004843fc[];
extern char s_TouchOnOff_004843f0[];

// USA 00484238 <- EU 00484210 (Ghidra, non-matching)
// GLOBAL DAT_004843d4 undefined4
// GLOBAL DAT_004843d8 undefined4
// GLOBAL DAT_004843e4 int
// GLOBAL DAT_00484408 undefined
// GLOBAL s_Disable_004843e8 string
// GLOBAL s_Enable_004843dc string
// GLOBAL s_TouchDecide_004843fc string
// GLOBAL s_TouchOnOff_004843f0 string

undefined4 * func_00484238(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_002BF520(param_1);
  *puVar3 = DAT_004843d4;
  uVar1 = DAT_004843d8;
  *(undefined2 *)(puVar3 + 0x18) = 0;
  *(undefined2 *)((int)puVar3 + 0x62) = 0xffff;
  puVar3[0x19] = uVar1;
  puVar3[0x1a] = 0;
  *(undefined2 *)(puVar3 + 0x1b) = 0;
  *(undefined2 *)((int)puVar3 + 0x6e) = 0xffff;
  puVar3[0x1c] = uVar1;
  puVar3[0x1d] = 0;
  *(undefined2 *)(puVar3 + 0x1e) = 0;
  *(undefined2 *)((int)puVar3 + 0x7a) = 0xffff;
  puVar3[0x1f] = uVar1;
  puVar3[0x20] = 0;
  *(undefined2 *)(puVar3 + 0x21) = 0;
  *(undefined2 *)((int)puVar3 + 0x86) = 0xffff;
  puVar3[0x22] = uVar1;
  puVar3[0x23] = 0;
  *(undefined1 *)(puVar3 + 0x24) = 0;
  *(undefined1 *)((int)puVar3 + 0x91) = 0;
  puVar3[0x25] = 8;
  *(undefined1 *)((int)puVar3 + 0xf) = 0x81;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = func_00168434(puVar4);
  }
  func_00168100(piVar5,param_2,param_3);
  puVar3[7] = piVar5;
  puVar3[6] = puVar3[6] | 0x10;
  func_0016773C((int)piVar5,5);
  iVar2 = DAT_004843e4;
  local_1c = s_Enable_004843dc;
  local_20 = DAT_004843e4;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = s_Disable_004843e8;
  local_20 = iVar2;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = s_TouchOnOff_004843f0;
  local_20 = iVar2;
  func_00166C20(piVar5,2,&local_20,0);
  local_1c = s_TouchDecide_004843fc;
  local_20 = iVar2;
  func_00166C20(piVar5,3,&local_20,0);
  local_1c = &DAT_00484408;
  local_20 = iVar2;
  func_00166C20(piVar5,4,&local_20,0);
  puVar3[0x1d] = piVar5;
  *(undefined2 *)((int)puVar3 + 0x6e) = 0;
  *(undefined2 *)(puVar3 + 0x1b) = 0;
  puVar3[0x20] = piVar5;
  *(undefined2 *)((int)puVar3 + 0x7a) = 1;
  *(undefined2 *)(puVar3 + 0x1e) = 0;
  puVar3[0x23] = piVar5;
  *(undefined2 *)((int)puVar3 + 0x86) = 4;
  *(undefined2 *)(puVar3 + 0x21) = 0;
  func_002C00C0((int)puVar3);
  *(ushort *)(puVar3[5] + 0x16) = *(ushort *)(puVar3[5] + 0x16) & 0xffbf;
  return puVar3;
}

