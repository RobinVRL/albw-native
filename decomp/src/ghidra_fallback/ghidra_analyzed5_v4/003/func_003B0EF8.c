#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7634(int param_1);
extern int func_0058A7D4(void);

// USA 003B0EF8 <- EU 003B0ED4 (Ghidra, non-matching)

undefined4 func_003B0EF8(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x130))(param_1);
  (**(code **)(*param_1 + 0x100))(param_1);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  param_1[0x13] = (int)((ulonglong)uVar2 * 0x1f >> 0x20) + 0x1e;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  if ((uint)((ulonglong)uVar2 * 0x65 >> 0x20) < 0x33) {
    *(undefined1 *)(param_1[0x12] + 0x935) = 2;
    return 0;
  }
  iVar3 = param_1[0x12];
  *(undefined1 *)(iVar3 + 0x935) = 3;
  return func_002B7634(iVar3);
}

