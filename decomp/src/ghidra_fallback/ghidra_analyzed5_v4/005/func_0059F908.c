#include "ghidra_types.h"

extern int DAT_0059f904;
extern undefined4 *DAT_0059f908;

// USA 0059F908 <- EU 0059F8E0 (Ghidra, non-matching)
// GLOBAL DAT_0059f904 int
// GLOBAL DAT_0059f908 undefined4 *

void func_0059F908(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0059f904;
  *(undefined4 *)(DAT_0059f904 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059f908;
  *DAT_0059f908 = 0;
  puVar2[1] = 0;
  return;
}

