#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 uRam00128738;

// USA 001286D8 <- EU 001286D8 (Ghidra, non-matching)
// GLOBAL UNK_00128738 undefined4

void func_001286D8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x10;
  *(undefined1 *)(param_1 + 0x920) = 1;
  uVar2 = param_2 & 0xff;
  bVar4 = 0x1d < uVar2;
  bVar3 = uVar2 != 0x1e;
  if (bVar3) {
    uVar2 = uVar2 - 0xe;
    bVar4 = 2 < uVar2;
  }
  if (!bVar4 || (!bVar3 || uVar2 == 3)) {
    func_004FABDC(param_1,1,0xffffffff,0);
    uVar1 = uRam00128738;
    *(undefined4 *)(param_1 + 0x4e4) = uRam00128738;
    *(undefined4 *)(param_1 + 0x4e8) = uVar1;
    *(undefined4 *)(param_1 + 0x4ec) = uVar1;
  }
  return;
}

