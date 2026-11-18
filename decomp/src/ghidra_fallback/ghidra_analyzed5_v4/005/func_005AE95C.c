#include "ghidra_types.h"

extern int DAT_005ae958;
extern undefined4 *DAT_005ae95c;

// USA 005AE95C <- EU 005AE934 (Ghidra, non-matching)
// GLOBAL DAT_005ae958 int
// GLOBAL DAT_005ae95c undefined4 *

void func_005AE95C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005ae958;
  *(undefined4 *)(DAT_005ae958 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  puVar2 = DAT_005ae95c;
  *DAT_005ae95c = 0;
  puVar2[1] = 0;
  return;
}

