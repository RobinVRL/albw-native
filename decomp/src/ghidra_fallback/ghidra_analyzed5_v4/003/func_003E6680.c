#include "ghidra_types.h"


// USA 003E6680 <- EU 003E6660 (Ghidra, non-matching)

uint func_003E6680(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 4) == -0x101) {
    if (param_2 == 0) {
      if (*(short *)(param_1 + 0x10) == 0) {
        return 0;
      }
      uVar2 = (uint)*(ushort *)(param_1 + 6) + param_1;
    }
    else {
      uVar2 = *(int *)(param_2 + 4) + param_2;
    }
    if (uVar2 < (uint)(param_1 + *(int *)(param_1 + 0xc))) {
      return uVar2;
    }
  }
  else {
    if (param_2 == 0) {
      if (*(short *)(param_1 + 0x10) == 0) {
        return 0;
      }
      uVar2 = param_1 + ((uint)(*(ushort *)(param_1 + 6) >> 8) |
                        (*(ushort *)(param_1 + 6) & 0xff) << 8);
    }
    else {
      uVar2 = *(uint *)(param_2 + 4);
      uVar2 = (uVar2 << 0x18 | ((uVar2 << 0x10) >> 0x18) << 0x10 | ((uVar2 << 8) >> 0x18) << 8 |
              uVar2 >> 0x18) + param_2;
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar2 < param_1 + (uVar1 << 0x18 | ((uVar1 << 0x10) >> 0x18) << 0x10 |
                           ((uVar1 << 8) >> 0x18) << 8 | uVar1 >> 0x18)) {
      return uVar2;
    }
  }
  return 0;
}

