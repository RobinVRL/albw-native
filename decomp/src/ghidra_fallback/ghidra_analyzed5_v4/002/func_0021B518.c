#include "ghidra_types.h"

extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int DAT_0021b630;
extern int DAT_0021b634;

// USA 0021B518 <- EU 0021B518 (Ghidra, non-matching)
// GLOBAL DAT_0021b630 int
// GLOBAL DAT_0021b634 int

undefined4 func_0021B518(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[0x4d4] = 0;
  param_1[0x4db] = 0;
  param_1[0x167] = param_1[0x167] & 0xffffffbfU | 0x33;
  func_004FC570(param_1);
  iVar1 = DAT_0021b630;
  param_1[0x167] = param_1[0x167] | 0x80;
  iVar2 = DAT_0021b634;
  param_1[0xf8] = iVar1;
  param_1[0x140] = iVar2;
  iVar1 = param_1[0x4de];
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x4df])) &&
     (((*(uint *)(iVar1 + 0x3c) & 4) != 0 || (*(uint *)(iVar1 + 0x3c) & 0x40) != 0 ||
      (((iVar2 = *(int *)(iVar1 + 0x20), iVar2 != 0 &&
        (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) && (0 < *(int *)(iVar2 + 4))))))) {
    iVar2 = *(int *)(iVar1 + 0x20);
    if (((iVar2 != 0) && (*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc))) &&
       (0 < *(int *)(iVar2 + 4))) {
      *(undefined1 *)(iVar2 + 0x280) = 1;
    }
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
  }
  *(undefined1 *)((int)param_1 + 0x1371) = 0;
  param_1[0x4cf] = param_1[0xf5];
  return func_004FC07C((int)param_1,0,0xffffffff,0);
}

