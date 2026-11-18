#include "ghidra_types.h"

extern int func_00522828(int param_1,int param_2);
extern int *DAT_0057cb64;

// USA 0057CB54 <- EU 0057CB2C (Ghidra, non-matching)
// GLOBAL DAT_0057cb64 int *

ushort func_0057CB54(int param_1)

{
  ushort uVar1;
  bool bVar2;
  ushort uVar3;
  
  bVar2 = func_00522828(*DAT_0057cb64,param_1);
  if ((bVar2) ||
     (uVar1 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x16), uVar3 = uVar1 & 4, (uVar1 & 4) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}

