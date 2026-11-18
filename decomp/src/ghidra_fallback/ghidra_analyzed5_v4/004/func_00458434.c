#include "ghidra_types.h"

extern int func_00532C78(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);

// USA 00458434 <- EU 00458410 (Ghidra, function missing from the decomp table)

void func_00458434(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00532C78(param_1 + 0x14c);
  if (!bVar1) {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\0');
  }
  return;
}

