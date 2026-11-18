#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002112c0;

// USA 0021127C <- EU 0021127C (Ghidra, non-matching)
// GLOBAL DAT_002112c0 int *

void func_0021127C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0052FBA0(*DAT_002112c0 + 0x3dbbc,*(uint *)(param_1 + 0x960));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x960) = 0;
    func_0065D774((undefined4 *)(param_1 + 0x8bc),10);
  }
  return;
}

