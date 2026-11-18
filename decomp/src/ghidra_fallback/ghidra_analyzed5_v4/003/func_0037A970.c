#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_0037a9bc;

// USA 0037A970 <- EU 0037A94C (Ghidra, non-matching)
// GLOBAL DAT_0037a9bc int *

void func_0037A970(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = func_00588BF0(param_1,1);
  if (bVar2) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  else {
    bVar2 = func_00588BF0(param_1,0);
    if (bVar2) {
      uVar1 = *(ushort *)(param_1 + 0x2c);
      iVar3 = *DAT_0037a9bc;
      *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x18);
      *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x1c);
      *(uint *)(iVar3 + 0x2c) = (uint)uVar1 | *(uint *)(iVar3 + 0x20) & 0xffff0000;
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return;
}

