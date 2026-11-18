#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_004747B8(undefined4 *param_1);
extern int DAT_00481f54;
extern undefined4 DAT_00481f58;
extern undefined DAT_00481f5c;
extern int DAT_00481f60;
extern undefined DAT_00481f64;
extern undefined DAT_00481f68;

// USA 00481E90 <- EU 00481E68 (Ghidra, non-matching)
// GLOBAL DAT_00481f54 int
// GLOBAL DAT_00481f58 undefined4
// GLOBAL DAT_00481f5c undefined
// GLOBAL DAT_00481f60 int
// GLOBAL DAT_00481f64 undefined
// GLOBAL DAT_00481f68 undefined

int * func_00481E90(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  piVar2 = (int *)func_004747B8(param_1);
  iVar1 = DAT_00481f54;
  iVar3 = DAT_00481f54 + -0x58;
  piVar2[0xe] = DAT_00481f54;
  *piVar2 = iVar3;
  (**(code **)(iVar1 + -0x20))(piVar2,DAT_00481f58,0);
  piVar4 = (int *)piVar2[7];
  func_0016773C((int)piVar4,3);
  iVar1 = DAT_00481f60;
  local_1c = &DAT_00481f5c;
  local_20 = DAT_00481f60;
  func_00166C20(piVar4,0,&local_20,0);
  local_1c = &DAT_00481f64;
  local_20 = iVar1;
  func_00166C20(piVar4,1,&local_20,0);
  local_1c = &DAT_00481f68;
  local_20 = iVar1;
  func_00166C20(piVar4,2,&local_20,0);
  piVar2[10] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  piVar2[0x1f] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x76) = 2;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x4c;
  return piVar2;
}

