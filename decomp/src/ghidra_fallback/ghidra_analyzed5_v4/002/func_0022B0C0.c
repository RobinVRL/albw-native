#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_0022b170;
extern undefined4 *DAT_0022b174;
extern undefined4 DAT_0022b178;

// USA 0022B0C0 <- EU 0022B0C0 (Ghidra, non-matching)
// GLOBAL DAT_0022b170 undefined4
// GLOBAL DAT_0022b174 undefined4 *
// GLOBAL DAT_0022b178 undefined4

void func_0022B0C0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_0022b170;
  *(undefined4 *)(param_1 + 0xcf4) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  func_004FC07C(param_1,8,0,0);
  uVar2 = DAT_0022b178;
  if (*(char *)(param_1 + 0xd0a) == '\0') {
    *(undefined4 *)(param_1 + 0xa74) = 0x1e;
    *(undefined4 *)(param_1 + 0xa78) = uVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0xa74) = 0;
    *(undefined4 *)(param_1 + 0xa78) = uVar3;
  }
  *(undefined4 *)(param_1 + 0xa70) = 0;
  puVar1 = DAT_0022b174;
  *(undefined4 *)(param_1 + 0xcb8) = *DAT_0022b174;
  *(undefined4 *)(param_1 + 0xcbc) = puVar1[1];
  *(undefined4 *)(param_1 + 0xcc0) = puVar1[2];
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0xcb8);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xcbc);
  *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0xcc0);
  return;
}

