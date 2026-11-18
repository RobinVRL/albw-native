// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00556A2C(int param_1);
extern int func_00556A9C();
extern int *DAT_0054ba14;
extern int *DAT_0054ba18;
extern int *DAT_0054ba1c;

// USA 0054B9D8 <- EU 0054B9B0 (Ghidra, non-matching)
// GLOBAL DAT_0054ba14 int *
// GLOBAL DAT_0054ba18 int *
// GLOBAL DAT_0054ba1c int *

int func_0054B9D8(void)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  piVar1 = DAT_0054ba14;
  bVar2 = func_00556A2C(*DAT_0054ba14);
  bVar3 = func_00556A9C(*piVar1);
  if (*(char *)(*DAT_0054ba18 + 0x25) == '\x03') {
    bVar2 = *(byte *)(*DAT_0054ba1c + 0x8e8);
    bVar3 = *(byte *)(*DAT_0054ba1c + 0x8e9);
  }
  iVar4 = (uint)bVar2 - (uint)bVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (100 < iVar4) {
    iVar4 = 100;
  }
  return iVar4;
}

