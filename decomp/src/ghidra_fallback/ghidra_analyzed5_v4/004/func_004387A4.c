#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_00438870;
extern int DAT_00438874;
extern undefined1 *DAT_00438878;
extern int DAT_00438890;
extern char s_Ed_StaffCreditFadeT_0043887c[];
extern char s_FadeIn_0043889c[];
extern char s_FadeOut_00438894[];

// USA 004387A4 <- EU 00438784 (Ghidra, non-matching)
// GLOBAL DAT_00438870 int
// GLOBAL DAT_00438874 int
// GLOBAL DAT_00438878 undefined1 *
// GLOBAL DAT_00438890 int
// GLOBAL s_Ed_StaffCreditFadeT_0043887c string
// GLOBAL s_FadeIn_0043889c string
// GLOBAL s_FadeOut_00438894 string

int * func_004387A4(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004B9A10(param_1,0);
  puVar2 = DAT_00438878;
  iVar1 = DAT_00438870;
  iVar4 = DAT_00438874 + 0x54;
  *piVar3 = DAT_00438874;
  piVar3[0xe] = iVar4;
  iVar4 = DAT_00438890;
  piVar3[0x1d] = iVar1;
  *puVar2 = 1;
  local_24 = s_Ed_StaffCreditFadeT_0043887c;
  local_28 = iVar4;
  (**(code **)(*piVar3 + 0x38))(piVar3,&local_28,0);
  piVar5 = (int *)piVar3[7];
  func_0016773C((int)piVar5,2);
  local_24 = s_FadeOut_00438894;
  local_28 = iVar4;
  func_00166C20(piVar5,0,&local_28,0);
  local_24 = s_FadeIn_0043889c;
  local_28 = iVar4;
  func_00166C20(piVar5,1,&local_28,0);
  piVar3[10] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x2e) = 1;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  func_002313DC((int)(piVar3 + 8));
  *(undefined1 *)((int)piVar3 + 0xf) = 0xc0;
  *puVar2 = 0;
  return piVar3;
}

