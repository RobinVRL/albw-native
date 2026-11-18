#include "ghidra_types.h"

extern int func_0038AF14(undefined1 *param_1);
extern undefined4 DAT_00340444;
extern undefined4 DAT_00340448;

// USA 003402A8 <- EU 00340284 (Ghidra, non-matching)
// GLOBAL DAT_00340444 undefined4
// GLOBAL DAT_00340448 undefined4

void func_003402A8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(param_1 + 0x324);
  *(undefined1 *)(param_1 + 0x301) = *(undefined1 *)(param_1 + 0x325);
  *(undefined2 *)(param_1 + 0x302) = *(undefined2 *)(param_1 + 0x326);
  *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x328);
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x32c);
  *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x334);
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x338);
  *(undefined1 *)(param_1 + 0x318) = *(undefined1 *)(param_1 + 0x33c);
  *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x340);
  *(undefined1 *)(param_1 + 800) = *(undefined1 *)(param_1 + 0x344);
  *(undefined2 *)(param_1 + 0x321) = *(undefined2 *)(param_1 + 0x345);
  *(undefined1 *)(param_1 + 0x323) = *(undefined1 *)(param_1 + 0x347);
  func_0038AF14((undefined1 *)(param_1 + 0x324));
  iVar3 = 1;
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x348);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x34c);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x350);
  iVar4 = 1;
  do {
    iVar4 = iVar4 + 1;
    puVar6 = (undefined4 *)(param_1 + 0x348 + iVar3 * 0xc);
    puVar5 = (undefined4 *)(param_1 + 0x400 + iVar3 * 0xc);
    *puVar5 = *puVar6;
    iVar3 = iVar3 + 1;
    puVar5[1] = puVar6[1];
    puVar5[2] = puVar6[2];
  } while (iVar4 < 10);
  *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(param_1 + 0x47c) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x494) = *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x3ec);
  uVar2 = DAT_00340448;
  uVar1 = DAT_00340444;
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined1 *)(param_1 + 0x4b4) = *(undefined1 *)(param_1 + 0x3fc);
  *(undefined2 *)(param_1 + 0x4b5) = *(undefined2 *)(param_1 + 0x3fd);
  *(undefined1 *)(param_1 + 0x4b7) = *(undefined1 *)(param_1 + 0x3ff);
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined1 *)(param_1 + 0x3fc) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  *(undefined1 *)(param_1 + 0x4b9) = 0;
  *(undefined1 *)(param_1 + 0x4ba) = 0;
  *(undefined1 *)(param_1 + 0x4bb) = 0;
  *(undefined1 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = uVar1;
  *(undefined4 *)(param_1 + 0x4c4) = uVar1;
  *(undefined4 *)(param_1 + 0x4c8) = uVar1;
  *(undefined4 *)(param_1 + 0x4cc) = uVar1;
  *(undefined1 *)(param_1 + 0x16b) = 0;
  *(undefined4 *)(param_1 + 0x170) = uVar1;
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  *(undefined4 *)(param_1 + 0x178) = uVar1;
  *(undefined4 *)(param_1 + 0x510) = uVar1;
  *(undefined4 *)(param_1 + 0x514) = uVar1;
  *(undefined4 *)(param_1 + 0x518) = uVar1;
  *(undefined1 *)(param_1 + 0x528) = 0;
  *(undefined1 *)(param_1 + 0x165) = 0;
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  *(undefined4 *)(param_1 + 0x520) = uVar1;
  *(undefined4 *)(param_1 + 0x524) = uVar1;
  *(undefined1 *)(param_1 + 0x529) = 0;
  *(undefined1 *)(param_1 + 0x534) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x104) = uVar2;
  return;
}

