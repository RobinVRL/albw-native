#include "ghidra_types.h"

extern int func_002E01FC(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_006657B4(undefined4 *param_1,undefined1 param_2);

// USA 00332710 <- EU 003326EC (Ghidra, non-matching)

void func_00332710(int param_1)

{
  func_004CF478(*(int *)(param_1 + 0x47c),0);
  func_002E01FC(param_1);
  if ((*(char *)(param_1 + 0x517) == '\0') &&
     ((int)*(float *)(param_1 + 0x48) == 2 || (int)*(float *)(param_1 + 0x48) == 3)) {
    func_006657B4((undefined4 *)(param_1 + 0x4c0),1);
  }
  return;
}

