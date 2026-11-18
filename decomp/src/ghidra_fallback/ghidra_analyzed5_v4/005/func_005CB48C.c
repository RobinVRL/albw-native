#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005cb4d0;
extern undefined4 DAT_005cb4d4;
extern undefined4 DAT_005cb4d8;
extern undefined4 DAT_005cb4dc;
extern undefined4 *DAT_005cb4e0;
extern undefined4 DAT_005cb4e4;

// USA 005CB48C <- EU 005CB464 (Ghidra, non-matching)
// GLOBAL DAT_005cb4d0 undefined4 *
// GLOBAL DAT_005cb4d4 undefined4
// GLOBAL DAT_005cb4d8 undefined4
// GLOBAL DAT_005cb4dc undefined4
// GLOBAL DAT_005cb4e0 undefined4 *
// GLOBAL DAT_005cb4e4 undefined4

undefined4 func_005CB48C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_005cb4d4;
  puVar1 = DAT_005cb4d0;
  DAT_005cb4d0[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = uVar2;
  puVar1[0x15] = 0;
  puVar1 = DAT_005cb4e0;
  *DAT_005cb4e0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return func_005902C0(puVar1);
}

