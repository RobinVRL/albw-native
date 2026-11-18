#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00215870;

// USA 0021582C <- EU 0021582C (Ghidra, non-matching)
// GLOBAL DAT_00215870 int *

void func_0021582C(int param_1)

{
  int iVar1;
  
  iVar1 = func_0052FBA0(*DAT_00215870 + 0x3dbbc,*(uint *)(param_1 + 0x90c));
  if (iVar1 == 0) {
    func_0065D9FC((undefined4 *)(param_1 + 0x8bc),5);
    *(undefined1 *)(param_1 + 0xb3b) = 1;
  }
  return;
}

