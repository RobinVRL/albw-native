#include "ghidra_types.h"

extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern float DAT_002ae1ec;

// USA 002AE1BC <- EU 002AE198 (Ghidra, non-matching)
// GLOBAL DAT_002ae1ec float

void func_002AE1BC(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x34) + 0x7fc) == '\x02') {
    func_002B0D7C(param_1,10,7,0,DAT_002ae1ec);
  }
  else {
    func_002B0D7C(param_1,10,1,0,DAT_002ae1ec);
  }
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 8;
  return;
}

