// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00521184();
extern undefined4 uRam00153818;
extern undefined4 uRam0015381c;

// USA 0015379C <- EU 001537A0 (Ghidra, non-matching)
// GLOBAL UNK_00153818 undefined4
// GLOBAL UNK_0015381c undefined4

void func_0015379C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  func_004FABDC(param_1,3,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x8ec) = uRam00153818;
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x908));
  *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) =
       *(uint *)(*(int *)(param_1 + 0x424) + 0x2c) & 0xfffdffff;
  *(undefined4 *)(param_1 + 0x8fc) = 0;
  iVar2 = func_00521184(param_1);
  uVar1 = uRam0015381c;
  *(uint *)(param_1 + 1000) = (iVar2 + 0xc0000000U & 0xc0000000) + 0xe0000000;
  *(undefined4 *)(param_1 + 0x900) = 0x1e;
  *(undefined4 *)(param_1 + 0x8f0) = uVar1;
  return;
}

