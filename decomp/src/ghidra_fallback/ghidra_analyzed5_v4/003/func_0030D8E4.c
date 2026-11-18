#include "ghidra_types.h"

extern int func_0030B934(int param_1);

// USA 0030D8E4 <- EU 0030D8C0 (Ghidra, non-matching)

undefined4 func_0030D8E4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (2 < *(ushort *)(iVar1 + 10)) {
    return func_0030B934(param_1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x130);
  if (puVar2 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030d910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)*puVar2)(puVar2,*(ushort *)(iVar1 + 0xc) & 0xff,*(uint *)(iVar1 + 4) & 0xffff);
  }
                    /* WARNING: Could not recover jumptable at 0x0030d938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(**(int **)(param_1 + 0x1c) + 4))
            (*(int **)(param_1 + 0x1c),*(ushort *)(iVar1 + 10) & 0xff,
             *(ushort *)(iVar1 + 0xc) & 0xff,*(uint *)(iVar1 + 4) & 0xffff);
}

