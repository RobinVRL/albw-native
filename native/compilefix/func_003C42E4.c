/* USA 003C42E4 <- EU 003C42C0 (stage-2 Ghidra text) with a dropped indirect-call argument restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129): vtable +0x138 (state change) takes (this, state, 1); at
 * the site Ghidra printed as (param_1,1) the ARM sets r2 = 1; mov r1, r2 (scratchpad vsite.py check). */
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B79CC(int param_1,undefined2 param_2);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_0058A7D4(void);

// USA 003C42E4 <- EU 003C42C0 (Ghidra, non-matching)

void func_003C42E4(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *(uint *)(param_1[0x12] + 0x2e0) = *(uint *)(param_1[0x12] + 0x2e0) | 2;
  func_002B79CC(param_1[0x12],0x1e);
  func_003842C0(param_1[0x12] + 0x8c0,0x2c,10,1);
  (**(code **)(*param_1 + 0x138))(param_1,1,1);
  (**(code **)(*param_1 + 0x130))(param_1);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  *(short *)(param_1 + 0x18) = (short)((ulonglong)uVar2 * 0x1f >> 0x20) + 0x1e;
  return;
}

