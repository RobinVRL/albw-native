#include "ghidra_types.h"

extern int func_005593EC(int param_1);
extern int func_005594B8(int param_1);

// USA 0053F22C <- EU 0053F204 (Ghidra, non-matching)

bool func_0053F22C(int param_1)

{
  short sVar1;
  bool bVar2;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (sVar1 == 0x50 || sVar1 == 0x52) {
    bVar2 = func_005593EC(*(int *)(param_1 + 0x48));
    return bVar2;
  }
  if (sVar1 == 0x75 || sVar1 == 0x77) {
    bVar2 = func_005594B8(*(int *)(param_1 + 0x48));
    return bVar2;
  }
  return false;
}

