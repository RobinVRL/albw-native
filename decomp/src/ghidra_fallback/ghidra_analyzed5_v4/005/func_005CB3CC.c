#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005cb3d8;
extern undefined4 *DAT_005cb3dc;
extern undefined4 DAT_005cb3e0;
extern undefined4 DAT_005cb3e4;

// USA 005CB3CC <- EU 005CB3A4 (Ghidra, non-matching)
// GLOBAL DAT_005cb3d8 int
// GLOBAL DAT_005cb3dc undefined4 *
// GLOBAL DAT_005cb3e0 undefined4
// GLOBAL DAT_005cb3e4 undefined4

undefined4 func_005CB3CC(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cb3d8;
  *(undefined4 *)(DAT_005cb3d8 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
  puVar2 = DAT_005cb3dc;
  *DAT_005cb3dc = 0;
  puVar2[1] = 0;
  puVar2 = puVar2 + -4;
  *puVar2 = 0;
  return func_005902C0(puVar2);
}

