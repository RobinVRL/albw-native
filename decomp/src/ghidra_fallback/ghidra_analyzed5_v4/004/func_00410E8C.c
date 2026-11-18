#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int func_00408B94(undefined4 *param_1);
extern int func_00413648(int param_1);
extern undefined4 DAT_00410ef0;
extern int *DAT_00410ef4;
extern undefined4 DAT_00410ef8;

// USA 00410E8C <- EU 00410E6C (Ghidra, non-matching)
// GLOBAL DAT_00410ef0 undefined4
// GLOBAL DAT_00410ef4 int *
// GLOBAL DAT_00410ef8 undefined4

int func_00410E8C(undefined4 *param_1,undefined1 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  
  puVar3 = func_00408B94(param_1);
  piVar1 = DAT_00410ef4;
  *puVar3 = DAT_00410ef0;
  puVar3[0x48] = 0;
  puVar3[0x49] = 0;
  puVar3[0x4a] = 0;
  puVar3[0x4b] = 0;
  puVar3[0x4c] = 0;
  iVar5 = *piVar1;
  puVar3[0x47] = iVar5;
  uVar2 = DAT_00410ef8;
  *(int *)((int)puVar3 + *(int *)(iVar5 + -0x30) + 0x11c) = piVar1[3];
  puVar3[0x4d] = uVar2;
  pvVar4 = func_00413648((int)(puVar3 + 0x4f));
  *(undefined4 *)((int)pvVar4 + 0x44) = 0;
  *(undefined4 *)((int)pvVar4 + 0x48) = 0;
  *(undefined4 *)((int)pvVar4 + 0x50) = 0xffffffff;
  *(undefined4 *)((int)pvVar4 + 0x4c) = 0;
  *(undefined1 *)((int)pvVar4 + 0x54) = 0;
  *(undefined1 *)((int)pvVar4 + 0x55) = param_2;
  func_0010DEB0((undefined4 *)((int)pvVar4 + 0x48));
  return (int)pvVar4 + -0x13c;
}

