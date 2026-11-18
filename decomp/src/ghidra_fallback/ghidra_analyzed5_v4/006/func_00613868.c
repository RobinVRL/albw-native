#include "ghidra_types.h"


// USA 00613868 <- EU 00613840 (Ghidra, non-matching)

int * func_00613868(int *param_1)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x262) = 2;
  if (((char)param_1[0x216] != '\x01') && (*(char *)((int)param_1 + 0x85f) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00613870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar1 = (int *)(**(code **)(*param_1 + 0xac))
                              (param_1,*(undefined1 *)((int)param_1 + 0x853),0xffffffff);
    return piVar1;
  }
  return param_1;
}

