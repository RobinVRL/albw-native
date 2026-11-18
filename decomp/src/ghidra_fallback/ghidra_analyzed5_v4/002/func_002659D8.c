// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00521184();
extern undefined4 uRam00265a78;
extern undefined4 uRam00265a7c;

// USA 002659D8 <- EU 00265A00 (Ghidra, non-matching)
// GLOBAL UNK_00265a78 undefined4
// GLOBAL UNK_00265a7c undefined4

void func_002659D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  func_004FABDC(param_1,3,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x8fc) = uRam00265a78;
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x914));
  *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) & 0xfffdffff;
  *(undefined1 *)(param_1 + 0x90c) = 0;
  iVar2 = func_00521184(param_1);
  uVar1 = uRam00265a7c;
  *(uint *)(param_1 + 1000) = (iVar2 + 0xc0000000U & 0xc0000000) + 0xe0000000;
  *(undefined1 *)(param_1 + 0x90d) = 0x1e;
  *(undefined4 *)(param_1 + 0x900) = uVar1;
  return;
}

