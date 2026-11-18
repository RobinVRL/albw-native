#include "ghidra_types.h"

extern uint DAT_003e31ac;
extern uint DAT_003e31b0;
extern uint DAT_003e31b4;
extern uint DAT_003e31b8;
extern uint DAT_003e31bc;
extern uint DAT_003e31c0;

// USA 003E30DC <- EU 003E30BC (Ghidra, non-matching)
// GLOBAL DAT_003e31ac uint
// GLOBAL DAT_003e31b0 uint
// GLOBAL DAT_003e31b4 uint
// GLOBAL DAT_003e31b8 uint
// GLOBAL DAT_003e31bc uint
// GLOBAL DAT_003e31c0 uint

uint func_003E30DC(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 4) {
    uVar1 = 3;
  }
  else {
    uVar1 = param_1 | 1;
    if (0x13 < param_1) {
      uVar3 = 0;
      do {
        uVar2 = param_1 + uVar3;
        if (((((uVar2 & 1) != 0) &&
             ((uint)((ulonglong)uVar2 * (ulonglong)DAT_003e31ac >> 0x21) * -3 + uVar2 != 0)) &&
            ((uint)((ulonglong)uVar2 * (ulonglong)DAT_003e31b0 >> 0x22) * -5 + uVar2 != 0)) &&
           ((((uint)((ulonglong)DAT_003e31b4 * (ulonglong)uVar2 + (ulonglong)DAT_003e31b4 >> 0x21) *
              -7 + uVar2 != 0 &&
             ((uint)((ulonglong)uVar2 * (ulonglong)DAT_003e31b8 >> 0x23) * -0xb + uVar2 != 0)) &&
            (((uint)((ulonglong)uVar2 * (ulonglong)DAT_003e31bc >> 0x22) * -0xd + uVar2 != 0 &&
             ((uint)((ulonglong)uVar2 * (ulonglong)DAT_003e31c0 >> 0x24) * -0x11 + uVar2 != 0))))))
        {
          return uVar2;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 100);
    }
  }
  return uVar1;
}

