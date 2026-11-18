#include "ghidra_types.h"

extern int DAT_005fa798;
extern undefined4 *DAT_005fa79c;

// USA 005FA79C <- EU 005FA774 (Ghidra, non-matching)
// GLOBAL DAT_005fa798 int
// GLOBAL DAT_005fa79c undefined4 *

void func_005FA79C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005fa798;
  *(undefined4 *)(DAT_005fa798 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005fa79c;
  *DAT_005fa79c = 0;
  puVar2[1] = 0;
  return;
}

