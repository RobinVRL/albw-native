#include "ghidra_types.h"

extern int DAT_005b9464;
extern undefined4 *DAT_005b9468;

// USA 005B9468 <- EU 005B9440 (Ghidra, non-matching)
// GLOBAL DAT_005b9464 int
// GLOBAL DAT_005b9468 undefined4 *

void func_005B9468(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005b9464;
  *(undefined4 *)(DAT_005b9464 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005b9468;
  *DAT_005b9468 = 0;
  puVar2[1] = 0;
  return;
}

