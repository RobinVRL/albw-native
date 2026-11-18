#include "ghidra_types.h"

extern undefined4 DAT_00400050;

// USA 0040001C <- EU 003FFFFC (Ghidra, non-matching)
// GLOBAL DAT_00400050 undefined4

undefined4 func_0040001C(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00400050;
  *param_1 = *(undefined4 *)(param_2 + 0xc0);
  param_1[1] = param_2 + 0x44;
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  param_1[2] = *(undefined4 *)(param_2 + 0xa4);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  *(byte *)(param_1 + 5) = *(byte *)(param_2 + 0xc4) & 1;
  *(char *)((int)param_1 + 0x15) = (char)((*(byte *)(param_2 + 0xc4) & 2) >> 1);
  *(char *)((int)param_1 + 0x16) = (char)((*(byte *)(param_2 + 0xc4) & 4) >> 2);
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  return (undefined4)param_1;
}

