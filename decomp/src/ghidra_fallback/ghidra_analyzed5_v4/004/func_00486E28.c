#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_00486eac;
extern undefined4 DAT_00486eb0;
extern int DAT_00486ebc;
extern char s_InOut_00486eb4[];

// USA 00486E28 <- EU 00486E00 (Ghidra, non-matching)
// GLOBAL DAT_00486eac int
// GLOBAL DAT_00486eb0 undefined4
// GLOBAL DAT_00486ebc int
// GLOBAL s_InOut_00486eb4 string

int * func_00486E28(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar2 = func_004B9A10(param_1,3);
  iVar1 = DAT_00486eac;
  iVar3 = DAT_00486eac + -0x54;
  piVar2[0xe] = DAT_00486eac;
  *piVar2 = iVar3;
  (**(code **)(iVar1 + -0x1c))(piVar2,DAT_00486eb0,0);
  piVar4 = (int *)piVar2[7];
  func_0016773C((int)piVar4,1);
  local_14 = s_InOut_00486eb4;
  local_18 = DAT_00486ebc;
  func_00166C20(piVar4,0,&local_18,0);
  piVar2[10] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x2e) = 0;
  *(undefined2 *)(piVar2 + 0xb) = 2;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x11;
  piVar2[6] = piVar2[6] | 0x40;
  return piVar2;
}

