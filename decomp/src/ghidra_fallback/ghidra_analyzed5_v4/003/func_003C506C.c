#include "ghidra_types.h"

extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);

// USA 003C506C <- EU 003C5048 (Ghidra, non-matching)

undefined4 func_003C506C(int *param_1)

{
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  func_003842C0(param_1[0x12] + 0x8c0,0x32,10,1);
  (**(code **)(*param_1 + 0x138))(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x003c50a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0xfc))(param_1);
}

