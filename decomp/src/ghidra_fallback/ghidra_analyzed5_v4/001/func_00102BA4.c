#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern uint *DAT_00102be4;
extern uint DAT_00102be8;
extern uint *DAT_00102bec;

// USA 00102BA4 <- EU 00102BA4 (Ghidra, non-matching)
// GLOBAL DAT_00102be4 uint *
// GLOBAL DAT_00102be8 uint
// GLOBAL DAT_00102bec uint *

uint func_00102BA4(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *DAT_00102be4;
  uVar1 = DAT_00102be8;
  if (uVar2 != 0) {
    software_interrupt(0x23);
    *DAT_00102be4 = *DAT_00102bec;
    uVar1 = uVar2;
  }
  if ((int)uVar1 < 0) {
    func_0010873C(uVar1,0x102bd8);
  }
  return uVar1;
}

