#include "ghidra_types.h"

extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065BA34(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001c2278;

// USA 001C221C <- EU 001C221C (Ghidra, non-matching)
// GLOBAL DAT_001c2278 int *

void func_001C221C(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  
  bVar1 = func_00588BF0(param_1,0);
  if ((bVar1) && (bVar1 = func_00588BF0(param_1,1), !bVar1)) {
    iVar2 = func_00588BE4(param_1);
    if (iVar2 == *DAT_001c2278) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    func_0065BA34((undefined4 *)(param_1 + 0x41c),uVar3);
  }
  return;
}

