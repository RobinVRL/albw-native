#include "ghidra_types.h"

extern undefined4 *DAT_005f1cec;
extern undefined4 *DAT_005f1cf0;

// USA 005F1CF0 <- EU 005F1CC8 (Ghidra, non-matching)
// GLOBAL DAT_005f1cec undefined4 *
// GLOBAL DAT_005f1cf0 undefined4 *

void func_005F1CF0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f1cec;
  *DAT_005f1cec = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f1cf0;
  *DAT_005f1cf0 = 0;
  puVar1[1] = 0;
  return;
}

