#include "ghidra_types.h"

extern int DAT_005c2528;
extern undefined4 *DAT_005c252c;

// USA 005C252C <- EU 005C2504 (Ghidra, non-matching)
// GLOBAL DAT_005c2528 int
// GLOBAL DAT_005c252c undefined4 *

void func_005C252C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005c2528;
  *(undefined4 *)(DAT_005c2528 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005c252c;
  *DAT_005c252c = 0;
  puVar2[1] = 0;
  return;
}

