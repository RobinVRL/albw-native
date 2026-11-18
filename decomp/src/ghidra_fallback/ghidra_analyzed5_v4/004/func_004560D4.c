#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_002C00A8(int param_1);

// USA 004560D4 <- EU 004560AC (Ghidra, non-matching)

undefined4 func_004560D4(int param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  
  func_00231448(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x3a) = 4;
  *(undefined2 *)(param_1 + 0x38) = 0;
  func_002313DC(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x9c);
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
  return func_002C00A8(*(int *)(param_1 + 0x14));
}

