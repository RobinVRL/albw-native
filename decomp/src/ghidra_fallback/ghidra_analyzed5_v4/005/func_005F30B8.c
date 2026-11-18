#include "ghidra_types.h"

extern int func_0049BAA8(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f3114;
extern undefined4 *DAT_005f3118;
extern undefined4 *DAT_005f311c;
extern undefined4 DAT_005f3120;
extern undefined4 DAT_005f3124;
extern undefined4 DAT_005f3128;
extern undefined4 DAT_005f312c;
extern undefined4 DAT_005f3130;
extern undefined4 *DAT_005f3134;
extern undefined4 DAT_005f3138;

// USA 005F30B8 <- EU 005F3090 (Ghidra, non-matching)
// GLOBAL DAT_005f3114 undefined4 *
// GLOBAL DAT_005f3118 undefined4 *
// GLOBAL DAT_005f311c undefined4 *
// GLOBAL DAT_005f3120 undefined4
// GLOBAL DAT_005f3124 undefined4
// GLOBAL DAT_005f3128 undefined4
// GLOBAL DAT_005f312c undefined4
// GLOBAL DAT_005f3130 undefined4
// GLOBAL DAT_005f3134 undefined4 *
// GLOBAL DAT_005f3138 undefined4

undefined4 func_005F30B8(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f3114;
  *DAT_005f3114 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f3118;
  *DAT_005f3118 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_005f311c;
  DAT_005f311c[1] = DAT_005f311c + 3;
  puVar1[2] = 0x400;
  *(undefined1 *)(puVar1[1] + 0x3ff) = 0;
  *(undefined1 *)puVar1[1] = 0;
  *puVar1 = DAT_005f3128;
  puVar1 = func_0049BAA8(DAT_005f3134);
  return func_005902C0(puVar1);
}

