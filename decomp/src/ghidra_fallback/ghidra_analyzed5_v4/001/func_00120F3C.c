#include "ghidra_types.h"

extern int func_00588BE4(int param_1);
extern int func_0066A650(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00120fb4;
extern int *DAT_00120fb8;

// USA 00120F3C <- EU 00120F3C (Ghidra, non-matching)
// GLOBAL DAT_00120fb4 int *
// GLOBAL DAT_00120fb8 int *

void func_00120F3C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = func_00588BE4(param_1);
  if ((iVar1 == *DAT_00120fb4) || (iVar1 == *DAT_00120fb8)) {
    uVar2 = param_1 + 0x400;
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x4d8) != '\x02') {
        return;
      }
    }
    else {
      if (param_2 == 1) {
        uVar2 = (uint)*(byte *)(param_1 + 0x4d8);
      }
      if (param_2 != 1 || uVar2 != 2) {
        return;
      }
    }
    func_0066A650((undefined4 *)(param_1 + 0x4d4),3);
  }
  return;
}

