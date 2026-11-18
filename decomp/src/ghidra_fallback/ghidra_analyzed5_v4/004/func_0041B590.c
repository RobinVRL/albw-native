#include "ghidra_types.h"

extern int func_00419534(int param_1);
extern undefined4 DAT_0041b644;
extern undefined4 DAT_0041b648;

// USA 0041B590 <- EU 0041B570 (Ghidra, non-matching)
// GLOBAL DAT_0041b644 undefined4
// GLOBAL DAT_0041b648 undefined4

void func_0041B590(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  func_00419534(param_1);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar1 = DAT_0041b644;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  uVar2 = DAT_0041b648;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0x78;
  *(undefined1 *)(param_1 + 0x75) = 0x30;
  *(undefined1 *)(param_1 + 0x78) = 0x7f;
  *(undefined1 *)(param_1 + 0x79) = 0x7f;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0x40;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  do {
    iVar5 = param_1 + iVar3 * 2;
    iVar3 = iVar3 + 2;
    *(undefined2 *)(iVar5 + 0xd0) = 0xffff;
    *(undefined2 *)(iVar5 + 0xd2) = 0xffff;
  } while (iVar3 < 0x10);
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar4 = iVar5 + 1;
    iVar3 = iVar3 + 2;
    *(undefined4 *)(param_1 + iVar5 * 4 + 0x90) = 0;
    iVar5 = iVar5 + 2;
    *(undefined4 *)(param_1 + iVar4 * 4 + 0x90) = 0;
  } while (iVar3 < 0x10);
  *(undefined1 *)(param_1 + 0x166) = 0;
  *(undefined1 *)(param_1 + 0x165) = 1;
  return;
}

