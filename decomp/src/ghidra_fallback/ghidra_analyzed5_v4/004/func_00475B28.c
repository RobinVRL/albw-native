#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_001B6E04(undefined4 *param_1);
extern int DAT_00475be4;
extern int DAT_00475be8;
extern undefined4 DAT_00475bec;
extern int DAT_00475bf0;
extern undefined4 DAT_00475bf4;
extern undefined4 DAT_00475bf8;

// USA 00475B28 <- EU 00475B00 (Ghidra, non-matching)
// GLOBAL DAT_00475be4 int
// GLOBAL DAT_00475be8 int
// GLOBAL DAT_00475bec undefined4
// GLOBAL DAT_00475bf0 int
// GLOBAL DAT_00475bf4 undefined4
// GLOBAL DAT_00475bf8 undefined4

int * func_00475B28(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  piVar3 = func_001B6E04(param_1);
  *piVar3 = DAT_00475be4;
  iVar1 = DAT_00475be8;
  *(undefined2 *)(piVar3 + 0xe) = 0;
  *(undefined2 *)((int)piVar3 + 0x3a) = 0xffff;
  iVar2 = DAT_00475bf0;
  local_1c = DAT_00475bec;
  piVar3[0xf] = iVar1;
  piVar3[0x10] = 0;
  local_20 = iVar2;
  (**(code **)(*piVar3 + 0x38))(piVar3,&local_20,0);
  piVar4 = (int *)piVar3[7];
  func_0016773C((int)piVar4,2);
  local_1c = DAT_00475bf4;
  local_20 = iVar2;
  func_00166C20(piVar4,0,&local_20,0);
  local_1c = DAT_00475bf8;
  local_20 = iVar2;
  func_00166C20(piVar4,1,&local_20,0);
  piVar3[10] = (int)piVar4;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar3 + 0x2e) = 0;
  *(undefined2 *)(piVar3 + 0xb) = 2;
  piVar3[0x10] = (int)piVar4;
  *(undefined2 *)((int)piVar3 + 0x3a) = 1;
  *(undefined2 *)(piVar3 + 0xe) = 0;
  return piVar3;
}

