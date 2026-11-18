#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108B98(void);
extern int func_00108DF8(void);
extern int func_00109240(undefined4 param_1);
extern int func_0010A98C(uint param_1);
extern uint *DAT_00108fac;
extern uint DAT_00108fb0;
extern uint *DAT_00108fb4;
extern uint *DAT_00108fb8;

// USA 00108F28 <- EU 00108F28 (Ghidra, non-matching)
// GLOBAL DAT_00108fac uint *
// GLOBAL DAT_00108fb0 uint
// GLOBAL DAT_00108fb4 uint *
// GLOBAL DAT_00108fb8 uint *

undefined4 func_00108F28(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  func_00108DF8();
  uVar1 = func_00108B98();
  uVar2 = func_00109240(uVar1);
  if ((int)uVar2 < 0) {
    func_0010873C(uVar2,0x108f40);
  }
  uVar3 = *DAT_00108fac;
  uVar2 = DAT_00108fb0;
  if (uVar3 != 0) {
    software_interrupt(0x23);
    *DAT_00108fac = *DAT_00108fb4;
    uVar2 = uVar3;
  }
  if ((int)uVar2 < 0) {
    func_0010873C(uVar2,0x108f7c);
  }
  uVar2 = *DAT_00108fb8;
  if ((uVar2 != 0) && (software_interrupt(0x14), (int)uVar2 < 0)) {
    return func_0010A98C(uVar2);
  }
  return 0;
}

