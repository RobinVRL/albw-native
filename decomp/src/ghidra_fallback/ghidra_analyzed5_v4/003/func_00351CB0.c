#include "ghidra_types.h"

extern int func_00394E74(ushort *param_1);

// USA 00351CB0 <- EU 00351C8C (Ghidra, non-matching)

void func_00351CB0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = func_00394E74((ushort *)(param_1 + 0x14 + uVar2 * 0x18));
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & ~(byte)(1 << (uVar2 & 0xff));
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return;
}

