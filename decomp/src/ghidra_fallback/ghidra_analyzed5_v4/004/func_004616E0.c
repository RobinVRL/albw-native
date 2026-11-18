#include "ghidra_types.h"

extern int func_00232468(int param_1);
extern int func_002C00A8(int param_1);

// USA 004616E0 <- EU 004616B8 (Ghidra, non-matching)

void func_004616E0(int param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  func_00232468(param_1);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x94);
    *(int *)(iVar1 + 4) = iVar4;
    uVar3 = *(ushort *)(iVar1 + 0x16);
    if (iVar4 == 0) {
      uVar3 = uVar3 & 0xffbf;
    }
    else {
      uVar3 = uVar3 | 0x40;
    }
    *(ushort *)(iVar1 + 0x16) = uVar3;
    func_002C00A8(*(int *)(param_1 + 0x14));
    puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
    *puVar2 = *puVar2 & 0xfffd;
  }
  return;
}

