#include "ghidra_types.h"

extern int func_004EB524(int param_1,int param_2);
extern int *DAT_003aa104;
extern int *DAT_003aa108;

// USA 003AA104 <- EU 003AA0E0 (Ghidra, non-matching)
// GLOBAL DAT_003aa104 int *
// GLOBAL DAT_003aa108 int *

undefined4 func_003AA104(void)

{
  *(undefined1 *)(*(int *)(*(int *)(*DAT_003aa104 + 300) + 0x24) + 0xe) = 1;
  return func_004EB524(*DAT_003aa108,1);
}

