#include "ghidra_types.h"

extern int func_00663954(undefined4 *param_1,undefined1 param_2);

// USA 002CEF40 <- EU 002CEF1C (Ghidra, non-matching)

undefined4 func_002CEF40(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x40c);
  if (param_2 == 0) {
    return func_00663954(puVar1,9);
  }
  if (param_2 != 1) {
    if (param_2 == 2) {
      return func_00663954(puVar1,0xb);
    }
    if (param_2 == 3) {
      if (*(int *)(param_1 + 0x43c) == 0) {
        return func_00663954(puVar1,0);
      }
      func_00663954(puVar1,7);
    }
    return 0;
  }
  return func_00663954(puVar1,10);
}

