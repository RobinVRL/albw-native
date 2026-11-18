#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_0010A98C(uint param_1);
extern uint *DAT_00108fac;
extern uint DAT_00108fb0;
extern uint *DAT_00108fb4;
extern uint *DAT_00108fb8;

// USA 00108F4C <- EU 00108F4C (Ghidra, non-matching)
// GLOBAL DAT_00108fac uint *
// GLOBAL DAT_00108fb0 uint
// GLOBAL DAT_00108fb4 uint *
// GLOBAL DAT_00108fb8 uint *

undefined4 func_00108F4C(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = *DAT_00108fac;
  uVar2 = DAT_00108fb0;
  if (uVar1 != 0) {
    software_interrupt(0x23);
    *DAT_00108fac = *DAT_00108fb4;
    uVar2 = uVar1;
  }
  if ((int)uVar2 < 0) {
    func_0010873C(uVar2,0x108f7c);
  }
  uVar2 = *DAT_00108fb8;
  if ((uVar2 != 0) && (software_interrupt(0x14), (int)uVar2 < 0)) {
    uVar3 = func_0010A98C(uVar2);
    return uVar3;
  }
  return uVar2;
}

