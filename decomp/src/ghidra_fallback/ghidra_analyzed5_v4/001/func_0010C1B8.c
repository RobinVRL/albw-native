#include "ghidra_types.h"

extern int func_0010D0EC(void);
extern undefined4 *DAT_0010c20c;

// USA 0010C1B8 <- EU 0010C1B8 (Ghidra, non-matching)
// GLOBAL DAT_0010c20c undefined4 *

undefined4 func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)*DAT_0010c20c;
  if (pcVar1 != (code *)0x0) {
    *DAT_0010c20c = 0;
    (*pcVar1)(0,0,0,0,0,param_3);
  }
  return func_0010D0EC();
}

