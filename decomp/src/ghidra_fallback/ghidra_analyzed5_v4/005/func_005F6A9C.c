#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined1 *DAT_005f6aa0;
extern undefined4 DAT_005f6aa4;
extern undefined4 DAT_005f6aa8;

// USA 005F6A9C <- EU 005F6A74 (Ghidra, non-matching)
// GLOBAL DAT_005f6aa0 undefined1 *
// GLOBAL DAT_005f6aa4 undefined4
// GLOBAL DAT_005f6aa8 undefined4

undefined4 func_005F6A9C(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_005f6aa0;
  *DAT_005f6aa0 = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  *(undefined4 *)(puVar1 + 0x3c) = 0xffffffff;
  return func_005902C0(puVar1);
}

