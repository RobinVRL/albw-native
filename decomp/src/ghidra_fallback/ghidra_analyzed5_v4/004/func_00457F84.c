#include "ghidra_types.h"

extern int func_004C3798(int param_1,int param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_00457f94;

// GLOBAL DAT_00457f94 int *
// USA 00457F84 <- EU 00457F60 (Ghidra, function missing from the decomp table)

void func_00457F84(int param_1)

{
  int iVar1;
  
  iVar1 = func_004C3798(*DAT_00457f94,*(int *)(param_1 + 0x230),*(int *)(param_1 + 0x214));
  if (iVar1 != 0) {
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\x1a');
  }
  return;
}

