#include "ghidra_types.h"

extern int DAT_005b9438;
extern undefined4 *DAT_005b943c;

// USA 005B943C <- EU 005B9414 (Ghidra, non-matching)
// GLOBAL DAT_005b9438 int
// GLOBAL DAT_005b943c undefined4 *

void func_005B943C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b9438;
  *(undefined4 *)(DAT_005b9438 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b943c;
  *DAT_005b943c = 0;
  puVar2[1] = 0;
  return;
}

