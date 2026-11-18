#include "ghidra_types.h"

extern int DAT_006005e8;

// USA 006005BC <- EU 00600594 (Ghidra, non-matching)
// GLOBAL DAT_006005e8 int

void func_006005BC(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_006005e8 + *(int *)(DAT_006005e8 + 0x124) * 4 + 0x128);
  if (iVar2 != 0) {
    if (param_1 == 0x600) {
      uVar1 = *(undefined4 *)(iVar2 + 4);
    }
    else if (param_1 == 0x601) {
      uVar1 = *(undefined4 *)(iVar2 + 8);
    }
    else if (param_1 == 0x602) {
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
    }
    else {
      if (param_1 != 0x603) {
        return;
      }
      uVar1 = *(undefined4 *)(iVar2 + 0x10);
    }
    *param_2 = uVar1;
  }
  return;
}

