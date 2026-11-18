#include "ghidra_types.h"

extern undefined4 *DAT_005f5bc8;
extern undefined4 *DAT_005f5bcc;

// USA 005F5BCC <- EU 005F5BA4 (Ghidra, non-matching)
// GLOBAL DAT_005f5bc8 undefined4 *
// GLOBAL DAT_005f5bcc undefined4 *

void func_005F5BCC(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f5bc8;
  *DAT_005f5bc8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f5bcc;
  *DAT_005f5bcc = 0;
  puVar1[1] = 0;
  return;
}

