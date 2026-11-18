#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00489384;
extern int DAT_00489388;
extern int DAT_0048939c;
extern undefined DAT_004893b4;
extern char s_InTitle_004893a0[];
extern char s_InTriForce_004893a8[];
extern char s_Mn_TitleLogoT_0048938c[];
extern char s_N_JP_00_004893b8[];

// USA 00489264 <- EU 0048923C (Ghidra, non-matching)
// GLOBAL DAT_00489384 int
// GLOBAL DAT_00489388 int
// GLOBAL DAT_0048939c int
// GLOBAL DAT_004893b4 undefined
// GLOBAL s_InTitle_004893a0 string
// GLOBAL s_InTriForce_004893a8 string
// GLOBAL s_Mn_TitleLogoT_0048938c string
// GLOBAL s_N_JP_00_004893b8 string

int * func_00489264(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_004B9A10(param_1,0);
  iVar1 = DAT_00489388;
  iVar3 = DAT_00489384;
  piVar2[0xe] = DAT_00489384 + 0x54;
  *piVar2 = iVar3;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  *(undefined2 *)((int)piVar2 + 0x76) = 0xffff;
  iVar3 = DAT_0048939c;
  piVar2[0x1e] = iVar1;
  piVar2[0x1f] = 0;
  local_1c = s_Mn_TitleLogoT_0048938c;
  local_20 = iVar3;
  (**(code **)(*piVar2 + 0x38))(piVar2,&local_20,0);
  piVar4 = (int *)piVar2[7];
  func_0016773C((int)piVar4,3);
  local_1c = s_InTitle_004893a0;
  local_20 = iVar3;
  func_00166C20(piVar4,0,&local_20,0);
  local_1c = s_InTriForce_004893a8;
  local_20 = iVar3;
  func_00166C20(piVar4,1,&local_20,0);
  local_1c = &DAT_004893b4;
  local_20 = iVar3;
  func_00166C20(piVar4,2,&local_20,0);
  piVar2[10] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0x1f] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x76) = 1;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  piVar2[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x2e) = 2;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x20] = 0;
  *(undefined1 *)(piVar2 + 0x21) = 0;
  local_1c = s_N_JP_00_004893b8;
  local_20 = iVar3;
  iVar3 = func_005229AC(piVar4,&local_20);
  if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x44) & 1) != 0)) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  return piVar2;
}

