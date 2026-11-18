#include "ghidra_types.h"

extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_00588F08(int param_1);
extern int *DAT_0020bacc;
extern undefined4 *DAT_0020bad0;
extern undefined4 DAT_0020bad4;
extern undefined4 DAT_0020bad8;

// USA 0020BA40 <- EU 0020BA40 (Ghidra, non-matching)
// GLOBAL DAT_0020bacc int *
// GLOBAL DAT_0020bad0 undefined4 *
// GLOBAL DAT_0020bad4 undefined4
// GLOBAL DAT_0020bad8 undefined4

void func_0020BA40(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)func_00588F08(*DAT_0020bacc);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_1 + 0xb8c) = puVar1[2];
  *(undefined4 *)(param_1 + 0xb84) = uVar2;
  *(undefined4 *)(param_1 + 0xb88) = uVar3;
  *(undefined4 *)(param_1 + 0xd6c) = 0;
  *(undefined4 *)(param_1 + 0xd70) = 0;
  *(undefined1 *)(param_1 + 0xb70) = 3;
  *(int *)(param_1 + 0xaa8) = param_1 + 0xd5c;
  func_0036BFD0(param_1 + 0xa7c,0xffffffff,0xffffffff);
  func_0036C2B8(param_1 + 0xa7c,*DAT_0020bad0);
  uVar2 = DAT_0020bad8;
  *(undefined4 *)(param_1 + 0x574) = DAT_0020bad4;
  *(undefined4 *)(param_1 + 0x3d4) = uVar2;
  return;
}

