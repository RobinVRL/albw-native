#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 DAT_002f22d4;
extern undefined4 DAT_002f22d8;

// USA 002F227C <- EU 002F2258 (Ghidra, non-matching)
// GLOBAL DAT_002f22d4 undefined4
// GLOBAL DAT_002f22d8 undefined4

void func_002F227C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = DAT_002f22d4;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x87;
  *(undefined4 *)(param_1 + 0xb10) = 0x1e;
  *(undefined4 *)(param_1 + 0xb14) = uVar1;
  *(undefined4 *)(param_1 + 0xb0c) = 0;
  uVar3 = func_0058AB74(param_1);
  iVar2 = (int)uVar3;
  if ((iVar2 != 0x1e && iVar2 != 0x1c) && iVar2 != 0x1d) {
    func_004FABDC(param_1,0x18,0xffffffff,0);
  }
  *(undefined4 *)(param_1 + 0xb98) = DAT_002f22d8;
  return;
}

