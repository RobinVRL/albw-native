#include "ghidra_types.h"

extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern undefined4 DAT_003ba3b0;

// USA 003BA354 <- EU 003BA330 (Ghidra, non-matching)
// GLOBAL DAT_003ba3b0 undefined4

undefined4 func_003BA354(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_003ba3b0;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0xb42) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0x48) + 0xaf4) = 2;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 1;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 0xa2c) = uVar1;
  *(undefined4 *)(iVar2 + 0xa30) = uVar1;
  *(undefined4 *)(iVar2 + 0xa34) = uVar1;
  iVar2 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(iVar2 + 0x3dc) = uVar1;
  *(undefined4 *)(iVar2 + 0x3e0) = uVar1;
  *(undefined4 *)(iVar2 + 0x3e4) = uVar1;
  return func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0,10,1);
}

