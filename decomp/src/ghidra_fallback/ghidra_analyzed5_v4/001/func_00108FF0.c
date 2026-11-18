// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108B98(void);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010B240(undefined4 param_1);

// USA 00108FF0 <- EU 00108FF0 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_00108FF0(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  func_00108DF8();
  uVar1 = func_00108B98();
  uVar2 = func_0010B240(uVar1);
  if ((int)uVar2 < 0) {
    func_0010873C(uVar2,0x109008);
  }
  return func_00108F4C();
}

