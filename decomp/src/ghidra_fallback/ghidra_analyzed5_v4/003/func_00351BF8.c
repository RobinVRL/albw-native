#include "ghidra_types.h"

extern int func_00394E3C(int param_1);
extern int func_00394E58(undefined4 *param_1,undefined4 *param_2);
extern int DAT_00351c54;

// USA 00351BF8 <- EU 00351BD4 (Ghidra, non-matching)
// GLOBAL DAT_00351c54 int

void func_00351BF8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(DAT_00351c54 + param_2 * 0x10);
  uVar1 = (uint)(*(char *)((int)puVar2 + 0xd) == '\0');
  if ((((uint)*(byte *)(param_1 + 0x10) & 1 << uVar1) == 0) ||
     (*(byte *)(param_1 + uVar1 * 0x18 + 0x20) <= *(byte *)(puVar2 + 3))) {
    puVar3 = (undefined4 *)(param_1 + 0x14 + uVar1 * 0x18);
    func_00394E3C((int)puVar3);
    func_00394E58(puVar3,puVar2);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | (byte)(1 << uVar1);
  }
  return;
}

