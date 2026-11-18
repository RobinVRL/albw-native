#include "ghidra_types.h"

extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int *DAT_002e1b8c;

// USA 002E1B68 <- EU 002E1B44 (Ghidra, non-matching)
// GLOBAL DAT_002e1b8c int *

undefined4 func_002E1B68(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_r12;
  
  if (*(int *)(param_1 + 0xac) != 0) {
    iVar2 = *DAT_002e1b8c;
    if (iVar2 != 0) {
      in_r12 = *(int *)(iVar2 + 0x18);
    }
    if (iVar2 != 0 && in_r12 != 0) {
      uVar1 = func_001212EC(in_r12,(int *)(param_1 + 0xac),(uint)*(ushort *)(param_1 + 0xb2),0);
      return uVar1;
    }
  }
  return 0;
}

