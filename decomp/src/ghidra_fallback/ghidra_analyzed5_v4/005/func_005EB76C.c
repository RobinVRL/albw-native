#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eb7ac;
extern undefined4 *DAT_005eb7b0;
extern undefined4 *DAT_005eb7b4;
extern undefined4 DAT_005eb7b8;
extern undefined4 DAT_005eb7bc;
extern undefined4 DAT_005eb7c0;
extern undefined4 DAT_005eb7c4;
extern undefined4 DAT_005eb7c8;

// USA 005EB76C <- EU 005EB744 (Ghidra, non-matching)
// GLOBAL DAT_005eb7ac undefined4 *
// GLOBAL DAT_005eb7b0 undefined4 *
// GLOBAL DAT_005eb7b4 undefined4 *
// GLOBAL DAT_005eb7b8 undefined4
// GLOBAL DAT_005eb7bc undefined4
// GLOBAL DAT_005eb7c0 undefined4
// GLOBAL DAT_005eb7c4 undefined4
// GLOBAL DAT_005eb7c8 undefined4

undefined4 func_005EB76C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb7ac;
  *DAT_005eb7ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb7b0;
  *DAT_005eb7b0 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005eb7b4;
  DAT_005eb7b4[1] = DAT_005eb7b4 + 3;
  puVar1[2] = 0x200;
  *(undefined1 *)(puVar1[1] + 0x1ff) = 0;
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_005eb7c0;
  return func_005902C0(puVar1);
}

