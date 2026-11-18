#include "ghidra_types.h"

extern int func_0010B830(undefined4 *param_1);
extern int DAT_0010b7a0;

// USA 0010B6E0 <- EU 0010B6E0 (Ghidra, non-matching)
// GLOBAL DAT_0010b7a0 int

int * func_0010B6E0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[2] = 4;
  param_1[3] = 3;
  param_1[4] = 0x4000;
  iVar1 = DAT_0010b7a0;
  param_1[6] = 0;
  param_1[5] = 0x4000;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = iVar1;
  param_1[1] = iVar1 + 0x4c;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
  param_1[10] = -1;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 4;
  param_1[0xf] = 0x20000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x4000;
  param_1[0x12] = 0x2000;
  param_1[0x10] = 3;
  param_1[0x11] = 0x4000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined1 *)((int)param_1 + 0x4e) = 1;
  param_1[0x14] = -1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  param_1[0x19] = (int)(param_1 + 0x18);
  param_1[0x1a] = 0;
  param_1[0x18] = (int)(param_1 + 0x18);
  param_1[0x1b] = -1;
  puVar2 = func_0010B830(param_1 + 0x1c);
  puVar2[-1] = 4;
  return puVar2 + -0x1c;
}

