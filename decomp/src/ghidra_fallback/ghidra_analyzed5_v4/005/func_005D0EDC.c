#include "ghidra_types.h"

extern int DAT_005d0ed8;
extern undefined4 *DAT_005d0edc;

// USA 005D0EDC <- EU 005D0EB4 (Ghidra, non-matching)
// GLOBAL DAT_005d0ed8 int
// GLOBAL DAT_005d0edc undefined4 *

void func_005D0EDC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005d0ed8;
  *(undefined4 *)(DAT_005d0ed8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005d0edc;
  *DAT_005d0edc = 0;
  puVar2[1] = 0;
  return;
}

