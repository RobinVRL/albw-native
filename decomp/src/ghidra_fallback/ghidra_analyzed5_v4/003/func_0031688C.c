#include "ghidra_types.h"

extern int func_001507A8(int param_1,int param_2);

// USA 0031688C <- EU 00316868 (Ghidra, non-matching)

bool func_0031688C(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
  if ((*(ushort *)(param_2 + 0x20) & 0x1f) == 6) {
    if (uVar1 != 0xf && uVar1 != 0x18) {
      return false;
    }
  }
  else if ((uVar1 == 0x11 || uVar1 == 0x12) || uVar1 == 0x13) {
    return false;
  }
  if (*(int *)(param_1 + 0x47c) != 0) {
    uVar1 = (*(uint *)(param_2 + 0x20) & 0x7e0) >> 5;
    if (uVar1 == 0x11) {
      return false;
    }
    if (uVar1 < 0x12) {
      if ((uVar1 != 0) && ((uVar1 == 0xc || uVar1 == 0xe) || uVar1 == 0x10)) {
        return false;
      }
    }
    else if ((uVar1 == 0x12 || uVar1 == 0x13) || uVar1 == 0x14) {
      return false;
    }
  }
  bVar2 = func_001507A8(param_1,param_2);
  return bVar2;
}

