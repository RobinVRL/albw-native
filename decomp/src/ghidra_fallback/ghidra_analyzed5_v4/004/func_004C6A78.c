#include "ghidra_types.h"

extern int func_0048AC68(uint param_1);

// USA 004C6A78 <- EU 004C6A50 (Ghidra, non-matching)

void func_004C6A78(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = (uint)*(ushort *)(param_2 + 2);
  *(uint *)(param_1 + 0x578) = uVar1;
  uVar2 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 0x574) = uVar2;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x570) = uVar5;
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x588) = uVar6;
  *(undefined4 *)(param_1 + 0x58c) = uVar5;
  *(undefined4 *)(param_1 + 0x590) = uVar3;
  *(uint *)(param_1 + 0x578) = uVar1;
  if ((int)uVar2 < (int)uVar1) {
    uVar1 = uVar2;
  }
  iVar4 = 0;
  *(uint *)(param_1 + 0x574) = uVar2;
  uVar2 = 0;
  *(uint *)(param_1 + 0x578) = uVar1;
  do {
    uVar1 = func_0048AC68(((undefined4 *)(param_1 + 0x56c))[uVar2]);
    uVar2 = uVar2 + 1;
    iVar4 = iVar4 + uVar1;
  } while (uVar2 < 2);
  if (0x32 < iVar4) {
    *(undefined4 *)(param_1 + 0x56c) = 0;
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  return;
}

