#include "ghidra_types.h"

extern int func_00114D80(uint param_1,uint param_2,uint param_3);

// USA 006920F8 <- EU 006920D0 (Ghidra, non-matching)

/* WARNING: Control flow encountered bad instruction data */

void func_006920F8(uint param_1,uint param_2,uint param_3)

{
  func_00114D80(param_1,param_2,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

