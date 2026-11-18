#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_005a3be4;
extern undefined4 *DAT_005a3be8;
extern undefined4 *DAT_005a3bec;
extern undefined4 DAT_005a3bf0;
extern undefined4 DAT_005a3bf4;

// USA 005A3BC0 <- EU 005A3B98 (Ghidra, non-matching)
// GLOBAL DAT_005a3be4 int
// GLOBAL DAT_005a3be8 undefined4 *
// GLOBAL DAT_005a3bec undefined4 *
// GLOBAL DAT_005a3bf0 undefined4
// GLOBAL DAT_005a3bf4 undefined4

undefined4 func_005A3BC0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005a3be4;
  *(undefined4 *)(DAT_005a3be4 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005a3be8;
  *DAT_005a3be8 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_005a3bec;
  *DAT_005a3bec = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  return func_005902C0(puVar2);
}

