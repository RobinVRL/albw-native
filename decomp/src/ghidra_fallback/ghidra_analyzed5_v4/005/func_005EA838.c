#include "ghidra_types.h"

extern int DAT_005ea868;
extern undefined4 *DAT_005ea86c;
extern undefined4 DAT_005ea870;

// USA 005EA838 <- EU 005EA810 (Ghidra, non-matching)
// GLOBAL DAT_005ea868 int
// GLOBAL DAT_005ea86c undefined4 *
// GLOBAL DAT_005ea870 undefined4

void func_005EA838(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_005ea870;
  iVar1 = DAT_005ea868;
  *(undefined4 *)(DAT_005ea868 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005ea86c;
  *DAT_005ea86c = 0;
  puVar2[1] = 0;
  puVar2[2] = uVar3;
  puVar2[3] = uVar3;
  puVar2[-6] = 0x40000000;
  puVar2[-5] = 0xc0000000;
  puVar2[-4] = 0x80000000;
  return;
}

