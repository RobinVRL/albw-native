#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);

// USA 00367D48 <- EU 00367D24 (Ghidra, non-matching)

undefined4 func_00367D48(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    func_001788DC(*(int *)(param_1 + 0x28),param_2);
    iVar2 = *(int *)(param_1 + 0x28);
    piVar1 = *(int **)(param_1 + 0x38);
    *(undefined2 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar2 + 0x3d) = 0;
                    /* WARNING: Could not recover jumptable at 0x00367d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar1 + 0x60))
              (piVar1,*(undefined4 *)(*(int *)(param_1 + 0x28) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x28) + 0x20) >> 1);
  }
  return 0;
}

