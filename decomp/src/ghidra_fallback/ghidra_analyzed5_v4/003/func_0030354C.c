#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_004EAB38(int param_1,int param_2);
extern int func_00581D60(int param_1);
extern int *DAT_003035a4;
extern int DAT_003035a8;
extern int *DAT_003035ac;

// USA 0030354C <- EU 00303528 (Ghidra, non-matching)
// GLOBAL DAT_003035a4 int *
// GLOBAL DAT_003035a8 int
// GLOBAL DAT_003035ac int *

void func_0030354C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x498) == 0xf) {
    func_004EAB38(*DAT_003035a4,0);
  }
  if (*(int *)(param_1 + 0x498) == 0x7d) {
    func_00165E28(*(int *)(param_1 + 0x4cc),*(undefined2 *)(DAT_003035a8 + 0x2a));
  }
  iVar1 = func_00581D60(*DAT_003035ac);
  if (*(int *)(param_1 + 0x4e4) != iVar1) {
    if (*(uint *)(param_1 + 0x4d8) < *(uint *)(param_1 + 0x4dc)) {
      *(uint *)(param_1 + 0x4d8) = *(uint *)(param_1 + 0x4d8) + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return;
}

