#include "ghidra_types.h"

extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_00367aa8;

// USA 00367A18 <- EU 003679F4 (Ghidra, non-matching)
// GLOBAL DAT_00367aa8 undefined4

undefined4 * func_00367A18(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = func_004ED00C(param_1,param_2);
  puVar2 = puVar1 + 200;
  *puVar1 = DAT_00367aa8;
  puVar1[0xc9] = puVar2;
  puVar1[0xca] = 0;
  puVar1[0xcb] = 0;
  *puVar2 = puVar2;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  puVar2 = puVar1 + 0xce;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = 0;
    iVar4 = 0x5f;
    puVar1[0xcb] = puVar2;
    do {
      iVar4 = iVar4 + -1;
      puVar2[iVar3] = puVar2 + iVar3 + 4;
      iVar3 = iVar3 + 4;
    } while (iVar4 != 0);
    puVar1[0x24a] = 0;
    puVar1[0xcc] = puVar2;
    puVar1[0xcd] = 0x60;
  }
  *(short *)(puVar1 + 0x24e) = (short)param_2[10];
  *(undefined2 *)((int)puVar1 + 0x93a) = *(undefined2 *)((int)param_2 + 0x2e);
  *(undefined1 *)(puVar1 + 0x24f) = 0;
  *(undefined1 *)((int)puVar1 + 0x93d) = 0;
  *(undefined1 *)((int)puVar1 + 0x93e) = 0;
  *(undefined1 *)((int)puVar1 + 0x93f) = 1;
  return puVar1;
}

