#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_00231524(int param_1);

// USA 002C0044 <- EU 002C0020 (Ghidra, non-matching)

void func_002C0044(int param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  func_00231448(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 4;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_00231524(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0xa0);
  *(int *)(iVar1 + 4) = iVar4;
  puVar2 = (ushort *)(iVar1 + 0x16);
  uVar3 = *puVar2;
  if (iVar4 == 0) {
    uVar3 = uVar3 & 0xffbf;
  }
  else {
    uVar3 = uVar3 | 0x40;
  }
  *puVar2 = uVar3;
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xff43;
  return;
}

