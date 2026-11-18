#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004747B8(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_004554d4;
extern int DAT_004554d8;
extern undefined4 DAT_004554dc;
extern undefined DAT_004554e0;
extern int DAT_004554e4;
extern undefined DAT_004554e8;
extern undefined DAT_004554f4;
extern char s_LinkColor_00455508[];
extern char s_MapState_004554fc[];
extern char s_P_LinkCheckerS_00_00455528[];
extern char s_P_LinkChecker_00_00455514[];
extern char s_Visible_004554ec[];

// USA 004552E0 <- EU 004552B8 (Ghidra, non-matching)
// GLOBAL DAT_004554d4 int
// GLOBAL DAT_004554d8 int
// GLOBAL DAT_004554dc undefined4
// GLOBAL DAT_004554e0 undefined
// GLOBAL DAT_004554e4 int
// GLOBAL DAT_004554e8 undefined
// GLOBAL DAT_004554f4 undefined
// GLOBAL s_LinkColor_00455508 string
// GLOBAL s_MapState_004554fc string
// GLOBAL s_P_LinkCheckerS_00_00455528 string
// GLOBAL s_P_LinkChecker_00_00455514 string
// GLOBAL s_Visible_004554ec string

int * func_004552E0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = (int *)func_004747B8(param_1);
  iVar3 = DAT_004554d8;
  iVar4 = DAT_004554d4;
  piVar2[0xe] = DAT_004554d4 + 0x58;
  *piVar2 = iVar4;
  *(undefined2 *)(piVar2 + 0x25) = 0;
  *(undefined2 *)((int)piVar2 + 0x96) = 0xffff;
  piVar2[0x26] = iVar3;
  piVar2[0x27] = 0;
  *(undefined2 *)(piVar2 + 0x28) = 0;
  *(undefined2 *)((int)piVar2 + 0xa2) = 0xffff;
  piVar2[0x29] = iVar3;
  piVar2[0x2a] = 0;
  *(undefined2 *)(piVar2 + 0x2b) = 0;
  *(undefined2 *)((int)piVar2 + 0xae) = 0xffff;
  piVar2[0x2c] = iVar3;
  piVar2[0x2d] = 0;
  *(undefined1 *)(piVar2 + 0x2e) = 0;
  uVar1 = DAT_004554dc;
  piVar2[0x2f] = iVar3;
  piVar2[0x30] = iVar3;
  piVar2[0x31] = iVar3;
  piVar2[0x32] = 0;
  *(undefined1 *)(piVar2 + 0x33) = 0;
  piVar2[0x34] = 0;
  piVar2[0x35] = 0;
  *(undefined1 *)(piVar2 + 0x36) = 0;
  *(undefined1 *)((int)piVar2 + 0xd9) = 0;
  (**(code **)(*piVar2 + 0x38))(piVar2,uVar1,0);
  piVar5 = (int *)piVar2[7];
  func_0016773C((int)piVar5,6);
  iVar4 = DAT_004554e4;
  local_1c = &DAT_004554e0;
  local_20 = DAT_004554e4;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = &DAT_004554e8;
  local_20 = iVar4;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = s_Visible_004554ec;
  local_20 = iVar4;
  func_00166C20(piVar5,2,&local_20,0);
  local_1c = &DAT_004554f4;
  local_20 = iVar4;
  func_00166C20(piVar5,3,&local_20,0);
  local_1c = s_MapState_004554fc;
  local_20 = iVar4;
  func_00166C20(piVar5,4,&local_20,0);
  local_1c = s_LinkColor_00455508;
  local_20 = iVar4;
  func_00166C20(piVar5,5,&local_20,0);
  piVar2[10] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x27] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x96) = 2;
  *(undefined2 *)(piVar2 + 0x25) = 0;
  piVar2[0x1f] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x76) = 3;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  piVar2[0x2a] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0xa2) = 4;
  *(undefined2 *)(piVar2 + 0x28) = 0;
  piVar2[0x2d] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0xae) = 5;
  *(undefined2 *)(piVar2 + 0x2b) = 5;
  local_1c = s_P_LinkChecker_00_00455514;
  local_20 = iVar4;
  iVar3 = func_005229AC(piVar5,&local_20);
  piVar2[0x34] = iVar3;
  local_1c = s_P_LinkCheckerS_00_00455528;
  local_20 = iVar4;
  iVar4 = func_005229AC(piVar5,&local_20);
  piVar2[0x35] = iVar4;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x4b;
  return piVar2;
}

