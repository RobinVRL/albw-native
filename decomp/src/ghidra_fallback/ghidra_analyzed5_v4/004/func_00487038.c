#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_003FDF90(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_00487228;
extern int DAT_0048722c;
extern int DAT_0048723c;
extern undefined DAT_00487240;
extern undefined DAT_00487254;
extern char s_G_BGBlack_00_00487244[];
extern char s_G_Copyright_00_00487258[];
extern char s_Mn_TitleT_00487230[];

// USA 00487038 <- EU 00487010 (Ghidra, non-matching)
// GLOBAL DAT_00487228 int
// GLOBAL DAT_0048722c int
// GLOBAL DAT_0048723c int
// GLOBAL DAT_00487240 undefined
// GLOBAL DAT_00487254 undefined
// GLOBAL s_G_BGBlack_00_00487244 string
// GLOBAL s_G_Copyright_00_00487258 string
// GLOBAL s_Mn_TitleT_00487230 string

int * func_00487038(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar1 = func_004B9A10(param_1,0);
  iVar2 = DAT_0048722c;
  iVar3 = DAT_00487228;
  piVar1[0xe] = DAT_00487228 + 0x54;
  *piVar1 = iVar3;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  *(undefined2 *)((int)piVar1 + 0x76) = 0xffff;
  piVar1[0x1e] = iVar2;
  piVar1[0x1f] = 0;
  *(undefined2 *)(piVar1 + 0x20) = 0;
  *(undefined2 *)((int)piVar1 + 0x82) = 0xffff;
  iVar3 = DAT_0048723c;
  piVar1[0x21] = iVar2;
  piVar1[0x22] = 0;
  local_2c = s_Mn_TitleT_00487230;
  local_30 = iVar3;
  (**(code **)(*piVar1 + 0x38))(piVar1,&local_30,0);
  piVar4 = (int *)piVar1[7];
  func_0016773C((int)piVar4,4);
  local_2c = &DAT_00487240;
  local_30 = iVar3;
  local_24 = s_G_BGBlack_00_00487244;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_24);
  func_00166C20(piVar4,0,&local_30,iVar2);
  local_24 = &DAT_00487254;
  local_28 = iVar3;
  local_2c = s_G_BGBlack_00_00487244;
  local_30 = iVar3;
  (**(code **)(iVar3 + 8))(&local_30);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_2c);
  func_00166C20(piVar4,1,&local_28,iVar2);
  local_24 = &DAT_00487240;
  local_28 = iVar3;
  local_2c = s_G_Copyright_00_00487258;
  local_30 = iVar3;
  (**(code **)(iVar3 + 8))(&local_30);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_2c);
  func_00166C20(piVar4,2,&local_28,iVar2);
  local_24 = &DAT_00487254;
  local_28 = iVar3;
  local_2c = s_G_Copyright_00_00487258;
  local_30 = iVar3;
  (**(code **)(iVar3 + 8))(&local_30);
  iVar3 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_2c);
  func_00166C20(piVar4,3,&local_28,iVar3);
  piVar1[10] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x22) = 0;
  *(undefined2 *)(piVar1 + 8) = 3;
  piVar1[0x1f] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x76) = 1;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  piVar1[0x22] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x82) = 2;
  *(undefined2 *)(piVar1 + 0x20) = 0;
  piVar1[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x2e) = 3;
  *(undefined2 *)(piVar1 + 0xb) = 0;
  return piVar1;
}

