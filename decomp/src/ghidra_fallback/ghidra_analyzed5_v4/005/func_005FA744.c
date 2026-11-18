#include "ghidra_types.h"

extern int DAT_005fa740;
extern undefined4 *DAT_005fa744;

// USA 005FA744 <- EU 005FA71C (Ghidra, non-matching)
// GLOBAL DAT_005fa740 int
// GLOBAL DAT_005fa744 undefined4 *

void func_005FA744(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005fa740;
  *(undefined4 *)(DAT_005fa740 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005fa744;
  *DAT_005fa744 = 0;
  puVar2[1] = 0;
  return;
}

