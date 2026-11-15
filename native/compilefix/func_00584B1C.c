/* USA 00584B1C (EU 00584AF4): converted Ghidra text (build/decomp, round-3 stage 2) with one fix.
 * The tail call through *(this+0x44)'s vtable +0x2C keeps r1 = param_2 (the actor; EU 00584B5C..
 * 00584B64 `bx r2` with r1 untouched); Ghidra passed only r0, so 00549BD0 got a garbage actor
 * pointer in file select (boot stop 96). CLASS 1 (lost register arguments). Confidence: high. */
#include "ghidra_types.h"

extern int *DAT_00584b68;

// USA 00584B1C <- EU 00584AF4 (Ghidra, non-matching)
// GLOBAL DAT_00584b68 int *

undefined4 func_00584B1C(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (((-(uint)(*(int **)(param_1 + 0x44) != (int *)0x0) & param_2) == 0) ||
     (*(char *)(param_2 + 0x2d7) != '\0')) {
    return 0;
  }
  if (((*(uint *)(param_2 + 0x2e0) & 2) == 0) &&
     ((*DAT_00584b68 == 0 || (**(int **)(*DAT_00584b68 + 0x2c) != *(int *)(param_2 + 0x2cc))))) {
                    /* WARNING: Could not recover jumptable at 0x00584b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0x44) + 0x2c))(*(int **)(param_1 + 0x44),param_2);
    return uVar1;
  }
  return 1;
}

