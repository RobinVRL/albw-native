#include "ghidra_types.h"

extern int DAT_005cb288;
extern undefined4 *DAT_005cb28c;

// USA 005CB28C <- EU 005CB264 (Ghidra, non-matching)
// GLOBAL DAT_005cb288 int
// GLOBAL DAT_005cb28c undefined4 *

void func_005CB28C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cb288;
  *(undefined4 *)(DAT_005cb288 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  puVar2 = DAT_005cb28c;
  *DAT_005cb28c = 0;
  puVar2[1] = 0;
  return;
}

