#include "ghidra_types.h"

extern int DAT_005bd868;
extern undefined4 *DAT_005bd86c;

// USA 005BD86C <- EU 005BD844 (Ghidra, non-matching)
// GLOBAL DAT_005bd868 int
// GLOBAL DAT_005bd86c undefined4 *

void func_005BD86C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005bd868;
  *(undefined4 *)(DAT_005bd868 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  puVar2 = DAT_005bd86c;
  *DAT_005bd86c = 0;
  puVar2[1] = 0;
  return;
}

