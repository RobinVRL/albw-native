#include "ghidra_types.h"

extern int func_003C4AAC(uint *param_1,int param_2);

// USA 00293C70 <- EU 00293C98 (Ghidra, non-matching)

void func_00293C70(uint *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  func_003C4AAC(param_1,param_2);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 6);
  uVar1 = *(ushort *)((int)param_1 + 0x36);
  uVar2 = (*(byte *)(param_2 + 4) & 1) << 0xc;
  *(ushort *)((int)param_1 + 0x36) = uVar2 | uVar1 & 0xefff;
  uVar4 = (*(byte *)(param_2 + 3) & 1) << 0xd;
  *(ushort *)((int)param_1 + 0x36) = uVar2 | uVar1 & 0xcfff | uVar4;
  uVar3 = (*(byte *)(param_2 + 5) & 1) << 0xe;
  *(ushort *)((int)param_1 + 0x36) = uVar2 | uVar1 & 0x8fff | uVar4 | uVar3;
  *(ushort *)((int)param_1 + 0x36) =
       uVar2 | uVar1 & 0xfff | uVar4 | uVar3 | (ushort)*(byte *)(param_2 + 1) << 0xf;
  return;
}

