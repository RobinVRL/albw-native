#include "ghidra_types.h"

extern int func_00183A34(int param_1);
extern int DAT_00184b0c;
extern undefined4 DAT_00184b10;
extern int DAT_00184b14;
extern int DAT_00184b18;

// USA 00184A84 <- EU 00184A84 (Ghidra, non-matching)
// GLOBAL DAT_00184b0c int
// GLOBAL DAT_00184b10 undefined4
// GLOBAL DAT_00184b14 int
// GLOBAL DAT_00184b18 int

undefined4 func_00184A84(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[0x20d] = DAT_00184b0c;
  (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
  iVar1 = DAT_00184b14;
  *(undefined4 *)(*(int *)(param_1[0x1eb] + 0x14) + 0x10) = DAT_00184b10;
  iVar2 = param_1[0xfa];
  param_1[0x27a] = iVar2;
  param_1[0x274] = iVar2;
  param_1[0x275] = iVar2 + *(int *)(iVar1 + (uint)*(byte *)((int)param_1 + 0x9fb) * 4);
  iVar1 = DAT_00184b18;
  *(undefined1 *)(param_1 + 0x27e) = 0;
  param_1[0x279] = *(int *)(iVar1 + (uint)*(byte *)((int)param_1 + 0x9fb) * 4);
  *(undefined2 *)(param_1 + 0x27c) = 0;
  return func_00183A34((int)param_1);
}

