#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern int DAT_0059a3a8;
extern undefined4 *DAT_0059a3ac;
extern undefined4 *DAT_0059a3b0;
extern undefined4 DAT_0059a3b4;
extern undefined4 DAT_0059a3b8;
extern undefined4 DAT_0059a3bc;

// USA 0059A368 <- EU 0059A340 (Ghidra, non-matching)
// GLOBAL DAT_0059a3a8 int
// GLOBAL DAT_0059a3ac undefined4 *
// GLOBAL DAT_0059a3b0 undefined4 *
// GLOBAL DAT_0059a3b4 undefined4
// GLOBAL DAT_0059a3b8 undefined4
// GLOBAL DAT_0059a3bc undefined4

undefined4 func_0059A368(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_0059a3a8;
  *(undefined4 *)(DAT_0059a3a8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_0059a3ac;
  *DAT_0059a3ac = 0;
  puVar2[1] = 0;
  puVar2 = DAT_0059a3b0;
  *DAT_0059a3b0 = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = DAT_0059a3b4;
  puVar2[9] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  puVar2[0x10] = 0;
  *(undefined1 *)(puVar2 + 0x11) = 0;
  return func_005902C0(puVar2);
}

