#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined1 *DAT_005ebb58;
extern undefined4 DAT_005ebb5c;
extern undefined4 DAT_005ebb60;

// USA 005EBB54 <- EU 005EBB2C (Ghidra, non-matching)
// GLOBAL DAT_005ebb58 undefined1 *
// GLOBAL DAT_005ebb5c undefined4
// GLOBAL DAT_005ebb60 undefined4

undefined4 func_005EBB54(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_005ebb58;
  *DAT_005ebb58 = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  *(undefined4 *)(puVar1 + 0x48) = 0;
  *(undefined4 *)(puVar1 + 0x4c) = 0xffffffff;
  return func_005902C0(puVar1);
}

