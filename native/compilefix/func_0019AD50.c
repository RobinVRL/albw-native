/* USA 0019AD50 <- EU 0019AD50 (stage-2 Ghidra text) with dropped indirect-call arguments restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129, tools/indirect_args_scan.py): the tail call to vtable +0x10 passes r2 = (*(u32 *)(param_1 + 0x4DC) & 1) != 0
 * (EU 0019ADBC..0019ADD8: ldr r1, [r5, #0x1c] with r5 = param_1 + 0x4C0; tst r1, #1; movne/moveq r2). */
#include "ghidra_types.h"

extern ulonglong func_004981A4(int param_1,int param_2,int param_3);
extern int *DAT_0019ade4;

// USA 0019AD50 <- EU 0019AD50 (Ghidra, non-matching)
// GLOBAL DAT_0019ade4 int *

undefined4 func_0019AD50(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1 + param_2 * 400;
  piVar2 = (int *)(iVar1 + 0x10);
  if ((*(char *)(iVar1 + 0x154) == '\0') && (param_2 != 3)) {
    if (*(int *)(*DAT_0019ade4 + 0xd0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = **(int **)(*DAT_0019ade4 + 0xd8);
    }
    func_004981A4((int)piVar2,iVar1,1);
    (**(code **)(*piVar2 + 0x14))(piVar2);
                    /* WARNING: Could not recover jumptable at 0x0019addc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar2 + 0x10))(piVar2,*(undefined4 *)(param_1 + 0x5dc),(uint)((*(uint *)(param_1 + 0x4dc) & 1) != 0));
  }
  return 0;
}

