#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0012E794(int param_1);
extern int func_001B6D40(int param_1);
extern int func_004B964C(int param_1);
extern int *DAT_0047f208;

// USA 0047F1CC <- EU 0047F1A4 (Ghidra, non-matching)
// GLOBAL DAT_0047f208 int *

undefined4 func_0047F1CC(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_0012C718(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c); iVar1 = iVar1 - iVar2,
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54); iVar1 = *(int *)(iVar1 + iVar2 + 4)) {
    func_0012C718(iVar1);
  }
  func_001B6D40(param_1);
  func_004B964C(param_1);
  return func_0012E794(*DAT_0047f208);
}

