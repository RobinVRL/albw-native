#include "ghidra_types.h"

extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FC178();
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00675fb0;

// USA 00675F2C <- EU 00675F04 (Ghidra, non-matching)
// GLOBAL DAT_00675fb0 undefined4

void func_00675F2C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  func_004F9554(*(int *)(iVar2 + 0x430),0,0,1);
  func_004F9554(*(int *)(iVar2 + 0x434),0,0,1);
  *(undefined4 *)(iVar2 + 0x464) = *(undefined4 *)(iVar2 + 0xa74);
  *(undefined4 *)(iVar2 + 0x468) = *(undefined4 *)(iVar2 + 0xa78);
  *(undefined4 *)(iVar2 + 0x46c) = *(undefined4 *)(iVar2 + 0xa7c);
  *(undefined4 *)(iVar2 + 0x44c) = *(undefined4 *)(iVar2 + 0xa74);
  *(undefined4 *)(iVar2 + 0x450) = *(undefined4 *)(iVar2 + 0xa78);
  *(undefined4 *)(iVar2 + 0x454) = *(undefined4 *)(iVar2 + 0xa7c);
  *(undefined4 *)(iVar2 + 0x470) = *(undefined4 *)(iVar2 + 0xa80);
  *(undefined4 *)(iVar2 + 0x474) = *(undefined4 *)(iVar2 + 0xa84);
  *(undefined4 *)(iVar2 + 0x478) = *(undefined4 *)(iVar2 + 0xa88);
  func_004FC178(iVar2);
  uVar1 = DAT_00675fb0;
  *(undefined4 *)(iVar2 + 0x3dc) = DAT_00675fb0;
  *(undefined4 *)(iVar2 + 0x3e0) = uVar1;
  *(undefined4 *)(iVar2 + 0x3e4) = uVar1;
  func_0065D9FC((undefined4 *)(iVar2 + 0x8bc),3);
  *(undefined1 *)(iVar2 + 0xb3d) = 0;
  return;
}

