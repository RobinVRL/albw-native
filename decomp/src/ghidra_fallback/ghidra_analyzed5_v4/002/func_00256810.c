#include "ghidra_types.h"

extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_004A143C(byte *param_1,uint param_2);
extern uint DAT_00256894;

// USA 00256810 <- EU 00256838 (Ghidra, non-matching)
// GLOBAL DAT_00256894 uint

void func_00256810(byte *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  func_001164F4((undefined4 *)param_1,0x600);
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar4 = iVar3 + 1;
    iVar1 = iVar1 + 2;
    param_1[iVar3 * 0x38 + 0x34] = 0xff;
    iVar3 = iVar3 + 2;
    param_1[iVar4 * 0x38 + 0x34] = 0xff;
  } while (iVar1 < 0x14);
  uVar2 = func_004A143C(param_1,DAT_00256894);
  *(uint *)(param_1 + 0x5fc) = uVar2;
  return;
}

