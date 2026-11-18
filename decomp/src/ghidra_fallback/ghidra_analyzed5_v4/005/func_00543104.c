#include "ghidra_types.h"


// USA 00543104 <- EU 005430DC (Ghidra, non-matching)

bool func_00543104(int param_1)

{
  byte bVar1;
  ushort uVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x8bc) + 8);
  uVar2 = 0xc;
  if (bVar1 != 0x18) {
    if (bVar1 < 0x19) {
      if (bVar1 == 0xc) {
        uVar2 = 4;
      }
      else if (bVar1 == 0x10 || bVar1 == 0x14) {
        uVar2 = 6;
      }
      goto LAB_00543138;
    }
    if (bVar1 != 0x1c) {
      if (bVar1 == 0x20 || bVar1 == 0x24) {
        uVar2 = 10;
      }
      goto LAB_00543138;
    }
  }
  uVar2 = 8;
LAB_00543138:
  return (*(ushort *)(param_1 + 0x508) & 0xff) <= uVar2;
}

