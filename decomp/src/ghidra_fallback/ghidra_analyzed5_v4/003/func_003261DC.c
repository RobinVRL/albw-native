#include "ghidra_types.h"

extern int func_00324A30(undefined4 *param_1,uint *param_2);
extern int DAT_003262b4;
extern int DAT_003262b8;
extern int DAT_003262bc;
extern int DAT_003262c0;
extern int DAT_003262c4;
extern int DAT_003262c8;
extern int DAT_003262cc;
extern int *DAT_003262d0;
extern int DAT_003262d4;

// USA 003261DC <- EU 003261B8 (Ghidra, non-matching)
// GLOBAL DAT_003262b4 int
// GLOBAL DAT_003262b8 int
// GLOBAL DAT_003262bc int
// GLOBAL DAT_003262c0 int
// GLOBAL DAT_003262c4 int
// GLOBAL DAT_003262c8 int
// GLOBAL DAT_003262cc int
// GLOBAL DAT_003262d0 int *
// GLOBAL DAT_003262d4 int

int * func_003261DC(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)func_00324A30(param_1,param_2);
  iVar1 = DAT_003262b4;
  piVar3[200] = DAT_003262b4 + 0x90;
  *piVar3 = iVar1;
  iVar1 = DAT_003262b8;
  piVar3[0x11e] = piVar3[0xf4];
  piVar3[0x11f] = piVar3[0xf5];
  piVar3[0x120] = piVar3[0xf6];
  piVar3[0x121] = piVar3[0xf4];
  piVar3[0x122] = piVar3[0xf5];
  piVar3[0x123] = piVar3[0xf6];
  *(undefined1 *)(piVar3 + 0x124) = 0xff;
  piVar3[0x125] = 0;
  iVar4 = DAT_003262bc;
  piVar3[0x126] = 0;
  piVar3[0x127] = iVar1;
  piVar3[0x128] = iVar4;
  piVar3[0x129] = iVar1;
  iVar5 = DAT_003262c4;
  piVar3[0x12a] = DAT_003262c0;
  piVar3[299] = iVar4;
  piVar3[300] = iVar5;
  piVar3[0x12d] = 0x20000000;
  piVar3[0x12e] = 0x1e;
  piVar3[0x12f] = iVar1;
  piVar3[0x130] = iVar1;
  iVar1 = DAT_003262cc;
  piVar3[0x131] = DAT_003262c8;
  piVar3[0x132] = iVar1;
  piVar2 = DAT_003262d0;
  *(undefined1 *)(piVar3 + 0x133) = 0;
  *(undefined1 *)((int)piVar3 + 0x4cd) = 0;
  piVar3[0x134] = 0;
  iVar4 = *piVar2;
  iVar5 = piVar2[1];
  piVar3[0x136] = (int)piVar3;
  iVar1 = DAT_003262d4;
  piVar3[0x137] = iVar4;
  piVar3[0x138] = iVar5;
  piVar3[0x135] = iVar1;
  piVar3[0x139] = 0xf;
  *(undefined1 *)(piVar3 + 0x13a) = 1;
  *(undefined1 *)((int)piVar3 + 0x4e9) = 1;
  *(undefined1 *)((int)piVar3 + 0x4ea) = 1;
  *(undefined1 *)((int)piVar3 + 0x4eb) = 0;
  *(undefined1 *)(piVar3 + 0x13b) = 0;
  *(undefined1 *)((int)piVar3 + 0x4ed) = 0;
  return piVar3;
}

