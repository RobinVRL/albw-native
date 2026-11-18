#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0043bf6c;
extern int DAT_0043bf70;
extern undefined4 DAT_0043bf74;
extern undefined DAT_0043bf78;
extern int DAT_0043bf80;
extern undefined DAT_0043bf84;
extern undefined DAT_0043bf88;
extern char s_N_OmoteUra_00_0043bfa4[];
extern char s_N_Omote_00_0043bf8c[];
extern char s_N_Ura_00_0043bf98[];

// USA 0043BDF4 <- EU 0043BDD4 (Ghidra, non-matching)
// GLOBAL DAT_0043bf6c int
// GLOBAL DAT_0043bf70 int
// GLOBAL DAT_0043bf74 undefined4
// GLOBAL DAT_0043bf78 undefined
// GLOBAL DAT_0043bf80 int
// GLOBAL DAT_0043bf84 undefined
// GLOBAL DAT_0043bf88 undefined
// GLOBAL s_N_OmoteUra_00_0043bfa4 string
// GLOBAL s_N_Omote_00_0043bf8c string
// GLOBAL s_N_Ura_00_0043bf98 string

int * func_0043BDF4(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_004B9A10(param_1,3);
  iVar3 = DAT_0043bf6c;
  iVar4 = DAT_0043bf6c + -0x54;
  piVar2[0xe] = DAT_0043bf6c;
  *piVar2 = iVar4;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  iVar4 = DAT_0043bf70;
  *(undefined2 *)((int)piVar2 + 0x76) = 0xffff;
  piVar2[0x1e] = iVar4;
  piVar2[0x1f] = 0;
  piVar2[0x20] = 0;
  uVar1 = DAT_0043bf74;
  piVar2[0x21] = 0;
  piVar2[0x22] = 0;
  (**(code **)(iVar3 + -0x1c))(piVar2,uVar1,0);
  piVar5 = (int *)piVar2[7];
  func_0016773C((int)piVar5,3);
  iVar3 = DAT_0043bf80;
  local_1c = &DAT_0043bf78;
  local_20 = DAT_0043bf80;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = &DAT_0043bf84;
  local_20 = iVar3;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = &DAT_0043bf88;
  local_20 = iVar3;
  func_00166C20(piVar5,2,&local_20,0);
  piVar2[0x1f] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x76) = 0;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  piVar2[10] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x22) = 1;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar2 + 0x2e) = 2;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  local_1c = s_N_Omote_00_0043bf8c;
  local_20 = iVar3;
  iVar4 = func_005229AC(piVar5,&local_20);
  piVar2[0x20] = iVar4;
  local_1c = s_N_Ura_00_0043bf98;
  local_20 = iVar3;
  iVar4 = func_005229AC(piVar5,&local_20);
  piVar2[0x21] = iVar4;
  local_1c = s_N_OmoteUra_00_0043bfa4;
  local_20 = iVar3;
  iVar3 = func_005229AC(piVar5,&local_20);
  piVar2[0x22] = iVar3;
  func_00167E04(piVar2[7],piVar2[0x20],0);
  func_00167E04(piVar2[7],piVar2[0x21],0);
  func_00167E04(piVar2[7],piVar2[0x22],1);
  *(undefined1 *)((int)piVar2 + 0xf) = 0;
  return piVar2;
}

