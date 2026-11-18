#include "ghidra_types.h"

extern int func_00101354(undefined4 param_1,undefined4 param_2);
extern int func_001013D0(void);
extern int func_001013E4(void);
extern int func_001013F8(void);
extern int func_00106300(void);

// USA 00100D88 <- EU 00100D88 (Ghidra, non-matching)

undefined4 func_00100D88(undefined4 param_1,undefined4 param_2)

{
  func_00101354(param_1,param_2);
  func_001013F8();
  func_001013E4();
  func_001013D0();
  return func_00106300();
}

