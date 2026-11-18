#include "ghidra_types.h"

extern int func_0010DEB0(undefined4 *param_1);
extern int DAT_005e49e0;
extern undefined4 *DAT_005e49e4;
extern undefined4 *DAT_005e49e8;
extern undefined4 DAT_005e49ec;
extern undefined4 DAT_005e49f0;
extern int DAT_005e49f4;
extern undefined4 *DAT_005e49f8;

// USA 005E4974 <- EU 005E494C (Ghidra, non-matching)
// GLOBAL DAT_005e49e0 int
// GLOBAL DAT_005e49e4 undefined4 *
// GLOBAL DAT_005e49e8 undefined4 *
// GLOBAL DAT_005e49ec undefined4
// GLOBAL DAT_005e49f0 undefined4
// GLOBAL DAT_005e49f4 int
// GLOBAL DAT_005e49f8 undefined4 *

void func_005E4974(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_005e49e0;
  *(undefined4 *)(DAT_005e49e0 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x24) = 0xffffffff;
  puVar3 = DAT_005e49e8;
  puVar2 = DAT_005e49e4;
  *DAT_005e49e4 = 0;
  puVar2[1] = 0;
  *puVar3 = 0;
  func_0010DEB0(puVar3);
  puVar3[3] = 0;
  func_0010DEB0(puVar3 + 3);
  puVar2 = DAT_005e49f8;
  iVar1 = DAT_005e49f4;
  *DAT_005e49f8 = *(undefined4 *)(DAT_005e49f4 + 4);
  puVar2[1] = *(undefined4 *)(iVar1 + 4);
  puVar2[2] = *(undefined4 *)(iVar1 + 4);
  return;
}

