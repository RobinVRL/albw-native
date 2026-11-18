#include "ghidra_types.h"

extern int func_00261694(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0052FD7C(int param_1,undefined *param_2,undefined4 param_3);
extern undefined4 uRam002681fc;
extern undefined4 uRam00268200;
extern int *DAT_0035b07c;
extern undefined *DAT_0035b080;

// USA 0026816C <- EU 00268194 (Ghidra, non-matching)
// GLOBAL DAT_0035b07c int *
// GLOBAL DAT_0035b080 undefined *
// GLOBAL UNK_002681fc undefined4
// GLOBAL UNK_00268200 undefined4

undefined4 func_0026816C(int param_1)

{
  undefined4 uVar1;
  
  func_004FABDC(param_1,0x13,0xffffffff,0);
  uVar1 = uRam002681fc;
  *(undefined4 *)(param_1 + 0xaf4) = 0x3c;
  *(undefined4 *)(param_1 + 0xaf8) = uVar1;
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  uVar1 = uRam00268200;
  *(undefined4 *)(param_1 + 0xb00) = 0x1e;
  *(undefined4 *)(param_1 + 0xb04) = uVar1;
  *(undefined4 *)(param_1 + 0xafc) = 0;
  func_00261694(*(int *)(param_1 + 0x8f0));
  return func_0052FD7C(*DAT_0035b07c + 0x3dbbc,DAT_0035b080,0);
}

