#include "ghidra_types.h"

extern int func_003C4AAC(uint *param_1,int param_2);
extern int func_003E300C(byte *param_1,uint param_2,uint param_3);

// USA 002E2940 <- EU 002E291C (Ghidra, non-matching)

void func_002E2940(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  func_003C4AAC(param_1,param_2);
  *(undefined2 *)(param_1 + 0xd) = 3;
  uVar2 = param_1[0xd];
  uVar1 = (*(byte *)(param_2 + 4) & 1) << 0x1d;
  param_1[0xd] = uVar1 | uVar2 & 0xdfffffff;
  uVar3 = (*(byte *)(param_2 + 3) & 1) << 0x1e;
  param_1[0xd] = uVar1 | uVar2 & 0x9fffffff | uVar3;
  param_1[0xd] = uVar1 | uVar2 & 0x1fffffff | uVar3 | (uint)*(byte *)(param_2 + 1) << 0x1f;
  uVar1 = func_003E300C((byte *)param_1,0x38,0xffffffff);
  param_1[0xe] = uVar1;
  return;
}

