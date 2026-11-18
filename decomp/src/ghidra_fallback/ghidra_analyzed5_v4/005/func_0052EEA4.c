#include "ghidra_types.h"


// USA 0052EEA4 <- EU 0052EE7C (Ghidra, non-matching)

bool func_0052EEA4(int param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1 + 0x599);
  bVar2 = 0xc;
  if (bVar1 != 0x18) {
    if (bVar1 < 0x19) {
      if (bVar1 == 0xc) {
        bVar2 = 4;
      }
      else if (bVar1 == 0x10 || bVar1 == 0x14) {
        bVar2 = 6;
      }
      goto LAB_0052eecc;
    }
    if (bVar1 != 0x1c) {
      if (bVar1 == 0x20 || bVar1 == 0x24) {
        bVar2 = 10;
      }
      goto LAB_0052eecc;
    }
  }
  bVar2 = 8;
LAB_0052eecc:
  return *(byte *)(param_1 + 0x598) <= bVar2;
}

