#include "ghidra_types.h"

extern int DAT_004b77e0;
extern int DAT_004b77e4;

// USA 004B77C4 <- EU 004B779C (Ghidra, non-matching)
// GLOBAL DAT_004b77e0 int
// GLOBAL DAT_004b77e4 int

void func_004B77C4(int param_1)

{
  code *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  
  if (*(byte *)(DAT_004b77e0 + param_1) < 2) {
    UNRECOVERED_JUMPTABLE = (code *)(DAT_004b77e4 + (uint)*(byte *)(DAT_004b77e0 + param_1) * 8);
    pcVar1 = UNRECOVERED_JUMPTABLE + 4;
    bVar2 = (*(uint *)pcVar1 & 1) == 0;
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = *(code **)UNRECOVERED_JUMPTABLE;
    }
    if (!bVar2) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(*(int *)(param_1 + ((int)*(uint *)pcVar1 >> 1)) +
                     *(int *)UNRECOVERED_JUMPTABLE);
    }
                    /* WARNING: Could not recover jumptable at 0x004b77d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

