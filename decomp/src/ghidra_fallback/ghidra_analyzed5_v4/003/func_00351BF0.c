#include "ghidra_types.h"

extern int func_00394E3C(int param_1);
extern int func_00394E58(undefined4 *param_1,undefined4 *param_2);
extern int DAT_00351c54;

// USA 00351BF0 <- EU 00351BCC (Ghidra, non-matching)
// GLOBAL DAT_00351c54 int

void func_00351BF0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x184);
  puVar3 = (undefined4 *)(DAT_00351c54 + param_2 * 0x10);
  uVar2 = (uint)(*(char *)((int)puVar3 + 0xd) == '\0');
  if ((((uint)*(byte *)(iVar1 + 0x10) & 1 << uVar2) == 0) ||
     (*(byte *)(iVar1 + uVar2 * 0x18 + 0x20) <= *(byte *)(puVar3 + 3))) {
    puVar4 = (undefined4 *)(iVar1 + 0x14 + uVar2 * 0x18);
    func_00394E3C((int)puVar4);
    func_00394E58(puVar4,puVar3);
    *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) | (byte)(1 << uVar2);
  }
  return;
}

