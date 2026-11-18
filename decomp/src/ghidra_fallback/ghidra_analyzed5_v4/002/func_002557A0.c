#include "ghidra_types.h"

extern int func_0052EB40(int param_1,int param_2);
extern int *DAT_00255860;

// USA 002557A0 <- EU 002557C8 (Ghidra, non-matching)
// GLOBAL DAT_00255860 int *

void func_002557A0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = DAT_00255860;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  *(char *)(param_1 + 8) = (char)param_2;
  if ((*piVar1 != 0) && (uVar3 = (uint)*(char *)(*piVar1 + 0x18), uVar3 < 0x40)) {
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)((int)param_1 + uVar3 + 0x10c);
    *(undefined1 *)((int)param_1 + 0x25) = *(undefined1 *)((int)param_1 + uVar3 + 0x14c);
  }
  if (param_2 == 0) {
    return;
  }
  param_1[1] = param_1[0x37];
  param_1[2] = param_1[0x38];
  param_1[3] = param_1[0x39];
  param_1[4] = param_1[0x3a];
  param_1[5] = param_1[0x3b];
  param_1[6] = param_1[0x1b];
  iVar2 = func_0052EB40(*param_1,0x11);
  *(char *)(param_1 + 7) = (char)iVar2;
  return;
}

