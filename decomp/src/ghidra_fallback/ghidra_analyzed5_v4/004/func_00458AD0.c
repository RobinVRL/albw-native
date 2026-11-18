#include "ghidra_types.h"

extern int func_00532C2C(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);

// USA 00458AD0 <- EU 00458AAC (Ghidra, function missing from the decomp table)

void func_00458AD0(int param_1)

{
  int iVar1;
  
  iVar1 = func_00532C2C(param_1 + 0x14c);
  if (7 < iVar1) {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x02');
  }
  return;
}

