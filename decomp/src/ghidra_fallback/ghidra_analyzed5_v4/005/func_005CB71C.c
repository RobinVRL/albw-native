#include "ghidra_types.h"

extern int DAT_005cb718;
extern undefined4 *DAT_005cb71c;

// USA 005CB71C <- EU 005CB6F4 (Ghidra, non-matching)
// GLOBAL DAT_005cb718 int
// GLOBAL DAT_005cb71c undefined4 *

void func_005CB71C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cb718;
  *(undefined4 *)(DAT_005cb718 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cb71c;
  *DAT_005cb71c = 0;
  puVar2[1] = 0;
  return;
}

