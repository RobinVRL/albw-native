#include "ghidra_types.h"

extern float func_004FAD90(int param_1);
extern undefined4 DAT_0019fcf0;
extern undefined4 DAT_0019fcf4;
extern undefined4 DAT_0019fcf8;
extern undefined4 DAT_0019fcfc;
extern undefined4 DAT_0019fd00;
extern undefined4 DAT_0019fd04;

// USA 0019FBCC <- EU 0019FBCC (Ghidra, non-matching)
// GLOBAL DAT_0019fcf0 undefined4
// GLOBAL DAT_0019fcf4 undefined4
// GLOBAL DAT_0019fcf8 undefined4
// GLOBAL DAT_0019fcfc undefined4
// GLOBAL DAT_0019fd00 undefined4
// GLOBAL DAT_0019fd04 undefined4

void func_0019FBCC(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = DAT_0019fd00;
  uVar1 = DAT_0019fcf4;
  uVar5 = DAT_0019fcf0;
  if (*(char *)(param_1 + 0x1221) == '\0') {
    *(undefined4 *)(param_1 + 0x11f0) = 200;
    *(undefined4 *)(param_1 + 0x11f4) = uVar2;
    uVar1 = DAT_0019fd04;
    *(undefined4 *)(param_1 + 0x11ec) = 0;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x11f0) = 0x41;
    *(undefined4 *)(param_1 + 0x11f4) = uVar1;
    *(undefined4 *)(param_1 + 0x11ec) = 0;
    *(undefined4 *)(param_1 + 0x3e0) = DAT_0019fcf8;
    iVar4 = 0;
    do {
      iVar3 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + iVar4 * 0x48 + 0xa20) + 0x14) + 0x10) = uVar5;
      iVar4 = iVar3;
    } while (iVar3 != 4);
  }
  func_004FAD90(param_1);
  iVar4 = 0;
  do {
    iVar3 = iVar4 + 1;
    iVar4 = param_1 + 0xa10 + iVar4 * 0x48;
    *(undefined2 *)(*(int *)(iVar4 + 0x34) + 0x30) = 0;
    *(undefined1 *)(*(int *)(iVar4 + 0x34) + 0x22) = 0xff;
    iVar4 = iVar3;
  } while (iVar3 != 4);
  *(undefined4 *)(param_1 + 0x1210) = DAT_0019fcfc;
  *(undefined1 *)(param_1 + 0x1222) = 0;
  *(undefined4 *)(param_1 + 0x1214) = uVar5;
  *(undefined4 *)(param_1 + 0x11fc) = 0;
  *(undefined4 *)(param_1 + 0x1200) = uVar5;
  *(undefined4 *)(param_1 + 0x11f8) = 0;
  *(undefined4 *)(param_1 + 0x11b8) = *(undefined4 *)(param_1 + 0x11b4);
  *(undefined4 *)(param_1 + 0xb30) = 0xffffffff;
  return;
}

