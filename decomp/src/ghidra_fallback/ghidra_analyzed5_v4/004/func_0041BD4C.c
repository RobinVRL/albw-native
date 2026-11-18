#include "ghidra_types.h"

extern int DAT_0041bd54;

// USA 0041BD4C <- EU 0041BD2C (Ghidra, non-matching)
// GLOBAL DAT_0041bd54 int

void func_0041BD4C(void)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = DAT_0041bd54;
  iVar2 = 0;
  do {
    puVar3 = (undefined2 *)(iVar1 + iVar2 * 2);
    iVar2 = iVar2 + 2;
    *puVar3 = 0xffff;
    puVar3[1] = 0xffff;
  } while (iVar2 < 0x10);
  return;
}

