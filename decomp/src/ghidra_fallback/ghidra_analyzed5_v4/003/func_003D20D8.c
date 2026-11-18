#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 DAT_003d2114;

// USA 003D20D8 <- EU 003D20B4 (Ghidra, non-matching)
// GLOBAL DAT_003d2114 undefined4

void func_003D20D8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*(char *)(param_1 + 0x4c);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + -1;
      param_1[iVar2 * 3 + 0x1d] = 0;
      param_1[iVar2 * 3 + 0x1c] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  func_00110490(param_1,0x70);
  *(short *)param_1 = (short)DAT_003d2114;
  param_1[0x4d] = 0;
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  return;
}

