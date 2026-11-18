#include "ghidra_types.h"

extern int func_004A3700(int param_1);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_00667C8C(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_00385378;

// USA 003852EC <- EU 003852C8 (Ghidra, non-matching)
// GLOBAL DAT_00385378 undefined4 *

undefined4 func_003852EC(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  func_00667C8C((undefined4 *)(param_1 + 0x10),0);
  iVar2 = *(int *)(param_1 + 0x1bc);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x1c0))) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x1c4);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x1c8))) {
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xffffffbb | 8;
    func_004A3700(iVar2);
  }
  puVar1 = DAT_00385378;
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
    return func_004A9120(*puVar1,param_1 + 0xb4);
  }
  return 0;
}

