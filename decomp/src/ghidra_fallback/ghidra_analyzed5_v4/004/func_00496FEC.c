#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001139F8(int param_1);

// USA 00496FEC <- EU 00496FC4 (Ghidra, non-matching)

void func_00496FEC(int param_1,int *param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined2 *)func_0010CEE0(0x22,param_2,4);
  piVar2 = (int *)(param_1 + 0x38f0);
  *piVar2 = (int)puVar1;
  *puVar1 = 0;
  *(undefined2 *)(*piVar2 + 2) = 1;
  *(undefined2 *)(*piVar2 + 4) = 2;
  *(undefined2 *)(*piVar2 + 6) = 3;
  *(undefined2 *)(*piVar2 + 8) = 0;
  *(undefined2 *)(*piVar2 + 10) = 7;
  *(undefined2 *)(*piVar2 + 0xc) = 6;
  *(undefined2 *)(*piVar2 + 0xe) = 1;
  *(undefined2 *)(*piVar2 + 0x10) = 2;
  *(undefined2 *)(*piVar2 + 0x12) = 5;
  *(undefined2 *)(*piVar2 + 0x14) = 6;
  *(undefined2 *)(*piVar2 + 0x16) = 7;
  *(undefined2 *)(*piVar2 + 0x18) = 4;
  *(undefined2 *)(*piVar2 + 0x1a) = 5;
  *(undefined2 *)(*piVar2 + 0x1c) = 4;
  *(undefined2 *)(*piVar2 + 0x1e) = 3;
  *(undefined2 *)(*piVar2 + 0x20) = 0;
  iVar3 = func_001139F8(*piVar2);
  *(int *)(param_1 + 0x38f4) = iVar3;
  *(undefined4 *)(param_1 + 0x38f8) = 0x11;
  *(undefined1 *)(param_1 + 0x38fc) = 0;
  return;
}

