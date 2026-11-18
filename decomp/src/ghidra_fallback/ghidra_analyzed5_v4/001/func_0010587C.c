#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108B98(void);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_00109278(undefined4 param_1,undefined1 param_2);

// USA 0010587C <- EU 0010587C [EDITED REGION: check by hand] (Ghidra, non-matching)

undefined4 func_0010587C(undefined1 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  func_00108DF8();
  uVar1 = func_00108B98();
  uVar2 = func_00109278(uVar1,param_1);
  if ((int)uVar2 < 0) {
    func_0010873C(uVar2,0x10589c);
  }
  return func_00108F4C();
}

