#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00231524(int param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0046cb94;
extern int DAT_0046cb98;
extern undefined4 DAT_0046cb9c;
extern int DAT_0046cba8;
extern char s_Valid_0046cba0[];

// USA 0046CAF8 <- EU 0046CAD0 (Ghidra, non-matching)
// GLOBAL DAT_0046cb94 int
// GLOBAL DAT_0046cb98 int
// GLOBAL DAT_0046cb9c undefined4
// GLOBAL DAT_0046cba8 int
// GLOBAL s_Valid_0046cba0 string

int * func_0046CAF8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar3 = func_004B9A10(param_1,0);
  iVar1 = DAT_0046cb94;
  iVar4 = DAT_0046cb94 + -0x54;
  piVar3[0xe] = DAT_0046cb94;
  *piVar3 = iVar4;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  iVar4 = DAT_0046cb98;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar4;
  uVar2 = DAT_0046cb9c;
  piVar3[0x1f] = 0;
  *(undefined1 *)(piVar3 + 0x20) = 0;
  (**(code **)(iVar1 + -0x1c))(piVar3,uVar2,0);
  piVar5 = (int *)piVar3[7];
  func_0016773C((int)piVar5,1);
  local_14 = s_Valid_0046cba0;
  local_18 = DAT_0046cba8;
  func_00166C20(piVar5,0,&local_18,0);
  piVar3[0x1f] = (int)piVar5;
  *(undefined2 *)((int)piVar3 + 0x76) = 0;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  func_00231524((int)(piVar3 + 0x1d));
  *(undefined1 *)((int)piVar3 + 0xf) = 0x40;
  func_004B9958((int)piVar3,4);
  return piVar3;
}

