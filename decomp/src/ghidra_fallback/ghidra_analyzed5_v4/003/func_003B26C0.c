#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B7634(int param_1);
extern int func_0058A7D4(void);

// USA 003B26C0 <- EU 003B269C (Ghidra, non-matching)

undefined4 func_003B26C0(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x130))(param_1);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  uVar2 = (uint)((ulonglong)uVar2 * 0x65 >> 0x20);
  iVar3 = param_1[0x12];
  *(bool *)(iVar3 + 0x935) = 0x32 < uVar2;
  if (0x32 < uVar2) {
    func_002B7634(iVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x003b26f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x100))(param_1);
}

