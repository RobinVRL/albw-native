#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_00438b60;
extern undefined4 DAT_00438b64;
extern undefined DAT_00438b68;
extern int DAT_00438b6c;
extern undefined DAT_00438b70;

// USA 00438AC0 <- EU 00438AA0 (Ghidra, non-matching)
// GLOBAL DAT_00438b60 int
// GLOBAL DAT_00438b64 undefined4
// GLOBAL DAT_00438b68 undefined
// GLOBAL DAT_00438b6c int
// GLOBAL DAT_00438b70 undefined

int * func_00438AC0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar2 = func_004B9A10(param_1,0);
  iVar1 = DAT_00438b60;
  iVar3 = DAT_00438b60 + -0x54;
  piVar2[0xe] = DAT_00438b60;
  *piVar2 = iVar3;
  (**(code **)(iVar1 + -0x1c))(piVar2,DAT_00438b64,0);
  piVar4 = (int *)piVar2[7];
  func_0016773C((int)piVar4,2);
  iVar1 = DAT_00438b6c;
  local_1c = &DAT_00438b68;
  local_20 = DAT_00438b6c;
  func_00166C20(piVar4,0,&local_20,0);
  local_1c = &DAT_00438b70;
  local_20 = iVar1;
  func_00166C20(piVar4,1,&local_20,0);
  piVar2[10] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x40;
  return piVar2;
}

