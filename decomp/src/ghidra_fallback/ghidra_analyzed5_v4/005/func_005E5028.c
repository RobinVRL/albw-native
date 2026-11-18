#include "ghidra_types.h"

extern int DAT_005e5034;
extern undefined4 *DAT_005e5038;
extern undefined4 DAT_005e503c;

// USA 005E5028 <- EU 005E5000 (Ghidra, non-matching)
// GLOBAL DAT_005e5034 int
// GLOBAL DAT_005e5038 undefined4 *
// GLOBAL DAT_005e503c undefined4

void func_005E5028(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_005e503c;
  iVar1 = DAT_005e5034;
  *(undefined4 *)(DAT_005e5034 + 0x30) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
  puVar2 = DAT_005e5038;
  *DAT_005e5038 = 0;
  puVar2[1] = 0;
  puVar2[2] = uVar3;
  puVar2[3] = uVar3;
  return;
}

