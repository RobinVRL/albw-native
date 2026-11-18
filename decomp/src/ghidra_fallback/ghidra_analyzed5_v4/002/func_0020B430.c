#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0020b474;
extern undefined4 DAT_0020b478;

// USA 0020B430 <- EU 0020B430 (Ghidra, non-matching)
// GLOBAL DAT_0020b474 undefined4
// GLOBAL DAT_0020b478 undefined4

void func_0020B430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0020b478;
  *(undefined4 *)(param_1 + 0x574) = DAT_0020b474;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  iVar2 = func_0036BE78(param_1 + 0xa7c);
  if (iVar2 != 0) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),8);
  }
  return;
}

