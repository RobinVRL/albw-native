#include "ghidra_types.h"

extern int func_003E2FBC(int param_1);
extern undefined4 *DAT_005aeb1c;
extern undefined4 DAT_005aeb20;
extern undefined4 DAT_005aeb24;
extern int DAT_005aeb28;

// USA 005AEAF8 <- EU 005AEAD0 (Ghidra, non-matching)
// GLOBAL DAT_005aeb1c undefined4 *
// GLOBAL DAT_005aeb20 undefined4
// GLOBAL DAT_005aeb24 undefined4
// GLOBAL DAT_005aeb28 int

undefined4 func_005AEAF8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = DAT_005aeb1c;
  *DAT_005aeb1c = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  iVar2 = DAT_005aeb28;
  *(undefined1 *)(DAT_005aeb28 + 0x40) = 0xa5;
  return func_003E2FBC(iVar2 + 0x44);
}

