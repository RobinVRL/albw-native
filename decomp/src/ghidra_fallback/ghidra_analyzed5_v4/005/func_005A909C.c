#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005a90b0;
extern undefined4 DAT_005a90b4;
extern undefined4 DAT_005a90b8;
extern undefined4 DAT_005a90bc;

// USA 005A909C <- EU 005A9074 (Ghidra, non-matching)
// GLOBAL DAT_005a90b0 undefined4 *
// GLOBAL DAT_005a90b4 undefined4
// GLOBAL DAT_005a90b8 undefined4
// GLOBAL DAT_005a90bc undefined4

undefined4 func_005A909C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005a90b0;
  *DAT_005a90b0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  uVar2 = DAT_005a90b4;
  *(undefined1 *)(puVar1 + 0x4c6) = 0;
  puVar1[0x4c8] = uVar2;
  return func_005902C0(puVar1);
}

