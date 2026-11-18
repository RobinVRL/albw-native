#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0012CBA4(int param_1);
extern int func_0012CE90(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern undefined4 DAT_004821ac;
extern undefined4 DAT_004821b0;
extern undefined DAT_004821b4;
extern int DAT_004821b8;
extern undefined DAT_004821d4;
extern undefined DAT_004821e0;
extern char s_Decide_004821cc[];
extern char s_InWait_004821d8[];
extern char s_KeyOn_004821c4[];
extern char s_OutWait_004821e8[];
extern char s_TouchOn_004821bc[];

// USA 00481F98 <- EU 00481F70 (Ghidra, non-matching)
// GLOBAL DAT_004821ac undefined4
// GLOBAL DAT_004821b0 undefined4
// GLOBAL DAT_004821b4 undefined
// GLOBAL DAT_004821b8 int
// GLOBAL DAT_004821d4 undefined
// GLOBAL DAT_004821e0 undefined
// GLOBAL s_Decide_004821cc string
// GLOBAL s_InWait_004821d8 string
// GLOBAL s_KeyOn_004821c4 string
// GLOBAL s_OutWait_004821e8 string
// GLOBAL s_TouchOn_004821bc string

undefined4 * func_00481F98(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar4 = func_0012CE90(param_1);
  uVar1 = DAT_004821ac;
  *(undefined2 *)(puVar4 + 0x24) = 0;
  *(undefined2 *)((int)puVar4 + 0x92) = 0xffff;
  puVar4[0x25] = uVar1;
  puVar4[0x26] = 0;
  *(undefined2 *)(puVar4 + 0x27) = 0;
  *(undefined2 *)((int)puVar4 + 0x9e) = 0xffff;
  uVar2 = DAT_004821b0;
  puVar4[0x28] = uVar1;
  puVar4[0x29] = 0;
  *(undefined1 *)(puVar4 + 0x2a) = 0;
  *puVar4 = uVar2;
  puVar5 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar5 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = func_00168434(puVar5);
  }
  func_00168100(piVar6,param_2,param_3);
  puVar4[7] = piVar6;
  puVar4[6] = puVar4[6] | 0x10;
  func_0016773C((int)piVar6,8);
  iVar3 = DAT_004821b8;
  local_1c = &DAT_004821b4;
  local_20 = DAT_004821b8;
  func_00166C20(piVar6,0,&local_20,0);
  local_1c = s_TouchOn_004821bc;
  local_20 = iVar3;
  func_00166C20(piVar6,1,&local_20,0);
  local_1c = s_KeyOn_004821c4;
  local_20 = iVar3;
  func_00166C20(piVar6,2,&local_20,0);
  local_1c = s_Decide_004821cc;
  local_20 = iVar3;
  func_00166C20(piVar6,3,&local_20,0);
  local_1c = &DAT_004821d4;
  local_20 = iVar3;
  func_00166C20(piVar6,4,&local_20,0);
  local_1c = s_InWait_004821d8;
  local_20 = iVar3;
  func_00166C20(piVar6,5,&local_20,0);
  local_1c = &DAT_004821e0;
  local_20 = iVar3;
  func_00166C20(piVar6,6,&local_20,0);
  local_1c = s_OutWait_004821e8;
  local_20 = iVar3;
  func_00166C20(piVar6,7,&local_20,0);
  puVar4[10] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x22) = 0;
  *(undefined2 *)(puVar4 + 8) = 0;
  puVar4[0xd] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x2e) = 4;
  *(undefined2 *)(puVar4 + 0xb) = 0;
  puVar4[0x26] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x92) = 6;
  *(undefined2 *)(puVar4 + 0x24) = 0;
  puVar4[0x10] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x3a) = 1;
  *(undefined2 *)(puVar4 + 0xe) = 1;
  puVar4[0x13] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x46) = 1;
  *(undefined2 *)(puVar4 + 0x11) = 3;
  puVar4[0x16] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x52) = 2;
  *(undefined2 *)(puVar4 + 0x14) = 0;
  puVar4[0x19] = piVar6;
  *(undefined2 *)((int)puVar4 + 0x5e) = 3;
  *(undefined2 *)(puVar4 + 0x17) = 0;
  func_0012CBA4((int)puVar4);
  *(ushort *)(puVar4[5] + 0x16) = *(ushort *)(puVar4[5] + 0x16) & 0xffbf;
  func_002313DC((int)(puVar4 + 8));
  return puVar4;
}

