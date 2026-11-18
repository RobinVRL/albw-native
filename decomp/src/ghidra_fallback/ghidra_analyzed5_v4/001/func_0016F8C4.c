#include "ghidra_types.h"

extern int DAT_0016f944;
extern undefined4 DAT_0016f948;
extern undefined4 DAT_0016f94c;
extern undefined4 DAT_0016f950;

// USA 0016F8C4 <- EU 0016F8C4 (Ghidra, non-matching)
// GLOBAL DAT_0016f944 int
// GLOBAL DAT_0016f948 undefined4
// GLOBAL DAT_0016f94c undefined4
// GLOBAL DAT_0016f950 undefined4

undefined4 func_0016F8C4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0016f944;
  param_1[1] = 0;
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  param_1[2] = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = DAT_0016f948;
  param_1[3] = uVar3;
  param_1[5] = 0;
  *param_1 = uVar2;
  uVar2 = DAT_0016f94c;
  uVar3 = *(undefined4 *)(iVar1 + 0x1c);
  param_1[6] = *(undefined4 *)(iVar1 + 0x18);
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[4] = uVar2;
  param_1[9] = 0;
  uVar2 = DAT_0016f950;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = uVar2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0x3c;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  return (undefined4)param_1;
}

