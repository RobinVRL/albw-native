#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_004B964C(int param_1);
extern int *DAT_0014d1b8;
extern int *DAT_0014d1bc;

// USA 0014D134 <- EU 0014D134 (Ghidra, non-matching)
// GLOBAL DAT_0014d1b8 int *
// GLOBAL DAT_0014d1bc int *

void func_0014D134(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0012C718(*(int *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    func_004B964C(*(int *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(char *)(*DAT_0014d1b8 + 0x18) == '\a' || *(char *)(*DAT_0014d1b8 + 0x18) == '%') {
    iVar3 = *DAT_0014d1bc;
    iVar1 = *(int *)(iVar3 + 0x80);
    uVar2 = *(uint *)(iVar1 + 0x18);
    *(uint *)(iVar1 + 0x18) = uVar2 | 1;
    *(uint *)(*(int *)(iVar3 + 0x80) + 0x18) = uVar2 | 3;
  }
  return;
}

