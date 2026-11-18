#include "ghidra_types.h"

extern undefined *PTR_00326528;

// USA 00326510 <- EU 003264EC (Ghidra, non-matching)
// GLOBAL PTR_00326528 undefined *

/* WARNING: Removing unreachable block (ram,0x00326520) */
/* WARNING: Removing unreachable block (ram,0x00326728) */
/* WARNING: Removing unreachable block (ram,0x0032672c) */
/* WARNING: Removing unreachable block (ram,0x00326730) */
/* WARNING: Removing unreachable block (ram,0x00326734) */
/* WARNING: Removing unreachable block (ram,0x00326788) */

undefined4 func_00326510(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0032651c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (*(code *)PTR_00326528)();
}

