#include "ghidra_types.h"

extern int func_0028D7DC(int param_1);
extern int func_002914B0(int param_1);
extern int func_003459C8(int param_1);
extern int *DAT_001dd39c;

// USA 001DD34C <- EU 001DD34C (Ghidra, non-matching)
// GLOBAL DAT_001dd39c int *

undefined4 func_001DD34C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = func_003459C8(*(int *)(*DAT_001dd39c + 0x10));
  if (iVar2 != 0) {
    func_0028D7DC(*(int *)(iVar1 + 0x600) + 0x3c);
    func_0028D7DC(*(int *)(iVar1 + 0x600) + 0x5c);
  }
  return func_002914B0(*(int *)(iVar1 + 0x614));
}

