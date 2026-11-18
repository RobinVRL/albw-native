#include "ghidra_types.h"

extern int func_0010DA3C(undefined4 *param_1);
extern undefined4 DAT_0010ca9c;
extern undefined4 DAT_0010caa0;
extern undefined4 DAT_0010caa4;
extern undefined4 DAT_0010caa8;

// USA 0010CA4C <- EU 0010CA4C (Ghidra, non-matching)
// GLOBAL DAT_0010ca9c undefined4
// GLOBAL DAT_0010caa0 undefined4
// GLOBAL DAT_0010caa4 undefined4
// GLOBAL DAT_0010caa8 undefined4

undefined4 * func_0010CA4C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = func_0010DA3C(param_1);
  uVar2 = DAT_0010caa4;
  *puVar3 = DAT_0010ca9c;
  uVar1 = DAT_0010caa0;
  *(undefined1 *)(puVar3 + 10) = 0;
  puVar3[0xb] = uVar1;
  puVar3[0xc] = uVar2;
  puVar3[0xd] = uVar1;
  puVar3[0xe] = uVar2;
  puVar3[0xf] = uVar1;
  puVar3[0x10] = uVar2;
  uVar1 = DAT_0010caa8;
  puVar3[0x11] = 0;
  puVar3[0x12] = uVar1;
  puVar3[0x13] = 0;
  return puVar3;
}

