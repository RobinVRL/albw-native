#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_0031B220(int param_1,int *param_2,int *param_3);
extern int func_0031BFA0(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern undefined4 DAT_00423344;
extern undefined4 DAT_00423348;
extern int DAT_00423354;
extern undefined DAT_00423364;
extern char s_DisablePanel_00423384[];
extern char s_EnablePanel_0042336c[];
extern char s_G_Panel_00_00423378[];
extern char s_G_Scroll_00_00423358[];
extern char s_L_Item_00_00423394[];
extern char s_Scroll_0042334c[];

// USA 00423158 <- EU 00423138 (Ghidra, non-matching)
// GLOBAL DAT_00423344 undefined4
// GLOBAL DAT_00423348 undefined4
// GLOBAL DAT_00423354 int
// GLOBAL DAT_00423364 undefined
// GLOBAL s_DisablePanel_00423384 string
// GLOBAL s_EnablePanel_0042336c string
// GLOBAL s_G_Panel_00_00423378 string
// GLOBAL s_G_Scroll_00_00423358 string
// GLOBAL s_L_Item_00_00423394 string
// GLOBAL s_Scroll_0042334c string

int func_00423158(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  puVar3 = func_00232540(param_1);
  *puVar3 = DAT_00423344;
  iVar4 = func_0031BFA0(puVar3 + 8);
  *(undefined2 *)(iVar4 + 0x50) = 0;
  uVar1 = DAT_00423348;
  *(undefined2 *)(iVar4 + 0x52) = 0xffff;
  *(undefined4 *)(iVar4 + 0x54) = uVar1;
  *(undefined4 *)(iVar4 + 0x58) = 0;
  *(undefined2 *)(iVar4 + 0x5c) = 0;
  *(undefined2 *)(iVar4 + 0x5e) = 0xffff;
  *(undefined4 *)(iVar4 + 0x60) = uVar1;
  *(undefined4 *)(iVar4 + 100) = 0;
  *(undefined1 *)(iVar4 + 0x68) = 0xff;
  puVar3 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar3 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = func_00168434(puVar3);
  }
  func_00168100(piVar6,param_2,param_3);
  *(int **)(iVar4 + -4) = piVar6;
  *(uint *)(iVar4 + -8) = *(uint *)(iVar4 + -8) | 0x10;
  func_0016773C((int)piVar6,4);
  iVar2 = DAT_00423354;
  local_1c = s_Scroll_0042334c;
  local_20 = DAT_00423354;
  local_24 = s_G_Scroll_00_00423358;
  local_28 = DAT_00423354;
  (**(code **)(DAT_00423354 + 8))(&local_28);
  iVar5 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_24);
  func_00166C20(piVar6,0,&local_20,iVar5);
  local_24 = &DAT_00423364;
  local_28 = iVar2;
  local_1c = s_G_Scroll_00_00423358;
  local_20 = iVar2;
  (**(code **)(iVar2 + 8))(&local_20);
  iVar5 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_1c);
  func_00166C20(piVar6,1,&local_28,iVar5);
  local_24 = s_EnablePanel_0042336c;
  local_28 = iVar2;
  local_1c = s_G_Panel_00_00423378;
  local_20 = iVar2;
  (**(code **)(iVar2 + 8))(&local_20);
  iVar5 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_1c);
  func_00166C20(piVar6,2,&local_28,iVar5);
  local_24 = s_DisablePanel_00423384;
  local_28 = iVar2;
  local_1c = s_G_Panel_00_00423378;
  local_20 = iVar2;
  (**(code **)(iVar2 + 8))(&local_20);
  iVar5 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_1c);
  func_00166C20(piVar6,3,&local_28,iVar5);
  local_24 = s_L_Item_00_00423394;
  local_28 = iVar2;
  func_0031B220(iVar4,piVar6,&local_28);
  return iVar4 + -0x20;
}

