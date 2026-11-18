#include "ghidra_types.h"

extern int func_0010DB90(void);
extern undefined4 DAT_0010baec;

// USA 0010BAB4 <- EU 0010BAB4 (Ghidra, non-matching)
// GLOBAL DAT_0010baec undefined4

undefined4 func_0010BAB4(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)func_0010DB90();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010bae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,param_1,4);
    return uVar2;
  }
  return 0;
}

