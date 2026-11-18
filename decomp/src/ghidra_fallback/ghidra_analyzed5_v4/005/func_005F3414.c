#include "ghidra_types.h"

extern int DAT_005f341c;
extern undefined4 *DAT_005f3420;
extern undefined4 DAT_005f3424;

// USA 005F3414 <- EU 005F33EC (Ghidra, non-matching)
// GLOBAL DAT_005f341c int
// GLOBAL DAT_005f3420 undefined4 *
// GLOBAL DAT_005f3424 undefined4

void func_005F3414(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005f341c;
  *(undefined4 *)(DAT_005f341c + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005f3420;
  *DAT_005f3420 = 0;
  puVar2[1] = 0;
  puVar2[-4] = DAT_005f3424;
  return;
}

