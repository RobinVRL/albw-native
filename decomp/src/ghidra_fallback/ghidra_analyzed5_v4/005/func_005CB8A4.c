#include "ghidra_types.h"

extern int func_00491260(undefined4 *param_1);
extern int func_005902C0(void *param_1);
extern int DAT_005cb8f8;
extern undefined4 *DAT_005cb8fc;
extern undefined4 DAT_005cb900;
extern undefined4 DAT_005cb904;
extern undefined4 DAT_005cb908;
extern undefined4 *DAT_005cb90c;
extern undefined4 DAT_005cb910;
extern undefined4 DAT_005cb914;

// USA 005CB8A4 <- EU 005CB87C (Ghidra, non-matching)
// GLOBAL DAT_005cb8f8 int
// GLOBAL DAT_005cb8fc undefined4 *
// GLOBAL DAT_005cb900 undefined4
// GLOBAL DAT_005cb904 undefined4
// GLOBAL DAT_005cb908 undefined4
// GLOBAL DAT_005cb90c undefined4 *
// GLOBAL DAT_005cb910 undefined4
// GLOBAL DAT_005cb914 undefined4

undefined4 func_005CB8A4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_005cb8f8;
  *(undefined4 *)(DAT_005cb8f8 + 8) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
  puVar2 = DAT_005cb8fc;
  *DAT_005cb8fc = 0;
  puVar2[1] = 0;
  puVar2[-3] = DAT_005cb900;
  puVar2 = (undefined4 *)func_00491260(DAT_005cb90c);
  *puVar2 = DAT_005cb910;
  puVar2[3] = 0xfffffff0;
  *(undefined1 *)(puVar2 + 0x31) = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined1 *)(puVar2 + 0x2f) = 0;
  *(undefined1 *)((int)puVar2 + 5) = 0;
  *(undefined1 *)((int)puVar2 + 0xbd) = 0;
  return func_005902C0(puVar2);
}

