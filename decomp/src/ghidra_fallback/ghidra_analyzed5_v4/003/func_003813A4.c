#include "ghidra_types.h"

extern int func_004F8254();
extern int DAT_003813c0;

// USA 003813A4 <- EU 00381380 (Ghidra, non-matching)
// GLOBAL DAT_003813c0 int

bool func_003813A4(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  
  if (0 < *(short *)(DAT_003813c0 + param_1)) {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0xaf8) <= *(uint *)(param_1 + 0xaf4)) {
      uVar2 = 0xe0;
    }
    *(undefined2 *)(*(int *)(param_1 + 0x430) + 0x28) = uVar2;
  }
  bVar1 = func_004F8254(param_1,param_2);
  return bVar1;
}

