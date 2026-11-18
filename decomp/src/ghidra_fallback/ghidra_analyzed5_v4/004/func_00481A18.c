#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001B6E04(undefined4 *param_1);
extern int func_00231524(int param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00481d9c;
extern int DAT_00481da0;
extern int DAT_00481db8;
extern undefined DAT_00481dd0;
extern undefined DAT_00481e54;
extern char s_Decide2X_00481e3c[];
extern char s_Decide2Y_00481e48[];
extern char s_DecideX_00481e2c[];
extern char s_DecideY_00481e34[];
extern char s_G_Baloon_00_00481e08[];
extern char s_G_Btn_00_00481df0[];
extern char s_G_InOut_00_00481dc4[];
extern char s_G_Pattern_00_00481e1c[];
extern char s_G_Wait_00_00481dd8[];
extern char s_Gm_ItemSelectFrame_00481da4[];
extern char s_LoopYBtn_00481de4[];
extern char s_OnOffBaloon_00481dfc[];
extern char s_OnOff_00481dbc[];
extern char s_P_Attention_00_00481e58[];
extern char s_Pattern_00481e14[];

// USA 00481A18 <- EU 004819F0 (Ghidra, non-matching)
// GLOBAL DAT_00481d9c int
// GLOBAL DAT_00481da0 int
// GLOBAL DAT_00481db8 int
// GLOBAL DAT_00481dd0 undefined
// GLOBAL DAT_00481e54 undefined
// GLOBAL s_Decide2X_00481e3c string
// GLOBAL s_Decide2Y_00481e48 string
// GLOBAL s_DecideX_00481e2c string
// GLOBAL s_DecideY_00481e34 string
// GLOBAL s_G_Baloon_00_00481e08 string
// GLOBAL s_G_Btn_00_00481df0 string
// GLOBAL s_G_InOut_00_00481dc4 string
// GLOBAL s_G_Pattern_00_00481e1c string
// GLOBAL s_G_Wait_00_00481dd8 string
// GLOBAL s_Gm_ItemSelectFrame_00481da4 string
// GLOBAL s_LoopYBtn_00481de4 string
// GLOBAL s_OnOffBaloon_00481dfc string
// GLOBAL s_OnOff_00481dbc string
// GLOBAL s_P_Attention_00_00481e58 string
// GLOBAL s_Pattern_00481e14 string

int * func_00481A18(undefined4 *param_1)

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
  piVar1 = func_001B6E04(param_1);
  *piVar1 = DAT_00481d9c;
  iVar3 = DAT_00481da0;
  *(undefined2 *)(piVar1 + 0xe) = 0;
  *(undefined2 *)((int)piVar1 + 0x3a) = 0xffff;
  piVar1[0xf] = iVar3;
  piVar1[0x10] = 0;
  *(undefined2 *)(piVar1 + 0x11) = 0;
  *(undefined2 *)((int)piVar1 + 0x46) = 0xffff;
  piVar1[0x12] = iVar3;
  piVar1[0x13] = 0;
  *(undefined2 *)(piVar1 + 0x14) = 0;
  *(undefined2 *)((int)piVar1 + 0x52) = 0xffff;
  piVar1[0x15] = iVar3;
  piVar1[0x16] = 0;
  *(undefined2 *)(piVar1 + 0x17) = 0;
  *(undefined2 *)((int)piVar1 + 0x5e) = 0xffff;
  piVar1[0x18] = iVar3;
  piVar1[0x19] = 0;
  *(undefined2 *)(piVar1 + 0x1a) = 0;
  *(undefined2 *)((int)piVar1 + 0x6a) = 0xffff;
  piVar1[0x1b] = iVar3;
  piVar1[0x1c] = 0;
  piVar1[0x1d] = 0;
  iVar3 = DAT_00481db8;
  *(undefined1 *)(piVar1 + 0x1e) = 3;
  *(undefined1 *)((int)piVar1 + 0x79) = 0;
  local_24 = s_Gm_ItemSelectFrame_00481da4;
  local_28 = iVar3;
  (**(code **)(*piVar1 + 0x38))(piVar1,&local_28,0);
  piVar4 = (int *)piVar1[7];
  func_0016773C((int)piVar4,10);
  local_24 = s_OnOff_00481dbc;
  local_28 = iVar3;
  local_2c = s_G_InOut_00_00481dc4;
  local_30 = iVar3;
  (**(code **)(iVar3 + 8))(&local_30);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_2c);
  func_00166C20(piVar4,0,&local_28,iVar2);
  local_2c = &DAT_00481dd0;
  local_30 = iVar3;
  local_24 = s_G_Wait_00_00481dd8;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_24);
  func_00166C20(piVar4,1,&local_30,iVar2);
  local_2c = s_LoopYBtn_00481de4;
  local_30 = iVar3;
  local_24 = s_G_Btn_00_00481df0;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_24);
  func_00166C20(piVar4,2,&local_30,iVar2);
  local_2c = s_OnOffBaloon_00481dfc;
  local_30 = iVar3;
  local_24 = s_G_Baloon_00_00481e08;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_24);
  func_00166C20(piVar4,3,&local_30,iVar2);
  local_2c = s_Pattern_00481e14;
  local_30 = iVar3;
  local_24 = s_G_Pattern_00_00481e1c;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_24);
  func_00166C20(piVar4,4,&local_30,iVar2);
  local_2c = s_DecideX_00481e2c;
  local_30 = iVar3;
  func_00166C20(piVar4,5,&local_30,0);
  local_2c = s_DecideY_00481e34;
  local_30 = iVar3;
  func_00166C20(piVar4,6,&local_30,0);
  local_2c = s_Decide2X_00481e3c;
  local_30 = iVar3;
  func_00166C20(piVar4,7,&local_30,0);
  local_2c = s_Decide2Y_00481e48;
  local_30 = iVar3;
  func_00166C20(piVar4,8,&local_30,0);
  local_2c = &DAT_00481e54;
  local_30 = iVar3;
  local_24 = s_G_InOut_00_00481dc4;
  local_28 = iVar3;
  (**(code **)(iVar3 + 8))(&local_28);
  iVar2 = func_003FDF90(*(int *)(*piVar4 + 0x14),(int)local_24);
  func_00166C20(piVar4,9,&local_30,iVar2);
  piVar1[10] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x22) = 0;
  *(undefined2 *)(piVar1 + 8) = 0;
  piVar1[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x2e) = 9;
  *(undefined2 *)(piVar1 + 0xb) = 0;
  piVar1[0x13] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x46) = 4;
  *(undefined2 *)(piVar1 + 0x11) = 0;
  piVar1[0x10] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x3a) = 3;
  *(undefined2 *)(piVar1 + 0xe) = 2;
  func_00231524((int)(piVar1 + 0xe));
  piVar1[0x16] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x52) = 1;
  *(undefined2 *)(piVar1 + 0x14) = 0;
  piVar1[0x19] = (int)piVar4;
  *(undefined2 *)((int)piVar1 + 0x5e) = 2;
  *(undefined2 *)(piVar1 + 0x17) = 0;
  local_2c = s_P_Attention_00_00481e58;
  local_30 = iVar3;
  iVar3 = func_005229AC(piVar4,&local_30);
  piVar1[0x1d] = iVar3;
  *(undefined1 *)((int)piVar1 + 0xf) = 0x17;
  return piVar1;
}

