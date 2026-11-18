#include "ghidra_types.h"

extern int DAT_005cdb08;
extern undefined4 *DAT_005cdb0c;

// USA 005CDB0C <- EU 005CDAE4 (Ghidra, non-matching)
// GLOBAL DAT_005cdb08 int
// GLOBAL DAT_005cdb0c undefined4 *

void func_005CDB0C(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cdb08;
  *(undefined4 *)(DAT_005cdb08 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cdb0c;
  *DAT_005cdb0c = 0;
  puVar2[1] = 0;
  return;
}

