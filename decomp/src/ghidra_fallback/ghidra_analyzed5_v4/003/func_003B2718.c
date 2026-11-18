#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);

// USA 003B2718 <- EU 003B26F4 (Ghidra, non-matching)

undefined4 func_003B2718(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  (**(code **)(*param_1 + 0x130))(param_1);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  *(short *)(param_1 + 0x18) = (short)((ulonglong)uVar2 * 0xb >> 0x20) + 0x1e;
  if (param_1[0x24] != 0) {
                    /* WARNING: Could not recover jumptable at 0x003b275c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0x138))(param_1,0xc);
  }
                    /* WARNING: Could not recover jumptable at 0x003b276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,10,1);
}

