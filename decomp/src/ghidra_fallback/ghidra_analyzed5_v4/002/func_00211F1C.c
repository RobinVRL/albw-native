#include "ghidra_types.h"

extern int func_00521078(int param_1);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);

// USA 00211F1C <- EU 00211F1C (Ghidra, non-matching)

void func_00211F1C(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00521078(param_1);
  if (bVar1) {
    func_0065D774((undefined4 *)(param_1 + 0x8bc),10);
  }
  return;
}

