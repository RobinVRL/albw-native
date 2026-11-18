#include "ghidra_types.h"

extern int func_002E1B70(int *param_1);
extern int DAT_004b7698;
extern undefined4 DAT_004b769c;
extern undefined4 DAT_004b76a0;
extern undefined4 DAT_004b76a4;
extern undefined4 DAT_004b76a8;

// USA 004B759C <- EU 004B7574 (Ghidra, non-matching)
// GLOBAL DAT_004b7698 int
// GLOBAL DAT_004b769c undefined4
// GLOBAL DAT_004b76a0 undefined4
// GLOBAL DAT_004b76a4 undefined4
// GLOBAL DAT_004b76a8 undefined4

void func_004B759C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 0x28))(*(int **)(param_1 + 0x20));
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x28))(*(int **)(param_1 + 0x24));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  **(undefined1 **)(param_1 + 0x6c) = 0;
  *(undefined4 *)(DAT_004b7698 + param_1) = 0;
  *(undefined4 *)(param_1 + 0x20c0) = 0;
  *(undefined4 *)(param_1 + 0x216c) = 0;
  func_002E1B70((int *)(param_1 + 0x2170));
  uVar1 = DAT_004b76a0;
  *(undefined4 *)(param_1 + 0x2188) = DAT_004b769c;
  *(undefined4 *)(param_1 + 0x218c) = uVar1;
  *(undefined4 *)(param_1 + 0x2190) = 0;
  *(undefined4 *)(param_1 + 0x21a4) = 0;
  *(undefined4 *)(param_1 + 0x21a8) = 0;
  uVar1 = DAT_004b76a4;
  *(undefined4 *)(param_1 + 0x21ac) = 0;
  *(undefined4 *)(param_1 + 0x21b0) = 0;
  *(undefined4 *)(param_1 + 0x21b4) = uVar1;
  *(undefined4 *)(param_1 + 0x21b8) = uVar1;
  *(undefined4 *)(param_1 + 0x21bc) = uVar1;
  *(undefined4 *)(param_1 + 0x21c0) = uVar1;
  *(undefined4 *)(param_1 + 0x21c4) = uVar1;
  *(undefined4 *)(param_1 + 0x21c8) = uVar1;
  *(undefined4 *)(param_1 + 0x21cc) = uVar1;
  *(undefined4 *)(param_1 + 0x21d0) = uVar1;
  *(undefined4 *)(param_1 + 0x21d4) = uVar1;
  *(undefined4 *)(param_1 + 0x21d8) = uVar1;
  *(undefined4 *)(param_1 + 0x21dc) = uVar1;
  *(undefined4 *)(param_1 + 0x21e0) = uVar1;
  *(undefined4 *)(param_1 + 0x21e4) = 0;
  *(undefined4 *)(param_1 + 0x21e8) = 0;
  uVar2 = DAT_004b76a8;
  *(undefined4 *)(param_1 + 0x21ec) = 0;
  *(undefined4 *)(param_1 + 0x21f0) = 0;
  *(undefined4 *)(param_1 + 0x21f4) = uVar2;
  *(undefined4 *)(param_1 + 0x21f8) = uVar1;
  *(undefined4 *)(param_1 + 0x21fc) = uVar2;
  *(undefined1 *)(param_1 + 0x2200) = 1;
  *(undefined1 *)(param_1 + 0x23c4) = 2;
  *(undefined4 *)(param_1 + 0x23d8) = 0;
  *(undefined4 *)(param_1 + 0x23dc) = 0;
  *(undefined4 *)(param_1 + 0x23e0) = 0;
  *(undefined4 *)(param_1 + 0x23e4) = 0;
  *(undefined1 *)(param_1 + 0x2400) = 2;
  *(undefined1 *)(param_1 + 0x2401) = 0;
  *(undefined4 *)(param_1 + 0x23d4) = 0;
  return;
}

