#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0020a2e0;
extern undefined4 DAT_0020a2e4;

// USA 0020A2A4 <- EU 0020A2A4 (Ghidra, non-matching)
// GLOBAL DAT_0020a2e0 undefined4
// GLOBAL DAT_0020a2e4 undefined4

undefined4 func_0020A2A4(int param_1)

{
  undefined4 uVar1;
  
  func_0036BE78(param_1 + 0xa7c);
  uVar1 = DAT_0020a2e4;
  *(undefined4 *)(param_1 + 0x574) = DAT_0020a2e0;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  return func_0065D630((undefined4 *)(param_1 + 0x8bc),1);
}

