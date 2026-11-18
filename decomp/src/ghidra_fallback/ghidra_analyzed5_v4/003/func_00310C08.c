// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0054B9D8(void);
extern int func_00556A9C();
extern int DAT_00310c7c;
extern int *DAT_00310c80;

// USA 00310C08 <- EU 00310BE4 (Ghidra, non-matching)
// GLOBAL DAT_00310c7c int
// GLOBAL DAT_00310c80 int *

/* WARNING: Removing unreachable block (ram,0x00310c58) */

bool func_00310C08(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar6;
  bool bVar7;
  uint uVar5;
  
  iVar3 = func_0054B9D8();
  piVar1 = DAT_00310c80;
  iVar4 = (int)((ulonglong)((longlong)DAT_00310c7c * (longlong)iVar3) >> 0x20);
  iVar3 = iVar3 + ((iVar4 >> 2) - (iVar4 >> 0x1f)) * -10;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (10 < iVar3) {
    iVar3 = 10;
  }
  *(int *)(param_1 + 0xacc) = iVar3;
  bVar2 = func_00556A9C(*piVar1);
  uVar5 = (uint)bVar2;
  *(uint *)(param_1 + 0xad0) = uVar5;
  uVar6 = 10 - *(int *)(param_1 + 0xacc);
  if ((int)uVar6 < (int)uVar5) {
    uVar5 = uVar6;
  }
  *(uint *)(param_1 + 0xad0) = uVar5;
  iVar4 = *(int *)(*piVar1 + 0x10);
  bVar2 = *(byte *)(iVar4 + 0x509);
  bVar7 = (uVar5 & 0xff) <= (uint)bVar2;
  if (bVar7) {
    *(byte *)(iVar4 + 0x509) = bVar2 - (char)uVar5;
  }
  return bVar7;
}

