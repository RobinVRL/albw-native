// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00361640();
extern int func_003A52EC(int *param_1);
extern int *DAT_0030d8bc;

// USA 0030D8B4 <- EU 0030D890 (Ghidra, non-matching)
// GLOBAL DAT_0030d8bc int *

undefined4 func_0030D8B4(int *param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x56) = 0;
  iVar1 = func_00361640(*DAT_0030d8bc);
  *(undefined1 *)(iVar1 + 0x10) = 0;
  return func_003A52EC(param_1);
}

