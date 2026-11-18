#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004747B8(undefined4 *param_1);
extern int DAT_00454b10;
extern undefined4 DAT_00454b14;
extern undefined DAT_00454b18;
extern int DAT_00454b1c;
extern undefined DAT_00454b20;
extern int *DAT_00454b24;

// USA 00454A60 <- EU 00454A38 (Ghidra, non-matching)
// GLOBAL DAT_00454b10 int
// GLOBAL DAT_00454b14 undefined4
// GLOBAL DAT_00454b18 undefined
// GLOBAL DAT_00454b1c int
// GLOBAL DAT_00454b20 undefined
// GLOBAL DAT_00454b24 int *

int * func_00454A60(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar2 = (int *)func_004747B8(param_1);
  iVar1 = DAT_00454b10;
  iVar3 = DAT_00454b10 + -0x58;
  piVar2[0xe] = DAT_00454b10;
  *piVar2 = iVar3;
  (**(code **)(iVar1 + -0x20))(piVar2,DAT_00454b14,0);
  piVar4 = (int *)piVar2[7];
  func_0016773C((int)piVar4,2);
  iVar1 = DAT_00454b1c;
  local_1c = &DAT_00454b18;
  local_20 = DAT_00454b1c;
  func_00166C20(piVar4,0,&local_20,0);
  local_1c = &DAT_00454b20;
  local_20 = iVar1;
  func_00166C20(piVar4,1,&local_20,0);
  piVar2[10] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  piVar4 = DAT_00454b24;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x20] = *piVar4;
  piVar2[0x21] = piVar4[1];
  *(undefined1 *)(piVar2 + 0x23) = 1;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x4d;
  return piVar2;
}

