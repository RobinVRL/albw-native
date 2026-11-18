#include "ghidra_types.h"

extern int func_0056BD28(int *param_1,uint *param_2,uint param_3);

// USA 00587BA8 <- EU 00587B80 (Ghidra, non-matching)

undefined4 func_00587BA8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_2 + 8))(param_2);
  return func_0056BD28((int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x140) + 0xc),(uint *)param_2[1],
                0xffffffff);
}

