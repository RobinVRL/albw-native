#include "ghidra_types.h"

extern int DAT_0049bb5c;

// USA 0049BB30 <- EU 0049BB08 (Ghidra, non-matching)
// GLOBAL DAT_0049bb5c int

void func_0049BB30(uint *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_0049bb5c;
  uVar3 = (param_2 ^ param_2 >> 0x1e) * DAT_0049bb5c + 1;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * DAT_0049bb5c + 2;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  iVar2 = DAT_0049bb5c;
  uVar3 = (uVar4 ^ uVar4 >> 0x1e) * iVar1 + 3;
  param_1[2] = uVar3;
  param_1[3] = (uVar3 ^ uVar3 >> 0x1e) * iVar2 + 4;
  return;
}

