#include "ghidra_types.h"

extern int func_001B6D8C(int param_1);
extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004460EC(int param_1);
extern int func_00446668(int param_1);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_00449FD0(int param_1,int *param_2);
extern int func_004B96A0(int param_1,int param_2);
extern int func_0051BAA0(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0044b5f8;
extern float DAT_0044b5fc;
extern int *DAT_0044b600;

// USA 0044B400 <- EU 0044B3D8 (Ghidra, non-matching)
// GLOBAL DAT_0044b5f8 undefined4
// GLOBAL DAT_0044b5fc float
// GLOBAL DAT_0044b600 int *

undefined4 func_0044B400(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x244) != '\0') {
    func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
    func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
    *(undefined1 *)(param_1 + 0x294) = 1;
    *(undefined1 *)(param_1 + 0x244) = 0;
    func_00446668(param_1);
    func_00449FD0(param_1,(int *)0x0);
  }
  uVar4 = DAT_0044b5f8;
  cVar1 = *(char *)(param_1 + 0x15c);
  if (cVar1 == '\x04' || cVar1 == '\x05') {
    *(undefined2 *)(param_1 + 200) = 2;
    func_002317C0((undefined2 *)(param_1 + 200),DAT_0044b5fc);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x250);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x260) = uVar4;
    func_0066CC58((undefined4 *)(param_1 + 0x158),6);
  }
  else if (cVar1 == '\a') {
    func_00231340((short *)(param_1 + 0xf8));
    *(undefined2 *)(param_1 + 200) = 0;
    func_00231340((short *)(param_1 + 200));
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x288);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_1 + 0x28c);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x250);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x254);
    *(undefined4 *)(param_1 + 0x260) = uVar4;
    if (*(char *)(param_1 + 0x290) == '\0') {
      func_0066CC58((undefined4 *)(param_1 + 0x158),0);
    }
    else {
      func_0066CC58((undefined4 *)(param_1 + 0x158),2);
    }
  }
  func_004B96A0(*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x230));
  func_001B6D8C(param_1);
  func_004460EC(param_1);
  piVar2 = *(int **)(param_1 + 0x20c);
  cVar1 = *(char *)((int)piVar2 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)piVar2 + 0xe);
  }
  if (!bVar3 || cVar1 != '\0') {
    (**(code **)(*piVar2 + 0x34))(piVar2);
    *(undefined1 *)((int)piVar2 + 0xe) = 0;
    *(undefined1 *)((int)piVar2 + 0xd) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x210);
  cVar1 = *(char *)((int)piVar2 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)piVar2 + 0xe);
  }
  if (!bVar3 || cVar1 != '\0') {
    (**(code **)(*piVar2 + 0x34))(piVar2);
    *(undefined1 *)((int)piVar2 + 0xe) = 0;
    *(undefined1 *)((int)piVar2 + 0xd) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x214);
  cVar1 = *(char *)((int)piVar2 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)((int)piVar2 + 0xe);
  }
  if (!bVar3 || cVar1 != '\0') {
    (**(code **)(*piVar2 + 0x34))(piVar2);
    *(undefined1 *)((int)piVar2 + 0xe) = 0;
    *(undefined1 *)((int)piVar2 + 0xd) = 0;
  }
  return func_0051BAA0(*DAT_0044b600);
}

