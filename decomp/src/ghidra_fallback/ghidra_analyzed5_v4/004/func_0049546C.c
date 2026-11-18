#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_001096AC(int param_1,undefined4 param_2);
extern int func_00490A18(int param_1,int param_2);
extern int func_0049A188(undefined4 *param_1);
extern undefined4 DAT_004955f0;
extern char s_cf_004955f4[];
extern char s_cf_00495608[];
extern char s_cf_0049561c[];
extern char s_cf_00495630[];
extern char s_sead__RightAppDrawFinal_00495630[];
extern char s_sead__RightAppDraw_0049561c[];
extern char s_sead__RightRootDraw_004955f4[];
extern char s_sead__RightSysDraw_00495608[];

// USA 0049546C <- EU 00495444 (Ghidra, non-matching)
// GLOBAL DAT_004955f0 undefined4
// GLOBAL s_cf_00495630 string
// GLOBAL s_cf_0049561c string
// GLOBAL s_cf_004955f4 string
// GLOBAL s_cf_00495608 string

int func_0049546C(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)func_0049A188(param_1);
  *puVar1 = DAT_004955f0;
  pvVar2 = func_001096AC((int)(puVar1 + 0xe5),puVar1 + 1);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x390);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x3e0);
  pvVar2 = func_001096AC((int)pvVar2 + 0x50,(int)pvVar2 + -0x430);
  *(char **)((int)pvVar2 + -200) = s_sead__RightRootDraw_004955f4;
  *(char **)((int)pvVar2 + -0x78) = s_sead__RightSysDraw_00495608;
  *(char **)((int)pvVar2 + -0x28) = s_sead__RightAppDraw_0049561c;
  iVar3 = (int)pvVar2 + -0x50;
  *(char **)((int)pvVar2 + 0x28) = s_sead__RightAppDrawFinal_00495630;
  func_00490A18((int)pvVar2 + -0xf0,iVar3);
  func_00490A18((int)pvVar2 + -0xf0,(int)pvVar2);
  func_00490A18((int)pvVar2 + -0xf0,(int)pvVar2 + -0xa0);
  iVar4 = (int)pvVar2 + -0xa0;
  func_0010961C(iVar4);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0x58);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar4,0);
  }
  *(undefined4 *)((int)pvVar2 + -0x5c) = 0;
  func_00109698(iVar4);
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,0);
  }
  *(undefined4 *)((int)pvVar2 + -0xc) = 0;
  func_00109698(iVar3);
  func_0010961C((int)pvVar2);
  puVar1 = *(undefined4 **)((int)pvVar2 + 0x48);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,pvVar2,0);
  }
  *(undefined4 *)((int)pvVar2 + 0x44) = 0;
  func_00109698((int)pvVar2);
  iVar3 = (int)pvVar2 + -0xf0;
  func_0010961C(iVar3);
  puVar1 = *(undefined4 **)((int)pvVar2 + -0xa8);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar3,3);
  }
  *(undefined4 *)((int)pvVar2 + -0xac) = 3;
  func_00109698(iVar3);
  return (int)pvVar2 + -0x484;
}

